cmake_minimum_required(VERSION 2.8.12)
project(emparser)

set(SOURCE_DIR "src/emparser")
set(ANTLR4_DIR "vendor/antlr4/runtime/Cpp/runtime/src")

set(INCLUDE_DIRS
    ${SOURCE_DIR}
    vendor/antlr4/runtime/Cpp/runtime/src
    vendor/catch/include
    vendor/pugixml/src
    vendor/spdlog/include
    ${ANTLR4_DIR}
    ${ANTLR4_DIR}/atn
    ${ANTLR4_DIR}/dfa
    ${ANTLR4_DIR}/misc
    ${ANTLR4_DIR}/support
    ${ANTLR4_DIR}/tree
    ${ANTLR4_DIR}/tree/pattern
    ${ANTLR4_DIR}/tree/xpath
    )

file(GLOB ANTLR4_SOURCES
  "${ANTLR4_DIR}/*.cpp"
  "${ANTLR4_DIR}/atn/*.cpp"
  "${ANTLR4_DIR}/dfa/*.cpp"
  "${ANTLR4_DIR}/misc/*.cpp"
  "${ANTLR4_DIR}/support/*.cpp"
  "${ANTLR4_DIR}/tree/*.cpp"
  "${ANTLR4_DIR}/tree/pattern/*.cpp"
  "${ANTLR4_DIR}/tree/xpath/*.cpp"
)

file(GLOB MIZAR_SOURCES
  "${SOURCE_DIR}/*.cpp"
  "${SOURCE_DIR}/antlr/*.cpp"
)

set(OTHER_SOURCES
    vendor/pugixml/src/pugixml.cpp
)

include_directories(${INCLUDE_DIRS})

add_subdirectory(vendor/pybind11)
pybind11_add_module(emparser ${MIZAR_SOURCES} ${ANTLR4_SOURCES} ${OTHER_SOURCES})

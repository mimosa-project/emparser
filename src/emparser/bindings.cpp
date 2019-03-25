#include <pybind11/pybind11.h>
#include "ParserProcess.hpp"
#include "PositionMap.hpp"
#include <string>
#include <memory>

using namespace std;
namespace py = pybind11;

PYBIND11_MODULE(emparser, m) {
    m.doc() = "emparser python binding";

    py::class_<PositionMap, shared_ptr<PositionMap>> position_map(m, "PositionMap");
    position_map
      .def(py::init<>())
      .def("set_position", &PositionMap::set_position)
      .def("is_pos_exist", &PositionMap::is_pos_exist)
      .def("get_before_pos", &PositionMap::get_before_pos)
      .def("dump_all", &PositionMap::dump_all);
    
    py::class_<ParserProcess> parser(m, "Parser");
    parser
      .def(py::init<>())
      .def("parse", &ParserProcess::parse, 
          py::arg("text"), py::arg("position_map") = PositionMap::ptr(), py::arg("rule") = string("article"))
      .def("parse_environment", &ParserProcess::parse_environment, 
          py::arg("text"), py::arg("position_map") = PositionMap::ptr())
      .def("parse_text_proper", &ParserProcess::parse_text_proper,
          py::arg("text"), py::arg("position_map") = PositionMap::ptr())
      .def("parse_theorem", &ParserProcess::parse_theorem,
          py::arg("text"), py::arg("position_map") = PositionMap::ptr());

}
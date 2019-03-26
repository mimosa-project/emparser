
// Generated from c:\dev\mimosa-project\emparser\src\emparser\antlr\Mizar.g4 by ANTLR 4.7.1


#include "MizarListener.h"

#include "MizarParser.h"


using namespace antlrcpp;
using namespace antlr4;

MizarParser::MizarParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MizarParser::~MizarParser() {
  delete _interpreter;
}

std::string MizarParser::getGrammarFileName() const {
  return "Mizar.g4";
}

const std::vector<std::string>& MizarParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MizarParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ArticleContext ------------------------------------------------------------------

MizarParser::ArticleContext::ArticleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::EnvironmentDeclarationContext* MizarParser::ArticleContext::environmentDeclaration() {
  return getRuleContext<MizarParser::EnvironmentDeclarationContext>(0);
}

MizarParser::TextProperContext* MizarParser::ArticleContext::textProper() {
  return getRuleContext<MizarParser::TextProperContext>(0);
}


size_t MizarParser::ArticleContext::getRuleIndex() const {
  return MizarParser::RuleArticle;
}

void MizarParser::ArticleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArticle(this);
}

void MizarParser::ArticleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArticle(this);
}

MizarParser::ArticleContext* MizarParser::article() {
  ArticleContext *_localctx = _tracker.createInstance<ArticleContext>(_ctx, getState());
  enterRule(_localctx, 0, MizarParser::RuleArticle);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    environmentDeclaration();
    setState(333);
    textProper();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnvironmentDeclarationContext ------------------------------------------------------------------

MizarParser::EnvironmentDeclarationContext::EnvironmentDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::DirectiveContext *> MizarParser::EnvironmentDeclarationContext::directive() {
  return getRuleContexts<MizarParser::DirectiveContext>();
}

MizarParser::DirectiveContext* MizarParser::EnvironmentDeclarationContext::directive(size_t i) {
  return getRuleContext<MizarParser::DirectiveContext>(i);
}


size_t MizarParser::EnvironmentDeclarationContext::getRuleIndex() const {
  return MizarParser::RuleEnvironmentDeclaration;
}

void MizarParser::EnvironmentDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnvironmentDeclaration(this);
}

void MizarParser::EnvironmentDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnvironmentDeclaration(this);
}

MizarParser::EnvironmentDeclarationContext* MizarParser::environmentDeclaration() {
  EnvironmentDeclarationContext *_localctx = _tracker.createInstance<EnvironmentDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, MizarParser::RuleEnvironmentDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    match(MizarParser::T__0);
    setState(339);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MizarParser::T__1)
      | (1ULL << MizarParser::T__4)
      | (1ULL << MizarParser::T__5)
      | (1ULL << MizarParser::T__6)
      | (1ULL << MizarParser::T__7)
      | (1ULL << MizarParser::T__8)
      | (1ULL << MizarParser::T__9)
      | (1ULL << MizarParser::T__10)
      | (1ULL << MizarParser::T__11)
      | (1ULL << MizarParser::T__12))) != 0)) {
      setState(336);
      directive();
      setState(341);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectiveContext ------------------------------------------------------------------

MizarParser::DirectiveContext::DirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::VocabularyDirectiveContext* MizarParser::DirectiveContext::vocabularyDirective() {
  return getRuleContext<MizarParser::VocabularyDirectiveContext>(0);
}

MizarParser::LibraryDirectiveContext* MizarParser::DirectiveContext::libraryDirective() {
  return getRuleContext<MizarParser::LibraryDirectiveContext>(0);
}

MizarParser::RequirementDirectiveContext* MizarParser::DirectiveContext::requirementDirective() {
  return getRuleContext<MizarParser::RequirementDirectiveContext>(0);
}


size_t MizarParser::DirectiveContext::getRuleIndex() const {
  return MizarParser::RuleDirective;
}

void MizarParser::DirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirective(this);
}

void MizarParser::DirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirective(this);
}

MizarParser::DirectiveContext* MizarParser::directive() {
  DirectiveContext *_localctx = _tracker.createInstance<DirectiveContext>(_ctx, getState());
  enterRule(_localctx, 4, MizarParser::RuleDirective);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(345);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(342);
        vocabularyDirective();
        break;
      }

      case MizarParser::T__4:
      case MizarParser::T__5:
      case MizarParser::T__6:
      case MizarParser::T__7:
      case MizarParser::T__8:
      case MizarParser::T__9:
      case MizarParser::T__10:
      case MizarParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(343);
        libraryDirective();
        break;
      }

      case MizarParser::T__12: {
        enterOuterAlt(_localctx, 3);
        setState(344);
        requirementDirective();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VocabularyDirectiveContext ------------------------------------------------------------------

MizarParser::VocabularyDirectiveContext::VocabularyDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::VocabularyNameContext *> MizarParser::VocabularyDirectiveContext::vocabularyName() {
  return getRuleContexts<MizarParser::VocabularyNameContext>();
}

MizarParser::VocabularyNameContext* MizarParser::VocabularyDirectiveContext::vocabularyName(size_t i) {
  return getRuleContext<MizarParser::VocabularyNameContext>(i);
}


size_t MizarParser::VocabularyDirectiveContext::getRuleIndex() const {
  return MizarParser::RuleVocabularyDirective;
}

void MizarParser::VocabularyDirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVocabularyDirective(this);
}

void MizarParser::VocabularyDirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVocabularyDirective(this);
}

MizarParser::VocabularyDirectiveContext* MizarParser::vocabularyDirective() {
  VocabularyDirectiveContext *_localctx = _tracker.createInstance<VocabularyDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 6, MizarParser::RuleVocabularyDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    match(MizarParser::T__1);
    setState(348);
    vocabularyName();
    setState(353);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(349);
      match(MizarParser::T__2);
      setState(350);
      vocabularyName();
      setState(355);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(356);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VocabularyNameContext ------------------------------------------------------------------

MizarParser::VocabularyNameContext::VocabularyNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::VocabularyNameContext::FILE_NAME() {
  return getToken(MizarParser::FILE_NAME, 0);
}


size_t MizarParser::VocabularyNameContext::getRuleIndex() const {
  return MizarParser::RuleVocabularyName;
}

void MizarParser::VocabularyNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVocabularyName(this);
}

void MizarParser::VocabularyNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVocabularyName(this);
}

MizarParser::VocabularyNameContext* MizarParser::vocabularyName() {
  VocabularyNameContext *_localctx = _tracker.createInstance<VocabularyNameContext>(_ctx, getState());
  enterRule(_localctx, 8, MizarParser::RuleVocabularyName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    match(MizarParser::FILE_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LibraryDirectiveContext ------------------------------------------------------------------

MizarParser::LibraryDirectiveContext::LibraryDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::ArticleNameContext *> MizarParser::LibraryDirectiveContext::articleName() {
  return getRuleContexts<MizarParser::ArticleNameContext>();
}

MizarParser::ArticleNameContext* MizarParser::LibraryDirectiveContext::articleName(size_t i) {
  return getRuleContext<MizarParser::ArticleNameContext>(i);
}


size_t MizarParser::LibraryDirectiveContext::getRuleIndex() const {
  return MizarParser::RuleLibraryDirective;
}

void MizarParser::LibraryDirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLibraryDirective(this);
}

void MizarParser::LibraryDirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLibraryDirective(this);
}

MizarParser::LibraryDirectiveContext* MizarParser::libraryDirective() {
  LibraryDirectiveContext *_localctx = _tracker.createInstance<LibraryDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 10, MizarParser::RuleLibraryDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MizarParser::T__4)
      | (1ULL << MizarParser::T__5)
      | (1ULL << MizarParser::T__6)
      | (1ULL << MizarParser::T__7)
      | (1ULL << MizarParser::T__8)
      | (1ULL << MizarParser::T__9)
      | (1ULL << MizarParser::T__10)
      | (1ULL << MizarParser::T__11))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(361);
    articleName();
    setState(366);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(362);
      match(MizarParser::T__2);
      setState(363);
      articleName();
      setState(368);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(369);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArticleNameContext ------------------------------------------------------------------

MizarParser::ArticleNameContext::ArticleNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::ArticleNameContext::FILE_NAME() {
  return getToken(MizarParser::FILE_NAME, 0);
}


size_t MizarParser::ArticleNameContext::getRuleIndex() const {
  return MizarParser::RuleArticleName;
}

void MizarParser::ArticleNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArticleName(this);
}

void MizarParser::ArticleNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArticleName(this);
}

MizarParser::ArticleNameContext* MizarParser::articleName() {
  ArticleNameContext *_localctx = _tracker.createInstance<ArticleNameContext>(_ctx, getState());
  enterRule(_localctx, 12, MizarParser::RuleArticleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    match(MizarParser::FILE_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RequirementDirectiveContext ------------------------------------------------------------------

MizarParser::RequirementDirectiveContext::RequirementDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::RequirementContext *> MizarParser::RequirementDirectiveContext::requirement() {
  return getRuleContexts<MizarParser::RequirementContext>();
}

MizarParser::RequirementContext* MizarParser::RequirementDirectiveContext::requirement(size_t i) {
  return getRuleContext<MizarParser::RequirementContext>(i);
}


size_t MizarParser::RequirementDirectiveContext::getRuleIndex() const {
  return MizarParser::RuleRequirementDirective;
}

void MizarParser::RequirementDirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequirementDirective(this);
}

void MizarParser::RequirementDirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequirementDirective(this);
}

MizarParser::RequirementDirectiveContext* MizarParser::requirementDirective() {
  RequirementDirectiveContext *_localctx = _tracker.createInstance<RequirementDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 14, MizarParser::RuleRequirementDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(373);
    match(MizarParser::T__12);
    setState(374);
    requirement();
    setState(379);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(375);
      match(MizarParser::T__2);
      setState(376);
      requirement();
      setState(381);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(382);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RequirementContext ------------------------------------------------------------------

MizarParser::RequirementContext::RequirementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::RequirementContext::FILE_NAME() {
  return getToken(MizarParser::FILE_NAME, 0);
}


size_t MizarParser::RequirementContext::getRuleIndex() const {
  return MizarParser::RuleRequirement;
}

void MizarParser::RequirementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequirement(this);
}

void MizarParser::RequirementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequirement(this);
}

MizarParser::RequirementContext* MizarParser::requirement() {
  RequirementContext *_localctx = _tracker.createInstance<RequirementContext>(_ctx, getState());
  enterRule(_localctx, 16, MizarParser::RuleRequirement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(384);
    match(MizarParser::FILE_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TextProperContext ------------------------------------------------------------------

MizarParser::TextProperContext::TextProperContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::SectionContext *> MizarParser::TextProperContext::section() {
  return getRuleContexts<MizarParser::SectionContext>();
}

MizarParser::SectionContext* MizarParser::TextProperContext::section(size_t i) {
  return getRuleContext<MizarParser::SectionContext>(i);
}


size_t MizarParser::TextProperContext::getRuleIndex() const {
  return MizarParser::RuleTextProper;
}

void MizarParser::TextProperContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTextProper(this);
}

void MizarParser::TextProperContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTextProper(this);
}

MizarParser::TextProperContext* MizarParser::textProper() {
  TextProperContext *_localctx = _tracker.createInstance<TextProperContext>(_ctx, getState());
  enterRule(_localctx, 18, MizarParser::RuleTextProper);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(386);
      section();
      setState(389); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MizarParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SectionContext ------------------------------------------------------------------

MizarParser::SectionContext::SectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::TextItemContext *> MizarParser::SectionContext::textItem() {
  return getRuleContexts<MizarParser::TextItemContext>();
}

MizarParser::TextItemContext* MizarParser::SectionContext::textItem(size_t i) {
  return getRuleContext<MizarParser::TextItemContext>(i);
}


size_t MizarParser::SectionContext::getRuleIndex() const {
  return MizarParser::RuleSection;
}

void MizarParser::SectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSection(this);
}

void MizarParser::SectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSection(this);
}

MizarParser::SectionContext* MizarParser::section() {
  SectionContext *_localctx = _tracker.createInstance<SectionContext>(_ctx, getState());
  enterRule(_localctx, 20, MizarParser::RuleSection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    match(MizarParser::T__13);
    setState(395);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MizarParser::T__14)
      | (1ULL << MizarParser::T__15)
      | (1ULL << MizarParser::T__16)
      | (1ULL << MizarParser::T__18)
      | (1ULL << MizarParser::T__19)
      | (1ULL << MizarParser::T__24)
      | (1ULL << MizarParser::T__34)
      | (1ULL << MizarParser::T__46)
      | (1ULL << MizarParser::T__47)
      | (1ULL << MizarParser::T__57))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (MizarParser::T__73 - 74))
      | (1ULL << (MizarParser::T__74 - 74))
      | (1ULL << (MizarParser::T__78 - 74))
      | (1ULL << (MizarParser::T__79 - 74))
      | (1ULL << (MizarParser::T__80 - 74))
      | (1ULL << (MizarParser::T__91 - 74))
      | (1ULL << (MizarParser::T__92 - 74))
      | (1ULL << (MizarParser::T__95 - 74))
      | (1ULL << (MizarParser::T__106 - 74))
      | (1ULL << (MizarParser::T__107 - 74))
      | (1ULL << (MizarParser::T__108 - 74))
      | (1ULL << (MizarParser::T__109 - 74))
      | (1ULL << (MizarParser::T__110 - 74))
      | (1ULL << (MizarParser::T__113 - 74))
      | (1ULL << (MizarParser::T__117 - 74))
      | (1ULL << (MizarParser::T__119 - 74))
      | (1ULL << (MizarParser::T__122 - 74))
      | (1ULL << (MizarParser::T__123 - 74))
      | (1ULL << (MizarParser::T__124 - 74))
      | (1ULL << (MizarParser::T__125 - 74))
      | (1ULL << (MizarParser::T__126 - 74))
      | (1ULL << (MizarParser::T__127 - 74))
      | (1ULL << (MizarParser::T__128 - 74))
      | (1ULL << (MizarParser::T__129 - 74))
      | (1ULL << (MizarParser::T__130 - 74))
      | (1ULL << (MizarParser::T__131 - 74))
      | (1ULL << (MizarParser::PREDICATE_SYMBOL - 74))
      | (1ULL << (MizarParser::FUNCTOR_SYMBOL - 74))
      | (1ULL << (MizarParser::STRUCTURE_SYMBOL - 74)))) != 0) || ((((_la - 139) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 139)) & ((1ULL << (MizarParser::LEFT_FUNCTOR_SYMBOL - 139))
      | (1ULL << (MizarParser::IDENTIFIER - 139))
      | (1ULL << (MizarParser::NUMERAL - 139)))) != 0)) {
      setState(392);
      textItem();
      setState(397);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TextItemContext ------------------------------------------------------------------

MizarParser::TextItemContext::TextItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ReservationContext* MizarParser::TextItemContext::reservation() {
  return getRuleContext<MizarParser::ReservationContext>(0);
}

MizarParser::DefinitionalItemContext* MizarParser::TextItemContext::definitionalItem() {
  return getRuleContext<MizarParser::DefinitionalItemContext>(0);
}

MizarParser::RegistrationItemContext* MizarParser::TextItemContext::registrationItem() {
  return getRuleContext<MizarParser::RegistrationItemContext>(0);
}

MizarParser::NotationItemContext* MizarParser::TextItemContext::notationItem() {
  return getRuleContext<MizarParser::NotationItemContext>(0);
}

MizarParser::TheoremContext* MizarParser::TextItemContext::theorem() {
  return getRuleContext<MizarParser::TheoremContext>(0);
}

MizarParser::SchemeItemContext* MizarParser::TextItemContext::schemeItem() {
  return getRuleContext<MizarParser::SchemeItemContext>(0);
}

MizarParser::AuxiliaryItemContext* MizarParser::TextItemContext::auxiliaryItem() {
  return getRuleContext<MizarParser::AuxiliaryItemContext>(0);
}


size_t MizarParser::TextItemContext::getRuleIndex() const {
  return MizarParser::RuleTextItem;
}

void MizarParser::TextItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTextItem(this);
}

void MizarParser::TextItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTextItem(this);
}

MizarParser::TextItemContext* MizarParser::textItem() {
  TextItemContext *_localctx = _tracker.createInstance<TextItemContext>(_ctx, getState());
  enterRule(_localctx, 22, MizarParser::RuleTextItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(405);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__14: {
        enterOuterAlt(_localctx, 1);
        setState(398);
        reservation();
        break;
      }

      case MizarParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(399);
        definitionalItem();
        break;
      }

      case MizarParser::T__18: {
        enterOuterAlt(_localctx, 3);
        setState(400);
        registrationItem();
        break;
      }

      case MizarParser::T__19: {
        enterOuterAlt(_localctx, 4);
        setState(401);
        notationItem();
        break;
      }

      case MizarParser::T__73: {
        enterOuterAlt(_localctx, 5);
        setState(402);
        theorem();
        break;
      }

      case MizarParser::T__74: {
        enterOuterAlt(_localctx, 6);
        setState(403);
        schemeItem();
        break;
      }

      case MizarParser::T__15:
      case MizarParser::T__24:
      case MizarParser::T__34:
      case MizarParser::T__46:
      case MizarParser::T__47:
      case MizarParser::T__57:
      case MizarParser::T__78:
      case MizarParser::T__79:
      case MizarParser::T__80:
      case MizarParser::T__91:
      case MizarParser::T__92:
      case MizarParser::T__95:
      case MizarParser::T__106:
      case MizarParser::T__107:
      case MizarParser::T__108:
      case MizarParser::T__109:
      case MizarParser::T__110:
      case MizarParser::T__113:
      case MizarParser::T__117:
      case MizarParser::T__119:
      case MizarParser::T__122:
      case MizarParser::T__123:
      case MizarParser::T__124:
      case MizarParser::T__125:
      case MizarParser::T__126:
      case MizarParser::T__127:
      case MizarParser::T__128:
      case MizarParser::T__129:
      case MizarParser::T__130:
      case MizarParser::T__131:
      case MizarParser::PREDICATE_SYMBOL:
      case MizarParser::FUNCTOR_SYMBOL:
      case MizarParser::STRUCTURE_SYMBOL:
      case MizarParser::LEFT_FUNCTOR_SYMBOL:
      case MizarParser::IDENTIFIER:
      case MizarParser::NUMERAL: {
        enterOuterAlt(_localctx, 7);
        setState(404);
        auxiliaryItem();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReservationContext ------------------------------------------------------------------

MizarParser::ReservationContext::ReservationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::ReservationSegmentContext *> MizarParser::ReservationContext::reservationSegment() {
  return getRuleContexts<MizarParser::ReservationSegmentContext>();
}

MizarParser::ReservationSegmentContext* MizarParser::ReservationContext::reservationSegment(size_t i) {
  return getRuleContext<MizarParser::ReservationSegmentContext>(i);
}


size_t MizarParser::ReservationContext::getRuleIndex() const {
  return MizarParser::RuleReservation;
}

void MizarParser::ReservationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReservation(this);
}

void MizarParser::ReservationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReservation(this);
}

MizarParser::ReservationContext* MizarParser::reservation() {
  ReservationContext *_localctx = _tracker.createInstance<ReservationContext>(_ctx, getState());
  enterRule(_localctx, 24, MizarParser::RuleReservation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(407);
    match(MizarParser::T__14);
    setState(408);
    reservationSegment();
    setState(413);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(409);
      match(MizarParser::T__2);
      setState(410);
      reservationSegment();
      setState(415);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(416);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReservationSegmentContext ------------------------------------------------------------------

MizarParser::ReservationSegmentContext::ReservationSegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ReservedIdentifiersContext* MizarParser::ReservationSegmentContext::reservedIdentifiers() {
  return getRuleContext<MizarParser::ReservedIdentifiersContext>(0);
}

MizarParser::TypeExpressionContext* MizarParser::ReservationSegmentContext::typeExpression() {
  return getRuleContext<MizarParser::TypeExpressionContext>(0);
}


size_t MizarParser::ReservationSegmentContext::getRuleIndex() const {
  return MizarParser::RuleReservationSegment;
}

void MizarParser::ReservationSegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReservationSegment(this);
}

void MizarParser::ReservationSegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReservationSegment(this);
}

MizarParser::ReservationSegmentContext* MizarParser::reservationSegment() {
  ReservationSegmentContext *_localctx = _tracker.createInstance<ReservationSegmentContext>(_ctx, getState());
  enterRule(_localctx, 26, MizarParser::RuleReservationSegment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(418);
    reservedIdentifiers();
    setState(419);
    match(MizarParser::T__15);
    setState(420);
    typeExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReservedIdentifiersContext ------------------------------------------------------------------

MizarParser::ReservedIdentifiersContext::ReservedIdentifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::ReservedIdentifierContext *> MizarParser::ReservedIdentifiersContext::reservedIdentifier() {
  return getRuleContexts<MizarParser::ReservedIdentifierContext>();
}

MizarParser::ReservedIdentifierContext* MizarParser::ReservedIdentifiersContext::reservedIdentifier(size_t i) {
  return getRuleContext<MizarParser::ReservedIdentifierContext>(i);
}


size_t MizarParser::ReservedIdentifiersContext::getRuleIndex() const {
  return MizarParser::RuleReservedIdentifiers;
}

void MizarParser::ReservedIdentifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReservedIdentifiers(this);
}

void MizarParser::ReservedIdentifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReservedIdentifiers(this);
}

MizarParser::ReservedIdentifiersContext* MizarParser::reservedIdentifiers() {
  ReservedIdentifiersContext *_localctx = _tracker.createInstance<ReservedIdentifiersContext>(_ctx, getState());
  enterRule(_localctx, 28, MizarParser::RuleReservedIdentifiers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(422);
    reservedIdentifier();
    setState(427);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(423);
      match(MizarParser::T__2);
      setState(424);
      reservedIdentifier();
      setState(429);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReservedIdentifierContext ------------------------------------------------------------------

MizarParser::ReservedIdentifierContext::ReservedIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::ReservedIdentifierContext::IDENTIFIER() {
  return getToken(MizarParser::IDENTIFIER, 0);
}


size_t MizarParser::ReservedIdentifierContext::getRuleIndex() const {
  return MizarParser::RuleReservedIdentifier;
}

void MizarParser::ReservedIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReservedIdentifier(this);
}

void MizarParser::ReservedIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReservedIdentifier(this);
}

MizarParser::ReservedIdentifierContext* MizarParser::reservedIdentifier() {
  ReservedIdentifierContext *_localctx = _tracker.createInstance<ReservedIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 30, MizarParser::RuleReservedIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    match(MizarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionalItemContext ------------------------------------------------------------------

MizarParser::DefinitionalItemContext::DefinitionalItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::DefinitionalBlockContext* MizarParser::DefinitionalItemContext::definitionalBlock() {
  return getRuleContext<MizarParser::DefinitionalBlockContext>(0);
}


size_t MizarParser::DefinitionalItemContext::getRuleIndex() const {
  return MizarParser::RuleDefinitionalItem;
}

void MizarParser::DefinitionalItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinitionalItem(this);
}

void MizarParser::DefinitionalItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinitionalItem(this);
}

MizarParser::DefinitionalItemContext* MizarParser::definitionalItem() {
  DefinitionalItemContext *_localctx = _tracker.createInstance<DefinitionalItemContext>(_ctx, getState());
  enterRule(_localctx, 32, MizarParser::RuleDefinitionalItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(432);
    definitionalBlock();
    setState(433);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegistrationItemContext ------------------------------------------------------------------

MizarParser::RegistrationItemContext::RegistrationItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::RegistrationBlockContext* MizarParser::RegistrationItemContext::registrationBlock() {
  return getRuleContext<MizarParser::RegistrationBlockContext>(0);
}


size_t MizarParser::RegistrationItemContext::getRuleIndex() const {
  return MizarParser::RuleRegistrationItem;
}

void MizarParser::RegistrationItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegistrationItem(this);
}

void MizarParser::RegistrationItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegistrationItem(this);
}

MizarParser::RegistrationItemContext* MizarParser::registrationItem() {
  RegistrationItemContext *_localctx = _tracker.createInstance<RegistrationItemContext>(_ctx, getState());
  enterRule(_localctx, 34, MizarParser::RuleRegistrationItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(435);
    registrationBlock();
    setState(436);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NotationItemContext ------------------------------------------------------------------

MizarParser::NotationItemContext::NotationItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::NotationBlockContext* MizarParser::NotationItemContext::notationBlock() {
  return getRuleContext<MizarParser::NotationBlockContext>(0);
}


size_t MizarParser::NotationItemContext::getRuleIndex() const {
  return MizarParser::RuleNotationItem;
}

void MizarParser::NotationItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotationItem(this);
}

void MizarParser::NotationItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotationItem(this);
}

MizarParser::NotationItemContext* MizarParser::notationItem() {
  NotationItemContext *_localctx = _tracker.createInstance<NotationItemContext>(_ctx, getState());
  enterRule(_localctx, 36, MizarParser::RuleNotationItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
    notationBlock();
    setState(439);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionalBlockContext ------------------------------------------------------------------

MizarParser::DefinitionalBlockContext::DefinitionalBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::DefinitionItemContext *> MizarParser::DefinitionalBlockContext::definitionItem() {
  return getRuleContexts<MizarParser::DefinitionItemContext>();
}

MizarParser::DefinitionItemContext* MizarParser::DefinitionalBlockContext::definitionItem(size_t i) {
  return getRuleContext<MizarParser::DefinitionItemContext>(i);
}

std::vector<MizarParser::DefinitionContext *> MizarParser::DefinitionalBlockContext::definition() {
  return getRuleContexts<MizarParser::DefinitionContext>();
}

MizarParser::DefinitionContext* MizarParser::DefinitionalBlockContext::definition(size_t i) {
  return getRuleContext<MizarParser::DefinitionContext>(i);
}

std::vector<MizarParser::RedefinitionContext *> MizarParser::DefinitionalBlockContext::redefinition() {
  return getRuleContexts<MizarParser::RedefinitionContext>();
}

MizarParser::RedefinitionContext* MizarParser::DefinitionalBlockContext::redefinition(size_t i) {
  return getRuleContext<MizarParser::RedefinitionContext>(i);
}


size_t MizarParser::DefinitionalBlockContext::getRuleIndex() const {
  return MizarParser::RuleDefinitionalBlock;
}

void MizarParser::DefinitionalBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinitionalBlock(this);
}

void MizarParser::DefinitionalBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinitionalBlock(this);
}

MizarParser::DefinitionalBlockContext* MizarParser::definitionalBlock() {
  DefinitionalBlockContext *_localctx = _tracker.createInstance<DefinitionalBlockContext>(_ctx, getState());
  enterRule(_localctx, 38, MizarParser::RuleDefinitionalBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
    match(MizarParser::T__16);
    setState(447);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 16) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 16)) & ((1ULL << (MizarParser::T__15 - 16))
      | (1ULL << (MizarParser::T__20 - 16))
      | (1ULL << (MizarParser::T__22 - 16))
      | (1ULL << (MizarParser::T__23 - 16))
      | (1ULL << (MizarParser::T__24 - 16))
      | (1ULL << (MizarParser::T__30 - 16))
      | (1ULL << (MizarParser::T__34 - 16))
      | (1ULL << (MizarParser::T__40 - 16))
      | (1ULL << (MizarParser::T__46 - 16))
      | (1ULL << (MizarParser::T__47 - 16))
      | (1ULL << (MizarParser::T__50 - 16))
      | (1ULL << (MizarParser::T__57 - 16))
      | (1ULL << (MizarParser::T__58 - 16))
      | (1ULL << (MizarParser::T__78 - 16)))) != 0) || ((((_la - 80) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 80)) & ((1ULL << (MizarParser::T__79 - 80))
      | (1ULL << (MizarParser::T__80 - 80))
      | (1ULL << (MizarParser::T__85 - 80))
      | (1ULL << (MizarParser::T__86 - 80))
      | (1ULL << (MizarParser::T__91 - 80))
      | (1ULL << (MizarParser::T__92 - 80))
      | (1ULL << (MizarParser::T__95 - 80))
      | (1ULL << (MizarParser::T__106 - 80))
      | (1ULL << (MizarParser::T__107 - 80))
      | (1ULL << (MizarParser::T__108 - 80))
      | (1ULL << (MizarParser::T__109 - 80))
      | (1ULL << (MizarParser::T__110 - 80))
      | (1ULL << (MizarParser::T__113 - 80))
      | (1ULL << (MizarParser::T__117 - 80))
      | (1ULL << (MizarParser::T__119 - 80))
      | (1ULL << (MizarParser::T__122 - 80))
      | (1ULL << (MizarParser::T__123 - 80))
      | (1ULL << (MizarParser::T__124 - 80))
      | (1ULL << (MizarParser::T__125 - 80))
      | (1ULL << (MizarParser::T__126 - 80))
      | (1ULL << (MizarParser::T__127 - 80))
      | (1ULL << (MizarParser::T__128 - 80))
      | (1ULL << (MizarParser::T__129 - 80))
      | (1ULL << (MizarParser::T__130 - 80))
      | (1ULL << (MizarParser::T__131 - 80))
      | (1ULL << (MizarParser::PREDICATE_SYMBOL - 80))
      | (1ULL << (MizarParser::FUNCTOR_SYMBOL - 80))
      | (1ULL << (MizarParser::STRUCTURE_SYMBOL - 80))
      | (1ULL << (MizarParser::LEFT_FUNCTOR_SYMBOL - 80))
      | (1ULL << (MizarParser::IDENTIFIER - 80))
      | (1ULL << (MizarParser::NUMERAL - 80)))) != 0)) {
      setState(445);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MizarParser::T__15:
        case MizarParser::T__20:
        case MizarParser::T__24:
        case MizarParser::T__34:
        case MizarParser::T__46:
        case MizarParser::T__47:
        case MizarParser::T__57:
        case MizarParser::T__78:
        case MizarParser::T__79:
        case MizarParser::T__80:
        case MizarParser::T__85:
        case MizarParser::T__86:
        case MizarParser::T__91:
        case MizarParser::T__92:
        case MizarParser::T__95:
        case MizarParser::T__106:
        case MizarParser::T__107:
        case MizarParser::T__108:
        case MizarParser::T__109:
        case MizarParser::T__110:
        case MizarParser::T__113:
        case MizarParser::T__117:
        case MizarParser::T__119:
        case MizarParser::T__122:
        case MizarParser::T__123:
        case MizarParser::T__124:
        case MizarParser::T__125:
        case MizarParser::T__126:
        case MizarParser::T__127:
        case MizarParser::T__128:
        case MizarParser::T__129:
        case MizarParser::T__130:
        case MizarParser::T__131:
        case MizarParser::PREDICATE_SYMBOL:
        case MizarParser::FUNCTOR_SYMBOL:
        case MizarParser::STRUCTURE_SYMBOL:
        case MizarParser::LEFT_FUNCTOR_SYMBOL:
        case MizarParser::IDENTIFIER:
        case MizarParser::NUMERAL: {
          setState(442);
          definitionItem();
          break;
        }

        case MizarParser::T__23:
        case MizarParser::T__30:
        case MizarParser::T__40:
        case MizarParser::T__50:
        case MizarParser::T__58: {
          setState(443);
          definition();
          break;
        }

        case MizarParser::T__22: {
          setState(444);
          redefinition();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(449);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(450);
    match(MizarParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegistrationBlockContext ------------------------------------------------------------------

MizarParser::RegistrationBlockContext::RegistrationBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::LociDeclarationContext *> MizarParser::RegistrationBlockContext::lociDeclaration() {
  return getRuleContexts<MizarParser::LociDeclarationContext>();
}

MizarParser::LociDeclarationContext* MizarParser::RegistrationBlockContext::lociDeclaration(size_t i) {
  return getRuleContext<MizarParser::LociDeclarationContext>(i);
}

std::vector<MizarParser::ClusterRegistrationContext *> MizarParser::RegistrationBlockContext::clusterRegistration() {
  return getRuleContexts<MizarParser::ClusterRegistrationContext>();
}

MizarParser::ClusterRegistrationContext* MizarParser::RegistrationBlockContext::clusterRegistration(size_t i) {
  return getRuleContext<MizarParser::ClusterRegistrationContext>(i);
}

std::vector<MizarParser::IdentifyRegistrationContext *> MizarParser::RegistrationBlockContext::identifyRegistration() {
  return getRuleContexts<MizarParser::IdentifyRegistrationContext>();
}

MizarParser::IdentifyRegistrationContext* MizarParser::RegistrationBlockContext::identifyRegistration(size_t i) {
  return getRuleContext<MizarParser::IdentifyRegistrationContext>(i);
}

std::vector<MizarParser::PropertyRegistrationContext *> MizarParser::RegistrationBlockContext::propertyRegistration() {
  return getRuleContexts<MizarParser::PropertyRegistrationContext>();
}

MizarParser::PropertyRegistrationContext* MizarParser::RegistrationBlockContext::propertyRegistration(size_t i) {
  return getRuleContext<MizarParser::PropertyRegistrationContext>(i);
}

std::vector<MizarParser::ReductionRegistrationContext *> MizarParser::RegistrationBlockContext::reductionRegistration() {
  return getRuleContexts<MizarParser::ReductionRegistrationContext>();
}

MizarParser::ReductionRegistrationContext* MizarParser::RegistrationBlockContext::reductionRegistration(size_t i) {
  return getRuleContext<MizarParser::ReductionRegistrationContext>(i);
}

std::vector<MizarParser::AuxiliaryItemContext *> MizarParser::RegistrationBlockContext::auxiliaryItem() {
  return getRuleContexts<MizarParser::AuxiliaryItemContext>();
}

MizarParser::AuxiliaryItemContext* MizarParser::RegistrationBlockContext::auxiliaryItem(size_t i) {
  return getRuleContext<MizarParser::AuxiliaryItemContext>(i);
}


size_t MizarParser::RegistrationBlockContext::getRuleIndex() const {
  return MizarParser::RuleRegistrationBlock;
}

void MizarParser::RegistrationBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegistrationBlock(this);
}

void MizarParser::RegistrationBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegistrationBlock(this);
}

MizarParser::RegistrationBlockContext* MizarParser::registrationBlock() {
  RegistrationBlockContext *_localctx = _tracker.createInstance<RegistrationBlockContext>(_ctx, getState());
  enterRule(_localctx, 40, MizarParser::RuleRegistrationBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
    match(MizarParser::T__18);
    setState(461);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 16) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 16)) & ((1ULL << (MizarParser::T__15 - 16))
      | (1ULL << (MizarParser::T__20 - 16))
      | (1ULL << (MizarParser::T__24 - 16))
      | (1ULL << (MizarParser::T__34 - 16))
      | (1ULL << (MizarParser::T__39 - 16))
      | (1ULL << (MizarParser::T__46 - 16))
      | (1ULL << (MizarParser::T__47 - 16))
      | (1ULL << (MizarParser::T__57 - 16))
      | (1ULL << (MizarParser::T__59 - 16))
      | (1ULL << (MizarParser::T__61 - 16))
      | (1ULL << (MizarParser::T__64 - 16))
      | (1ULL << (MizarParser::T__78 - 16)))) != 0) || ((((_la - 80) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 80)) & ((1ULL << (MizarParser::T__79 - 80))
      | (1ULL << (MizarParser::T__80 - 80))
      | (1ULL << (MizarParser::T__91 - 80))
      | (1ULL << (MizarParser::T__92 - 80))
      | (1ULL << (MizarParser::T__95 - 80))
      | (1ULL << (MizarParser::T__106 - 80))
      | (1ULL << (MizarParser::T__107 - 80))
      | (1ULL << (MizarParser::T__108 - 80))
      | (1ULL << (MizarParser::T__109 - 80))
      | (1ULL << (MizarParser::T__110 - 80))
      | (1ULL << (MizarParser::T__113 - 80))
      | (1ULL << (MizarParser::T__117 - 80))
      | (1ULL << (MizarParser::T__119 - 80))
      | (1ULL << (MizarParser::T__122 - 80))
      | (1ULL << (MizarParser::T__123 - 80))
      | (1ULL << (MizarParser::T__124 - 80))
      | (1ULL << (MizarParser::T__125 - 80))
      | (1ULL << (MizarParser::T__126 - 80))
      | (1ULL << (MizarParser::T__127 - 80))
      | (1ULL << (MizarParser::T__128 - 80))
      | (1ULL << (MizarParser::T__129 - 80))
      | (1ULL << (MizarParser::T__130 - 80))
      | (1ULL << (MizarParser::T__131 - 80))
      | (1ULL << (MizarParser::PREDICATE_SYMBOL - 80))
      | (1ULL << (MizarParser::FUNCTOR_SYMBOL - 80))
      | (1ULL << (MizarParser::STRUCTURE_SYMBOL - 80))
      | (1ULL << (MizarParser::LEFT_FUNCTOR_SYMBOL - 80))
      | (1ULL << (MizarParser::IDENTIFIER - 80))
      | (1ULL << (MizarParser::NUMERAL - 80)))) != 0)) {
      setState(459);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MizarParser::T__20: {
          setState(453);
          lociDeclaration();
          break;
        }

        case MizarParser::T__59: {
          setState(454);
          clusterRegistration();
          break;
        }

        case MizarParser::T__61: {
          setState(455);
          identifyRegistration();
          break;
        }

        case MizarParser::T__39: {
          setState(456);
          propertyRegistration();
          break;
        }

        case MizarParser::T__64: {
          setState(457);
          reductionRegistration();
          break;
        }

        case MizarParser::T__15:
        case MizarParser::T__24:
        case MizarParser::T__34:
        case MizarParser::T__46:
        case MizarParser::T__47:
        case MizarParser::T__57:
        case MizarParser::T__78:
        case MizarParser::T__79:
        case MizarParser::T__80:
        case MizarParser::T__91:
        case MizarParser::T__92:
        case MizarParser::T__95:
        case MizarParser::T__106:
        case MizarParser::T__107:
        case MizarParser::T__108:
        case MizarParser::T__109:
        case MizarParser::T__110:
        case MizarParser::T__113:
        case MizarParser::T__117:
        case MizarParser::T__119:
        case MizarParser::T__122:
        case MizarParser::T__123:
        case MizarParser::T__124:
        case MizarParser::T__125:
        case MizarParser::T__126:
        case MizarParser::T__127:
        case MizarParser::T__128:
        case MizarParser::T__129:
        case MizarParser::T__130:
        case MizarParser::T__131:
        case MizarParser::PREDICATE_SYMBOL:
        case MizarParser::FUNCTOR_SYMBOL:
        case MizarParser::STRUCTURE_SYMBOL:
        case MizarParser::LEFT_FUNCTOR_SYMBOL:
        case MizarParser::IDENTIFIER:
        case MizarParser::NUMERAL: {
          setState(458);
          auxiliaryItem();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(463);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(464);
    match(MizarParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NotationBlockContext ------------------------------------------------------------------

MizarParser::NotationBlockContext::NotationBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::LociDeclarationContext *> MizarParser::NotationBlockContext::lociDeclaration() {
  return getRuleContexts<MizarParser::LociDeclarationContext>();
}

MizarParser::LociDeclarationContext* MizarParser::NotationBlockContext::lociDeclaration(size_t i) {
  return getRuleContext<MizarParser::LociDeclarationContext>(i);
}

std::vector<MizarParser::NotationDeclarationContext *> MizarParser::NotationBlockContext::notationDeclaration() {
  return getRuleContexts<MizarParser::NotationDeclarationContext>();
}

MizarParser::NotationDeclarationContext* MizarParser::NotationBlockContext::notationDeclaration(size_t i) {
  return getRuleContext<MizarParser::NotationDeclarationContext>(i);
}


size_t MizarParser::NotationBlockContext::getRuleIndex() const {
  return MizarParser::RuleNotationBlock;
}

void MizarParser::NotationBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotationBlock(this);
}

void MizarParser::NotationBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotationBlock(this);
}

MizarParser::NotationBlockContext* MizarParser::notationBlock() {
  NotationBlockContext *_localctx = _tracker.createInstance<NotationBlockContext>(_ctx, getState());
  enterRule(_localctx, 42, MizarParser::RuleNotationBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(466);
    match(MizarParser::T__19);
    setState(471);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MizarParser::T__20)
      | (1ULL << MizarParser::T__35)
      | (1ULL << MizarParser::T__56))) != 0)) {
      setState(469);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MizarParser::T__20: {
          setState(467);
          lociDeclaration();
          break;
        }

        case MizarParser::T__35:
        case MizarParser::T__56: {
          setState(468);
          notationDeclaration();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(473);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(474);
    match(MizarParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionItemContext ------------------------------------------------------------------

MizarParser::DefinitionItemContext::DefinitionItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::LociDeclarationContext* MizarParser::DefinitionItemContext::lociDeclaration() {
  return getRuleContext<MizarParser::LociDeclarationContext>(0);
}

MizarParser::PermissiveAssumptionContext* MizarParser::DefinitionItemContext::permissiveAssumption() {
  return getRuleContext<MizarParser::PermissiveAssumptionContext>(0);
}

MizarParser::AuxiliaryItemContext* MizarParser::DefinitionItemContext::auxiliaryItem() {
  return getRuleContext<MizarParser::AuxiliaryItemContext>(0);
}


size_t MizarParser::DefinitionItemContext::getRuleIndex() const {
  return MizarParser::RuleDefinitionItem;
}

void MizarParser::DefinitionItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinitionItem(this);
}

void MizarParser::DefinitionItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinitionItem(this);
}

MizarParser::DefinitionItemContext* MizarParser::definitionItem() {
  DefinitionItemContext *_localctx = _tracker.createInstance<DefinitionItemContext>(_ctx, getState());
  enterRule(_localctx, 44, MizarParser::RuleDefinitionItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(479);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__20: {
        enterOuterAlt(_localctx, 1);
        setState(476);
        lociDeclaration();
        break;
      }

      case MizarParser::T__85:
      case MizarParser::T__86: {
        enterOuterAlt(_localctx, 2);
        setState(477);
        permissiveAssumption();
        break;
      }

      case MizarParser::T__15:
      case MizarParser::T__24:
      case MizarParser::T__34:
      case MizarParser::T__46:
      case MizarParser::T__47:
      case MizarParser::T__57:
      case MizarParser::T__78:
      case MizarParser::T__79:
      case MizarParser::T__80:
      case MizarParser::T__91:
      case MizarParser::T__92:
      case MizarParser::T__95:
      case MizarParser::T__106:
      case MizarParser::T__107:
      case MizarParser::T__108:
      case MizarParser::T__109:
      case MizarParser::T__110:
      case MizarParser::T__113:
      case MizarParser::T__117:
      case MizarParser::T__119:
      case MizarParser::T__122:
      case MizarParser::T__123:
      case MizarParser::T__124:
      case MizarParser::T__125:
      case MizarParser::T__126:
      case MizarParser::T__127:
      case MizarParser::T__128:
      case MizarParser::T__129:
      case MizarParser::T__130:
      case MizarParser::T__131:
      case MizarParser::PREDICATE_SYMBOL:
      case MizarParser::FUNCTOR_SYMBOL:
      case MizarParser::STRUCTURE_SYMBOL:
      case MizarParser::LEFT_FUNCTOR_SYMBOL:
      case MizarParser::IDENTIFIER:
      case MizarParser::NUMERAL: {
        enterOuterAlt(_localctx, 3);
        setState(478);
        auxiliaryItem();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NotationDeclarationContext ------------------------------------------------------------------

MizarParser::NotationDeclarationContext::NotationDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::AttributeSynonymContext* MizarParser::NotationDeclarationContext::attributeSynonym() {
  return getRuleContext<MizarParser::AttributeSynonymContext>(0);
}

MizarParser::AttributeAntonymContext* MizarParser::NotationDeclarationContext::attributeAntonym() {
  return getRuleContext<MizarParser::AttributeAntonymContext>(0);
}

MizarParser::FunctorSynonymContext* MizarParser::NotationDeclarationContext::functorSynonym() {
  return getRuleContext<MizarParser::FunctorSynonymContext>(0);
}

MizarParser::ModeSynonymContext* MizarParser::NotationDeclarationContext::modeSynonym() {
  return getRuleContext<MizarParser::ModeSynonymContext>(0);
}

MizarParser::PredicateSynonymContext* MizarParser::NotationDeclarationContext::predicateSynonym() {
  return getRuleContext<MizarParser::PredicateSynonymContext>(0);
}

MizarParser::PredicateAntonymContext* MizarParser::NotationDeclarationContext::predicateAntonym() {
  return getRuleContext<MizarParser::PredicateAntonymContext>(0);
}


size_t MizarParser::NotationDeclarationContext::getRuleIndex() const {
  return MizarParser::RuleNotationDeclaration;
}

void MizarParser::NotationDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotationDeclaration(this);
}

void MizarParser::NotationDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotationDeclaration(this);
}

MizarParser::NotationDeclarationContext* MizarParser::notationDeclaration() {
  NotationDeclarationContext *_localctx = _tracker.createInstance<NotationDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 46, MizarParser::RuleNotationDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(487);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(481);
      attributeSynonym();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(482);
      attributeAntonym();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(483);
      functorSynonym();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(484);
      modeSynonym();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(485);
      predicateSynonym();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(486);
      predicateAntonym();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LociDeclarationContext ------------------------------------------------------------------

MizarParser::LociDeclarationContext::LociDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::QualifiedVariablesContext* MizarParser::LociDeclarationContext::qualifiedVariables() {
  return getRuleContext<MizarParser::QualifiedVariablesContext>(0);
}

MizarParser::ConditionsContext* MizarParser::LociDeclarationContext::conditions() {
  return getRuleContext<MizarParser::ConditionsContext>(0);
}


size_t MizarParser::LociDeclarationContext::getRuleIndex() const {
  return MizarParser::RuleLociDeclaration;
}

void MizarParser::LociDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLociDeclaration(this);
}

void MizarParser::LociDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLociDeclaration(this);
}

MizarParser::LociDeclarationContext* MizarParser::lociDeclaration() {
  LociDeclarationContext *_localctx = _tracker.createInstance<LociDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 48, MizarParser::RuleLociDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(489);
    match(MizarParser::T__20);
    setState(490);
    qualifiedVariables();
    setState(493);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__21) {
      setState(491);
      match(MizarParser::T__21);
      setState(492);
      conditions();
    }
    setState(495);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PermissiveAssumptionContext ------------------------------------------------------------------

MizarParser::PermissiveAssumptionContext::PermissiveAssumptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::AssumptionContext* MizarParser::PermissiveAssumptionContext::assumption() {
  return getRuleContext<MizarParser::AssumptionContext>(0);
}


size_t MizarParser::PermissiveAssumptionContext::getRuleIndex() const {
  return MizarParser::RulePermissiveAssumption;
}

void MizarParser::PermissiveAssumptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPermissiveAssumption(this);
}

void MizarParser::PermissiveAssumptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPermissiveAssumption(this);
}

MizarParser::PermissiveAssumptionContext* MizarParser::permissiveAssumption() {
  PermissiveAssumptionContext *_localctx = _tracker.createInstance<PermissiveAssumptionContext>(_ctx, getState());
  enterRule(_localctx, 50, MizarParser::RulePermissiveAssumption);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(497);
    assumption();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

MizarParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::StructureDefinitionContext* MizarParser::DefinitionContext::structureDefinition() {
  return getRuleContext<MizarParser::StructureDefinitionContext>(0);
}

MizarParser::ModeDefinitionContext* MizarParser::DefinitionContext::modeDefinition() {
  return getRuleContext<MizarParser::ModeDefinitionContext>(0);
}

MizarParser::FunctorDefinitionContext* MizarParser::DefinitionContext::functorDefinition() {
  return getRuleContext<MizarParser::FunctorDefinitionContext>(0);
}

MizarParser::PredicateDefinitionContext* MizarParser::DefinitionContext::predicateDefinition() {
  return getRuleContext<MizarParser::PredicateDefinitionContext>(0);
}

MizarParser::AttributeDefinitionContext* MizarParser::DefinitionContext::attributeDefinition() {
  return getRuleContext<MizarParser::AttributeDefinitionContext>(0);
}


size_t MizarParser::DefinitionContext::getRuleIndex() const {
  return MizarParser::RuleDefinition;
}

void MizarParser::DefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinition(this);
}

void MizarParser::DefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinition(this);
}

MizarParser::DefinitionContext* MizarParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 52, MizarParser::RuleDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(504);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__23: {
        enterOuterAlt(_localctx, 1);
        setState(499);
        structureDefinition();
        break;
      }

      case MizarParser::T__30: {
        enterOuterAlt(_localctx, 2);
        setState(500);
        modeDefinition();
        break;
      }

      case MizarParser::T__40: {
        enterOuterAlt(_localctx, 3);
        setState(501);
        functorDefinition();
        break;
      }

      case MizarParser::T__50: {
        enterOuterAlt(_localctx, 4);
        setState(502);
        predicateDefinition();
        break;
      }

      case MizarParser::T__58: {
        enterOuterAlt(_localctx, 5);
        setState(503);
        attributeDefinition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RedefinitionContext ------------------------------------------------------------------

MizarParser::RedefinitionContext::RedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ModeDefinitionContext* MizarParser::RedefinitionContext::modeDefinition() {
  return getRuleContext<MizarParser::ModeDefinitionContext>(0);
}

MizarParser::FunctorDefinitionContext* MizarParser::RedefinitionContext::functorDefinition() {
  return getRuleContext<MizarParser::FunctorDefinitionContext>(0);
}

MizarParser::PredicateDefinitionContext* MizarParser::RedefinitionContext::predicateDefinition() {
  return getRuleContext<MizarParser::PredicateDefinitionContext>(0);
}

MizarParser::AttributeDefinitionContext* MizarParser::RedefinitionContext::attributeDefinition() {
  return getRuleContext<MizarParser::AttributeDefinitionContext>(0);
}


size_t MizarParser::RedefinitionContext::getRuleIndex() const {
  return MizarParser::RuleRedefinition;
}

void MizarParser::RedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRedefinition(this);
}

void MizarParser::RedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRedefinition(this);
}

MizarParser::RedefinitionContext* MizarParser::redefinition() {
  RedefinitionContext *_localctx = _tracker.createInstance<RedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 54, MizarParser::RuleRedefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(506);
    match(MizarParser::T__22);
    setState(511);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__30: {
        setState(507);
        modeDefinition();
        break;
      }

      case MizarParser::T__40: {
        setState(508);
        functorDefinition();
        break;
      }

      case MizarParser::T__50: {
        setState(509);
        predicateDefinition();
        break;
      }

      case MizarParser::T__58: {
        setState(510);
        attributeDefinition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructureDefinitionContext ------------------------------------------------------------------

MizarParser::StructureDefinitionContext::StructureDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::StructureSymbolContext* MizarParser::StructureDefinitionContext::structureSymbol() {
  return getRuleContext<MizarParser::StructureSymbolContext>(0);
}

MizarParser::FieldsContext* MizarParser::StructureDefinitionContext::fields() {
  return getRuleContext<MizarParser::FieldsContext>(0);
}

MizarParser::AncestorsContext* MizarParser::StructureDefinitionContext::ancestors() {
  return getRuleContext<MizarParser::AncestorsContext>(0);
}

MizarParser::LociContext* MizarParser::StructureDefinitionContext::loci() {
  return getRuleContext<MizarParser::LociContext>(0);
}


size_t MizarParser::StructureDefinitionContext::getRuleIndex() const {
  return MizarParser::RuleStructureDefinition;
}

void MizarParser::StructureDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructureDefinition(this);
}

void MizarParser::StructureDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructureDefinition(this);
}

MizarParser::StructureDefinitionContext* MizarParser::structureDefinition() {
  StructureDefinitionContext *_localctx = _tracker.createInstance<StructureDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 56, MizarParser::RuleStructureDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(513);
    match(MizarParser::T__23);
    setState(518);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__24) {
      setState(514);
      match(MizarParser::T__24);
      setState(515);
      ancestors();
      setState(516);
      match(MizarParser::T__25);
    }
    setState(520);
    structureSymbol();
    setState(523);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__26) {
      setState(521);
      match(MizarParser::T__26);
      setState(522);
      loci();
    }
    setState(525);
    match(MizarParser::T__27);
    setState(526);
    fields();
    setState(527);
    match(MizarParser::T__28);
    setState(528);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AncestorsContext ------------------------------------------------------------------

MizarParser::AncestorsContext::AncestorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::StructureTypeExpressionContext *> MizarParser::AncestorsContext::structureTypeExpression() {
  return getRuleContexts<MizarParser::StructureTypeExpressionContext>();
}

MizarParser::StructureTypeExpressionContext* MizarParser::AncestorsContext::structureTypeExpression(size_t i) {
  return getRuleContext<MizarParser::StructureTypeExpressionContext>(i);
}


size_t MizarParser::AncestorsContext::getRuleIndex() const {
  return MizarParser::RuleAncestors;
}

void MizarParser::AncestorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAncestors(this);
}

void MizarParser::AncestorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAncestors(this);
}

MizarParser::AncestorsContext* MizarParser::ancestors() {
  AncestorsContext *_localctx = _tracker.createInstance<AncestorsContext>(_ctx, getState());
  enterRule(_localctx, 58, MizarParser::RuleAncestors);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(530);
    structureTypeExpression();
    setState(535);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(531);
      match(MizarParser::T__2);
      setState(532);
      structureTypeExpression();
      setState(537);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructureSymbolContext ------------------------------------------------------------------

MizarParser::StructureSymbolContext::StructureSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::StructureSymbolContext::STRUCTURE_SYMBOL() {
  return getToken(MizarParser::STRUCTURE_SYMBOL, 0);
}


size_t MizarParser::StructureSymbolContext::getRuleIndex() const {
  return MizarParser::RuleStructureSymbol;
}

void MizarParser::StructureSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructureSymbol(this);
}

void MizarParser::StructureSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructureSymbol(this);
}

MizarParser::StructureSymbolContext* MizarParser::structureSymbol() {
  StructureSymbolContext *_localctx = _tracker.createInstance<StructureSymbolContext>(_ctx, getState());
  enterRule(_localctx, 60, MizarParser::RuleStructureSymbol);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(538);
    match(MizarParser::STRUCTURE_SYMBOL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LociContext ------------------------------------------------------------------

MizarParser::LociContext::LociContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::LocusContext *> MizarParser::LociContext::locus() {
  return getRuleContexts<MizarParser::LocusContext>();
}

MizarParser::LocusContext* MizarParser::LociContext::locus(size_t i) {
  return getRuleContext<MizarParser::LocusContext>(i);
}


size_t MizarParser::LociContext::getRuleIndex() const {
  return MizarParser::RuleLoci;
}

void MizarParser::LociContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoci(this);
}

void MizarParser::LociContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoci(this);
}

MizarParser::LociContext* MizarParser::loci() {
  LociContext *_localctx = _tracker.createInstance<LociContext>(_ctx, getState());
  enterRule(_localctx, 62, MizarParser::RuleLoci);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(540);
    locus();
    setState(545);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(541);
      match(MizarParser::T__2);
      setState(542);
      locus();
      setState(547);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldsContext ------------------------------------------------------------------

MizarParser::FieldsContext::FieldsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::FieldSegmentContext *> MizarParser::FieldsContext::fieldSegment() {
  return getRuleContexts<MizarParser::FieldSegmentContext>();
}

MizarParser::FieldSegmentContext* MizarParser::FieldsContext::fieldSegment(size_t i) {
  return getRuleContext<MizarParser::FieldSegmentContext>(i);
}


size_t MizarParser::FieldsContext::getRuleIndex() const {
  return MizarParser::RuleFields;
}

void MizarParser::FieldsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFields(this);
}

void MizarParser::FieldsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFields(this);
}

MizarParser::FieldsContext* MizarParser::fields() {
  FieldsContext *_localctx = _tracker.createInstance<FieldsContext>(_ctx, getState());
  enterRule(_localctx, 64, MizarParser::RuleFields);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(548);
    fieldSegment();
    setState(553);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(549);
      match(MizarParser::T__2);
      setState(550);
      fieldSegment();
      setState(555);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocusContext ------------------------------------------------------------------

MizarParser::LocusContext::LocusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::VariableIdentifierContext* MizarParser::LocusContext::variableIdentifier() {
  return getRuleContext<MizarParser::VariableIdentifierContext>(0);
}


size_t MizarParser::LocusContext::getRuleIndex() const {
  return MizarParser::RuleLocus;
}

void MizarParser::LocusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocus(this);
}

void MizarParser::LocusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocus(this);
}

MizarParser::LocusContext* MizarParser::locus() {
  LocusContext *_localctx = _tracker.createInstance<LocusContext>(_ctx, getState());
  enterRule(_localctx, 66, MizarParser::RuleLocus);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    variableIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableIdentifierContext ------------------------------------------------------------------

MizarParser::VariableIdentifierContext::VariableIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::VariableIdentifierContext::IDENTIFIER() {
  return getToken(MizarParser::IDENTIFIER, 0);
}


size_t MizarParser::VariableIdentifierContext::getRuleIndex() const {
  return MizarParser::RuleVariableIdentifier;
}

void MizarParser::VariableIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableIdentifier(this);
}

void MizarParser::VariableIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableIdentifier(this);
}

MizarParser::VariableIdentifierContext* MizarParser::variableIdentifier() {
  VariableIdentifierContext *_localctx = _tracker.createInstance<VariableIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 68, MizarParser::RuleVariableIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(558);
    match(MizarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldSegmentContext ------------------------------------------------------------------

MizarParser::FieldSegmentContext::FieldSegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::SelectorSymbolContext *> MizarParser::FieldSegmentContext::selectorSymbol() {
  return getRuleContexts<MizarParser::SelectorSymbolContext>();
}

MizarParser::SelectorSymbolContext* MizarParser::FieldSegmentContext::selectorSymbol(size_t i) {
  return getRuleContext<MizarParser::SelectorSymbolContext>(i);
}

MizarParser::SpecificationContext* MizarParser::FieldSegmentContext::specification() {
  return getRuleContext<MizarParser::SpecificationContext>(0);
}


size_t MizarParser::FieldSegmentContext::getRuleIndex() const {
  return MizarParser::RuleFieldSegment;
}

void MizarParser::FieldSegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldSegment(this);
}

void MizarParser::FieldSegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldSegment(this);
}

MizarParser::FieldSegmentContext* MizarParser::fieldSegment() {
  FieldSegmentContext *_localctx = _tracker.createInstance<FieldSegmentContext>(_ctx, getState());
  enterRule(_localctx, 70, MizarParser::RuleFieldSegment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(560);
    selectorSymbol();
    setState(565);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(561);
      match(MizarParser::T__2);
      setState(562);
      selectorSymbol();
      setState(567);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(568);
    specification();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectorSymbolContext ------------------------------------------------------------------

MizarParser::SelectorSymbolContext::SelectorSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::SelectorSymbolContext::SELECTOR_SYMBOL() {
  return getToken(MizarParser::SELECTOR_SYMBOL, 0);
}


size_t MizarParser::SelectorSymbolContext::getRuleIndex() const {
  return MizarParser::RuleSelectorSymbol;
}

void MizarParser::SelectorSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectorSymbol(this);
}

void MizarParser::SelectorSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectorSymbol(this);
}

MizarParser::SelectorSymbolContext* MizarParser::selectorSymbol() {
  SelectorSymbolContext *_localctx = _tracker.createInstance<SelectorSymbolContext>(_ctx, getState());
  enterRule(_localctx, 72, MizarParser::RuleSelectorSymbol);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(570);
    match(MizarParser::SELECTOR_SYMBOL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpecificationContext ------------------------------------------------------------------

MizarParser::SpecificationContext::SpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::TypeExpressionContext* MizarParser::SpecificationContext::typeExpression() {
  return getRuleContext<MizarParser::TypeExpressionContext>(0);
}


size_t MizarParser::SpecificationContext::getRuleIndex() const {
  return MizarParser::RuleSpecification;
}

void MizarParser::SpecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpecification(this);
}

void MizarParser::SpecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpecification(this);
}

MizarParser::SpecificationContext* MizarParser::specification() {
  SpecificationContext *_localctx = _tracker.createInstance<SpecificationContext>(_ctx, getState());
  enterRule(_localctx, 74, MizarParser::RuleSpecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    match(MizarParser::T__29);
    setState(573);
    typeExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModeDefinitionContext ------------------------------------------------------------------

MizarParser::ModeDefinitionContext::ModeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ModePatternContext* MizarParser::ModeDefinitionContext::modePattern() {
  return getRuleContext<MizarParser::ModePatternContext>(0);
}

MizarParser::CorrectnessConditionsContext* MizarParser::ModeDefinitionContext::correctnessConditions() {
  return getRuleContext<MizarParser::CorrectnessConditionsContext>(0);
}

MizarParser::TypeExpressionContext* MizarParser::ModeDefinitionContext::typeExpression() {
  return getRuleContext<MizarParser::TypeExpressionContext>(0);
}

std::vector<MizarParser::ModePropertyContext *> MizarParser::ModeDefinitionContext::modeProperty() {
  return getRuleContexts<MizarParser::ModePropertyContext>();
}

MizarParser::ModePropertyContext* MizarParser::ModeDefinitionContext::modeProperty(size_t i) {
  return getRuleContext<MizarParser::ModePropertyContext>(i);
}

MizarParser::SpecificationContext* MizarParser::ModeDefinitionContext::specification() {
  return getRuleContext<MizarParser::SpecificationContext>(0);
}

MizarParser::DefiniensContext* MizarParser::ModeDefinitionContext::definiens() {
  return getRuleContext<MizarParser::DefiniensContext>(0);
}


size_t MizarParser::ModeDefinitionContext::getRuleIndex() const {
  return MizarParser::RuleModeDefinition;
}

void MizarParser::ModeDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModeDefinition(this);
}

void MizarParser::ModeDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModeDefinition(this);
}

MizarParser::ModeDefinitionContext* MizarParser::modeDefinition() {
  ModeDefinitionContext *_localctx = _tracker.createInstance<ModeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 76, MizarParser::RuleModeDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(575);
    match(MizarParser::T__30);
    setState(576);
    modePattern();
    setState(590);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__3:
      case MizarParser::T__29:
      case MizarParser::T__31: {
        setState(578);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MizarParser::T__29) {
          setState(577);
          specification();
        }
        setState(582);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MizarParser::T__31) {
          setState(580);
          match(MizarParser::T__31);
          setState(581);
          definiens();
        }
        setState(584);
        match(MizarParser::T__3);
        setState(585);
        correctnessConditions();
        break;
      }

      case MizarParser::T__32: {
        setState(586);
        match(MizarParser::T__32);
        setState(587);
        typeExpression();
        setState(588);
        match(MizarParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(595);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__39) {
      setState(592);
      modeProperty();
      setState(597);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModePatternContext ------------------------------------------------------------------

MizarParser::ModePatternContext::ModePatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ModeSymbolContext* MizarParser::ModePatternContext::modeSymbol() {
  return getRuleContext<MizarParser::ModeSymbolContext>(0);
}

MizarParser::LociContext* MizarParser::ModePatternContext::loci() {
  return getRuleContext<MizarParser::LociContext>(0);
}


size_t MizarParser::ModePatternContext::getRuleIndex() const {
  return MizarParser::RuleModePattern;
}

void MizarParser::ModePatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModePattern(this);
}

void MizarParser::ModePatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModePattern(this);
}

MizarParser::ModePatternContext* MizarParser::modePattern() {
  ModePatternContext *_localctx = _tracker.createInstance<ModePatternContext>(_ctx, getState());
  enterRule(_localctx, 78, MizarParser::RuleModePattern);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(598);
    modeSymbol();
    setState(601);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__33) {
      setState(599);
      match(MizarParser::T__33);
      setState(600);
      loci();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModeSymbolContext ------------------------------------------------------------------

MizarParser::ModeSymbolContext::ModeSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::ModeSymbolContext::MODE_SYMBOL() {
  return getToken(MizarParser::MODE_SYMBOL, 0);
}


size_t MizarParser::ModeSymbolContext::getRuleIndex() const {
  return MizarParser::RuleModeSymbol;
}

void MizarParser::ModeSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModeSymbol(this);
}

void MizarParser::ModeSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModeSymbol(this);
}

MizarParser::ModeSymbolContext* MizarParser::modeSymbol() {
  ModeSymbolContext *_localctx = _tracker.createInstance<ModeSymbolContext>(_ctx, getState());
  enterRule(_localctx, 80, MizarParser::RuleModeSymbol);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(603);
    _la = _input->LA(1);
    if (!(_la == MizarParser::T__34 || _la == MizarParser::MODE_SYMBOL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModeSynonymContext ------------------------------------------------------------------

MizarParser::ModeSynonymContext::ModeSynonymContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::ModePatternContext *> MizarParser::ModeSynonymContext::modePattern() {
  return getRuleContexts<MizarParser::ModePatternContext>();
}

MizarParser::ModePatternContext* MizarParser::ModeSynonymContext::modePattern(size_t i) {
  return getRuleContext<MizarParser::ModePatternContext>(i);
}


size_t MizarParser::ModeSynonymContext::getRuleIndex() const {
  return MizarParser::RuleModeSynonym;
}

void MizarParser::ModeSynonymContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModeSynonym(this);
}

void MizarParser::ModeSynonymContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModeSynonym(this);
}

MizarParser::ModeSynonymContext* MizarParser::modeSynonym() {
  ModeSynonymContext *_localctx = _tracker.createInstance<ModeSynonymContext>(_ctx, getState());
  enterRule(_localctx, 82, MizarParser::RuleModeSynonym);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(605);
    match(MizarParser::T__35);
    setState(606);
    modePattern();
    setState(607);
    match(MizarParser::T__15);
    setState(608);
    modePattern();
    setState(609);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefiniensContext ------------------------------------------------------------------

MizarParser::DefiniensContext::DefiniensContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::SimpleDefiniensContext* MizarParser::DefiniensContext::simpleDefiniens() {
  return getRuleContext<MizarParser::SimpleDefiniensContext>(0);
}

MizarParser::ConditionalDefiniensContext* MizarParser::DefiniensContext::conditionalDefiniens() {
  return getRuleContext<MizarParser::ConditionalDefiniensContext>(0);
}


size_t MizarParser::DefiniensContext::getRuleIndex() const {
  return MizarParser::RuleDefiniens;
}

void MizarParser::DefiniensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefiniens(this);
}

void MizarParser::DefiniensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefiniens(this);
}

MizarParser::DefiniensContext* MizarParser::definiens() {
  DefiniensContext *_localctx = _tracker.createInstance<DefiniensContext>(_ctx, getState());
  enterRule(_localctx, 84, MizarParser::RuleDefiniens);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(613);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(611);
      simpleDefiniens();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(612);
      conditionalDefiniens();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleDefiniensContext ------------------------------------------------------------------

MizarParser::SimpleDefiniensContext::SimpleDefiniensContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::SentenceContext* MizarParser::SimpleDefiniensContext::sentence() {
  return getRuleContext<MizarParser::SentenceContext>(0);
}

MizarParser::TermExpressionContext* MizarParser::SimpleDefiniensContext::termExpression() {
  return getRuleContext<MizarParser::TermExpressionContext>(0);
}

MizarParser::LabelIdentifierContext* MizarParser::SimpleDefiniensContext::labelIdentifier() {
  return getRuleContext<MizarParser::LabelIdentifierContext>(0);
}


size_t MizarParser::SimpleDefiniensContext::getRuleIndex() const {
  return MizarParser::RuleSimpleDefiniens;
}

void MizarParser::SimpleDefiniensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleDefiniens(this);
}

void MizarParser::SimpleDefiniensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleDefiniens(this);
}

MizarParser::SimpleDefiniensContext* MizarParser::simpleDefiniens() {
  SimpleDefiniensContext *_localctx = _tracker.createInstance<SimpleDefiniensContext>(_ctx, getState());
  enterRule(_localctx, 86, MizarParser::RuleSimpleDefiniens);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(619);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__36) {
      setState(615);
      match(MizarParser::T__36);
      setState(616);
      labelIdentifier();
      setState(617);
      match(MizarParser::T__36);
    }
    setState(623);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(621);
      sentence();
      break;
    }

    case 2: {
      setState(622);
      termExpression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelIdentifierContext ------------------------------------------------------------------

MizarParser::LabelIdentifierContext::LabelIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::LabelIdentifierContext::IDENTIFIER() {
  return getToken(MizarParser::IDENTIFIER, 0);
}


size_t MizarParser::LabelIdentifierContext::getRuleIndex() const {
  return MizarParser::RuleLabelIdentifier;
}

void MizarParser::LabelIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabelIdentifier(this);
}

void MizarParser::LabelIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabelIdentifier(this);
}

MizarParser::LabelIdentifierContext* MizarParser::labelIdentifier() {
  LabelIdentifierContext *_localctx = _tracker.createInstance<LabelIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 88, MizarParser::RuleLabelIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(625);
    match(MizarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalDefiniensContext ------------------------------------------------------------------

MizarParser::ConditionalDefiniensContext::ConditionalDefiniensContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::PartialDefiniensListContext* MizarParser::ConditionalDefiniensContext::partialDefiniensList() {
  return getRuleContext<MizarParser::PartialDefiniensListContext>(0);
}

MizarParser::LabelIdentifierContext* MizarParser::ConditionalDefiniensContext::labelIdentifier() {
  return getRuleContext<MizarParser::LabelIdentifierContext>(0);
}

MizarParser::SentenceContext* MizarParser::ConditionalDefiniensContext::sentence() {
  return getRuleContext<MizarParser::SentenceContext>(0);
}

MizarParser::TermExpressionContext* MizarParser::ConditionalDefiniensContext::termExpression() {
  return getRuleContext<MizarParser::TermExpressionContext>(0);
}


size_t MizarParser::ConditionalDefiniensContext::getRuleIndex() const {
  return MizarParser::RuleConditionalDefiniens;
}

void MizarParser::ConditionalDefiniensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalDefiniens(this);
}

void MizarParser::ConditionalDefiniensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalDefiniens(this);
}

MizarParser::ConditionalDefiniensContext* MizarParser::conditionalDefiniens() {
  ConditionalDefiniensContext *_localctx = _tracker.createInstance<ConditionalDefiniensContext>(_ctx, getState());
  enterRule(_localctx, 90, MizarParser::RuleConditionalDefiniens);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(631);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__36) {
      setState(627);
      match(MizarParser::T__36);
      setState(628);
      labelIdentifier();
      setState(629);
      match(MizarParser::T__36);
    }
    setState(633);
    partialDefiniensList();
    setState(639);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__37) {
      setState(634);
      match(MizarParser::T__37);
      setState(637);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
        setState(635);
        sentence();
        break;
      }

      case 2: {
        setState(636);
        termExpression(0);
        break;
      }

      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PartialDefiniensListContext ------------------------------------------------------------------

MizarParser::PartialDefiniensListContext::PartialDefiniensListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::PartialDefiniensContext *> MizarParser::PartialDefiniensListContext::partialDefiniens() {
  return getRuleContexts<MizarParser::PartialDefiniensContext>();
}

MizarParser::PartialDefiniensContext* MizarParser::PartialDefiniensListContext::partialDefiniens(size_t i) {
  return getRuleContext<MizarParser::PartialDefiniensContext>(i);
}


size_t MizarParser::PartialDefiniensListContext::getRuleIndex() const {
  return MizarParser::RulePartialDefiniensList;
}

void MizarParser::PartialDefiniensListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPartialDefiniensList(this);
}

void MizarParser::PartialDefiniensListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPartialDefiniensList(this);
}

MizarParser::PartialDefiniensListContext* MizarParser::partialDefiniensList() {
  PartialDefiniensListContext *_localctx = _tracker.createInstance<PartialDefiniensListContext>(_ctx, getState());
  enterRule(_localctx, 92, MizarParser::RulePartialDefiniensList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(641);
    partialDefiniens();
    setState(646);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(642);
      match(MizarParser::T__2);
      setState(643);
      partialDefiniens();
      setState(648);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PartialDefiniensContext ------------------------------------------------------------------

MizarParser::PartialDefiniensContext::PartialDefiniensContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::SentenceContext *> MizarParser::PartialDefiniensContext::sentence() {
  return getRuleContexts<MizarParser::SentenceContext>();
}

MizarParser::SentenceContext* MizarParser::PartialDefiniensContext::sentence(size_t i) {
  return getRuleContext<MizarParser::SentenceContext>(i);
}

MizarParser::TermExpressionContext* MizarParser::PartialDefiniensContext::termExpression() {
  return getRuleContext<MizarParser::TermExpressionContext>(0);
}


size_t MizarParser::PartialDefiniensContext::getRuleIndex() const {
  return MizarParser::RulePartialDefiniens;
}

void MizarParser::PartialDefiniensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPartialDefiniens(this);
}

void MizarParser::PartialDefiniensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPartialDefiniens(this);
}

MizarParser::PartialDefiniensContext* MizarParser::partialDefiniens() {
  PartialDefiniensContext *_localctx = _tracker.createInstance<PartialDefiniensContext>(_ctx, getState());
  enterRule(_localctx, 94, MizarParser::RulePartialDefiniens);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(651);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      setState(649);
      sentence();
      break;
    }

    case 2: {
      setState(650);
      termExpression(0);
      break;
    }

    }
    setState(653);
    match(MizarParser::T__38);
    setState(654);
    sentence();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModePropertyContext ------------------------------------------------------------------

MizarParser::ModePropertyContext::ModePropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::JustificationContext* MizarParser::ModePropertyContext::justification() {
  return getRuleContext<MizarParser::JustificationContext>(0);
}


size_t MizarParser::ModePropertyContext::getRuleIndex() const {
  return MizarParser::RuleModeProperty;
}

void MizarParser::ModePropertyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModeProperty(this);
}

void MizarParser::ModePropertyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModeProperty(this);
}

MizarParser::ModePropertyContext* MizarParser::modeProperty() {
  ModePropertyContext *_localctx = _tracker.createInstance<ModePropertyContext>(_ctx, getState());
  enterRule(_localctx, 96, MizarParser::RuleModeProperty);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(656);
    match(MizarParser::T__39);
    setState(657);
    justification();
    setState(658);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctorDefinitionContext ------------------------------------------------------------------

MizarParser::FunctorDefinitionContext::FunctorDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::FunctorPatternContext* MizarParser::FunctorDefinitionContext::functorPattern() {
  return getRuleContext<MizarParser::FunctorPatternContext>(0);
}

MizarParser::CorrectnessConditionsContext* MizarParser::FunctorDefinitionContext::correctnessConditions() {
  return getRuleContext<MizarParser::CorrectnessConditionsContext>(0);
}

MizarParser::SpecificationContext* MizarParser::FunctorDefinitionContext::specification() {
  return getRuleContext<MizarParser::SpecificationContext>(0);
}

MizarParser::DefiniensContext* MizarParser::FunctorDefinitionContext::definiens() {
  return getRuleContext<MizarParser::DefiniensContext>(0);
}

std::vector<MizarParser::FunctorPropertyContext *> MizarParser::FunctorDefinitionContext::functorProperty() {
  return getRuleContexts<MizarParser::FunctorPropertyContext>();
}

MizarParser::FunctorPropertyContext* MizarParser::FunctorDefinitionContext::functorProperty(size_t i) {
  return getRuleContext<MizarParser::FunctorPropertyContext>(i);
}


size_t MizarParser::FunctorDefinitionContext::getRuleIndex() const {
  return MizarParser::RuleFunctorDefinition;
}

void MizarParser::FunctorDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctorDefinition(this);
}

void MizarParser::FunctorDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctorDefinition(this);
}

MizarParser::FunctorDefinitionContext* MizarParser::functorDefinition() {
  FunctorDefinitionContext *_localctx = _tracker.createInstance<FunctorDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 98, MizarParser::RuleFunctorDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(660);
    match(MizarParser::T__40);
    setState(661);
    functorPattern();
    setState(663);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__29) {
      setState(662);
      specification();
    }
    setState(667);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__31

    || _la == MizarParser::T__41) {
      setState(665);
      _la = _input->LA(1);
      if (!(_la == MizarParser::T__31

      || _la == MizarParser::T__41)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(666);
      definiens();
    }
    setState(669);
    match(MizarParser::T__3);
    setState(670);
    correctnessConditions();
    setState(674);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MizarParser::T__42)
      | (1ULL << MizarParser::T__43)
      | (1ULL << MizarParser::T__44)
      | (1ULL << MizarParser::T__45))) != 0)) {
      setState(671);
      functorProperty();
      setState(676);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctorPatternContext ------------------------------------------------------------------

MizarParser::FunctorPatternContext::FunctorPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::FunctorSymbolContext* MizarParser::FunctorPatternContext::functorSymbol() {
  return getRuleContext<MizarParser::FunctorSymbolContext>(0);
}

std::vector<MizarParser::FunctorLociContext *> MizarParser::FunctorPatternContext::functorLoci() {
  return getRuleContexts<MizarParser::FunctorLociContext>();
}

MizarParser::FunctorLociContext* MizarParser::FunctorPatternContext::functorLoci(size_t i) {
  return getRuleContext<MizarParser::FunctorLociContext>(i);
}

MizarParser::LeftFunctorBracketContext* MizarParser::FunctorPatternContext::leftFunctorBracket() {
  return getRuleContext<MizarParser::LeftFunctorBracketContext>(0);
}

MizarParser::LociContext* MizarParser::FunctorPatternContext::loci() {
  return getRuleContext<MizarParser::LociContext>(0);
}

MizarParser::RightFunctorBracketContext* MizarParser::FunctorPatternContext::rightFunctorBracket() {
  return getRuleContext<MizarParser::RightFunctorBracketContext>(0);
}


size_t MizarParser::FunctorPatternContext::getRuleIndex() const {
  return MizarParser::RuleFunctorPattern;
}

void MizarParser::FunctorPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctorPattern(this);
}

void MizarParser::FunctorPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctorPattern(this);
}

MizarParser::FunctorPatternContext* MizarParser::functorPattern() {
  FunctorPatternContext *_localctx = _tracker.createInstance<FunctorPatternContext>(_ctx, getState());
  enterRule(_localctx, 100, MizarParser::RuleFunctorPattern);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(688);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__24:
      case MizarParser::FUNCTOR_SYMBOL:
      case MizarParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(678);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MizarParser::T__24 || _la == MizarParser::IDENTIFIER) {
          setState(677);
          functorLoci();
        }
        setState(680);
        functorSymbol();
        setState(682);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MizarParser::T__24 || _la == MizarParser::IDENTIFIER) {
          setState(681);
          functorLoci();
        }
        break;
      }

      case MizarParser::T__46:
      case MizarParser::T__47:
      case MizarParser::LEFT_FUNCTOR_SYMBOL: {
        enterOuterAlt(_localctx, 2);
        setState(684);
        leftFunctorBracket();
        setState(685);
        loci();
        setState(686);
        rightFunctorBracket();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctorPropertyContext ------------------------------------------------------------------

MizarParser::FunctorPropertyContext::FunctorPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::JustificationContext* MizarParser::FunctorPropertyContext::justification() {
  return getRuleContext<MizarParser::JustificationContext>(0);
}


size_t MizarParser::FunctorPropertyContext::getRuleIndex() const {
  return MizarParser::RuleFunctorProperty;
}

void MizarParser::FunctorPropertyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctorProperty(this);
}

void MizarParser::FunctorPropertyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctorProperty(this);
}

MizarParser::FunctorPropertyContext* MizarParser::functorProperty() {
  FunctorPropertyContext *_localctx = _tracker.createInstance<FunctorPropertyContext>(_ctx, getState());
  enterRule(_localctx, 102, MizarParser::RuleFunctorProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(690);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MizarParser::T__42)
      | (1ULL << MizarParser::T__43)
      | (1ULL << MizarParser::T__44)
      | (1ULL << MizarParser::T__45))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(691);
    justification();
    setState(692);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctorSynonymContext ------------------------------------------------------------------

MizarParser::FunctorSynonymContext::FunctorSynonymContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::FunctorPatternContext *> MizarParser::FunctorSynonymContext::functorPattern() {
  return getRuleContexts<MizarParser::FunctorPatternContext>();
}

MizarParser::FunctorPatternContext* MizarParser::FunctorSynonymContext::functorPattern(size_t i) {
  return getRuleContext<MizarParser::FunctorPatternContext>(i);
}


size_t MizarParser::FunctorSynonymContext::getRuleIndex() const {
  return MizarParser::RuleFunctorSynonym;
}

void MizarParser::FunctorSynonymContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctorSynonym(this);
}

void MizarParser::FunctorSynonymContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctorSynonym(this);
}

MizarParser::FunctorSynonymContext* MizarParser::functorSynonym() {
  FunctorSynonymContext *_localctx = _tracker.createInstance<FunctorSynonymContext>(_ctx, getState());
  enterRule(_localctx, 104, MizarParser::RuleFunctorSynonym);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(694);
    match(MizarParser::T__35);
    setState(695);
    functorPattern();
    setState(696);
    match(MizarParser::T__15);
    setState(697);
    functorPattern();
    setState(698);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctorLociContext ------------------------------------------------------------------

MizarParser::FunctorLociContext::FunctorLociContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::LocusContext* MizarParser::FunctorLociContext::locus() {
  return getRuleContext<MizarParser::LocusContext>(0);
}

MizarParser::LociContext* MizarParser::FunctorLociContext::loci() {
  return getRuleContext<MizarParser::LociContext>(0);
}


size_t MizarParser::FunctorLociContext::getRuleIndex() const {
  return MizarParser::RuleFunctorLoci;
}

void MizarParser::FunctorLociContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctorLoci(this);
}

void MizarParser::FunctorLociContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctorLoci(this);
}

MizarParser::FunctorLociContext* MizarParser::functorLoci() {
  FunctorLociContext *_localctx = _tracker.createInstance<FunctorLociContext>(_ctx, getState());
  enterRule(_localctx, 106, MizarParser::RuleFunctorLoci);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(705);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(700);
        locus();
        break;
      }

      case MizarParser::T__24: {
        enterOuterAlt(_localctx, 2);
        setState(701);
        match(MizarParser::T__24);
        setState(702);
        loci();
        setState(703);
        match(MizarParser::T__25);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctorSymbolContext ------------------------------------------------------------------

MizarParser::FunctorSymbolContext::FunctorSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::FunctorSymbolContext::FUNCTOR_SYMBOL() {
  return getToken(MizarParser::FUNCTOR_SYMBOL, 0);
}


size_t MizarParser::FunctorSymbolContext::getRuleIndex() const {
  return MizarParser::RuleFunctorSymbol;
}

void MizarParser::FunctorSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctorSymbol(this);
}

void MizarParser::FunctorSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctorSymbol(this);
}

MizarParser::FunctorSymbolContext* MizarParser::functorSymbol() {
  FunctorSymbolContext *_localctx = _tracker.createInstance<FunctorSymbolContext>(_ctx, getState());
  enterRule(_localctx, 108, MizarParser::RuleFunctorSymbol);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(707);
    match(MizarParser::FUNCTOR_SYMBOL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeftFunctorBracketContext ------------------------------------------------------------------

MizarParser::LeftFunctorBracketContext::LeftFunctorBracketContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::LeftFunctorBracketContext::LEFT_FUNCTOR_SYMBOL() {
  return getToken(MizarParser::LEFT_FUNCTOR_SYMBOL, 0);
}


size_t MizarParser::LeftFunctorBracketContext::getRuleIndex() const {
  return MizarParser::RuleLeftFunctorBracket;
}

void MizarParser::LeftFunctorBracketContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLeftFunctorBracket(this);
}

void MizarParser::LeftFunctorBracketContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLeftFunctorBracket(this);
}

MizarParser::LeftFunctorBracketContext* MizarParser::leftFunctorBracket() {
  LeftFunctorBracketContext *_localctx = _tracker.createInstance<LeftFunctorBracketContext>(_ctx, getState());
  enterRule(_localctx, 110, MizarParser::RuleLeftFunctorBracket);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(709);
    _la = _input->LA(1);
    if (!(_la == MizarParser::T__46

    || _la == MizarParser::T__47 || _la == MizarParser::LEFT_FUNCTOR_SYMBOL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RightFunctorBracketContext ------------------------------------------------------------------

MizarParser::RightFunctorBracketContext::RightFunctorBracketContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::RightFunctorBracketContext::RIGHT_FUNCTOR_SYMBOL() {
  return getToken(MizarParser::RIGHT_FUNCTOR_SYMBOL, 0);
}


size_t MizarParser::RightFunctorBracketContext::getRuleIndex() const {
  return MizarParser::RuleRightFunctorBracket;
}

void MizarParser::RightFunctorBracketContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRightFunctorBracket(this);
}

void MizarParser::RightFunctorBracketContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRightFunctorBracket(this);
}

MizarParser::RightFunctorBracketContext* MizarParser::rightFunctorBracket() {
  RightFunctorBracketContext *_localctx = _tracker.createInstance<RightFunctorBracketContext>(_ctx, getState());
  enterRule(_localctx, 112, MizarParser::RuleRightFunctorBracket);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(711);
    _la = _input->LA(1);
    if (!(_la == MizarParser::T__48

    || _la == MizarParser::T__49 || _la == MizarParser::RIGHT_FUNCTOR_SYMBOL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicateDefinitionContext ------------------------------------------------------------------

MizarParser::PredicateDefinitionContext::PredicateDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::PredicatePatternContext* MizarParser::PredicateDefinitionContext::predicatePattern() {
  return getRuleContext<MizarParser::PredicatePatternContext>(0);
}

MizarParser::CorrectnessConditionsContext* MizarParser::PredicateDefinitionContext::correctnessConditions() {
  return getRuleContext<MizarParser::CorrectnessConditionsContext>(0);
}

MizarParser::DefiniensContext* MizarParser::PredicateDefinitionContext::definiens() {
  return getRuleContext<MizarParser::DefiniensContext>(0);
}

std::vector<MizarParser::PredicatePropertyContext *> MizarParser::PredicateDefinitionContext::predicateProperty() {
  return getRuleContexts<MizarParser::PredicatePropertyContext>();
}

MizarParser::PredicatePropertyContext* MizarParser::PredicateDefinitionContext::predicateProperty(size_t i) {
  return getRuleContext<MizarParser::PredicatePropertyContext>(i);
}


size_t MizarParser::PredicateDefinitionContext::getRuleIndex() const {
  return MizarParser::RulePredicateDefinition;
}

void MizarParser::PredicateDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicateDefinition(this);
}

void MizarParser::PredicateDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicateDefinition(this);
}

MizarParser::PredicateDefinitionContext* MizarParser::predicateDefinition() {
  PredicateDefinitionContext *_localctx = _tracker.createInstance<PredicateDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 114, MizarParser::RulePredicateDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(713);
    match(MizarParser::T__50);
    setState(714);
    predicatePattern();
    setState(717);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__31) {
      setState(715);
      match(MizarParser::T__31);
      setState(716);
      definiens();
    }
    setState(719);
    match(MizarParser::T__3);
    setState(720);
    correctnessConditions();
    setState(724);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MizarParser::T__51)
      | (1ULL << MizarParser::T__52)
      | (1ULL << MizarParser::T__53)
      | (1ULL << MizarParser::T__54)
      | (1ULL << MizarParser::T__55))) != 0)) {
      setState(721);
      predicateProperty();
      setState(726);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicatePatternContext ------------------------------------------------------------------

MizarParser::PredicatePatternContext::PredicatePatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::PredicateSymbolContext* MizarParser::PredicatePatternContext::predicateSymbol() {
  return getRuleContext<MizarParser::PredicateSymbolContext>(0);
}

std::vector<MizarParser::LociContext *> MizarParser::PredicatePatternContext::loci() {
  return getRuleContexts<MizarParser::LociContext>();
}

MizarParser::LociContext* MizarParser::PredicatePatternContext::loci(size_t i) {
  return getRuleContext<MizarParser::LociContext>(i);
}


size_t MizarParser::PredicatePatternContext::getRuleIndex() const {
  return MizarParser::RulePredicatePattern;
}

void MizarParser::PredicatePatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicatePattern(this);
}

void MizarParser::PredicatePatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicatePattern(this);
}

MizarParser::PredicatePatternContext* MizarParser::predicatePattern() {
  PredicatePatternContext *_localctx = _tracker.createInstance<PredicatePatternContext>(_ctx, getState());
  enterRule(_localctx, 116, MizarParser::RulePredicatePattern);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(728);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::IDENTIFIER) {
      setState(727);
      loci();
    }
    setState(730);
    predicateSymbol();
    setState(732);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::IDENTIFIER) {
      setState(731);
      loci();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicatePropertyContext ------------------------------------------------------------------

MizarParser::PredicatePropertyContext::PredicatePropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::JustificationContext* MizarParser::PredicatePropertyContext::justification() {
  return getRuleContext<MizarParser::JustificationContext>(0);
}


size_t MizarParser::PredicatePropertyContext::getRuleIndex() const {
  return MizarParser::RulePredicateProperty;
}

void MizarParser::PredicatePropertyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicateProperty(this);
}

void MizarParser::PredicatePropertyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicateProperty(this);
}

MizarParser::PredicatePropertyContext* MizarParser::predicateProperty() {
  PredicatePropertyContext *_localctx = _tracker.createInstance<PredicatePropertyContext>(_ctx, getState());
  enterRule(_localctx, 118, MizarParser::RulePredicateProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(734);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MizarParser::T__51)
      | (1ULL << MizarParser::T__52)
      | (1ULL << MizarParser::T__53)
      | (1ULL << MizarParser::T__54)
      | (1ULL << MizarParser::T__55))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(735);
    justification();
    setState(736);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicateSynonymContext ------------------------------------------------------------------

MizarParser::PredicateSynonymContext::PredicateSynonymContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::PredicatePatternContext *> MizarParser::PredicateSynonymContext::predicatePattern() {
  return getRuleContexts<MizarParser::PredicatePatternContext>();
}

MizarParser::PredicatePatternContext* MizarParser::PredicateSynonymContext::predicatePattern(size_t i) {
  return getRuleContext<MizarParser::PredicatePatternContext>(i);
}


size_t MizarParser::PredicateSynonymContext::getRuleIndex() const {
  return MizarParser::RulePredicateSynonym;
}

void MizarParser::PredicateSynonymContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicateSynonym(this);
}

void MizarParser::PredicateSynonymContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicateSynonym(this);
}

MizarParser::PredicateSynonymContext* MizarParser::predicateSynonym() {
  PredicateSynonymContext *_localctx = _tracker.createInstance<PredicateSynonymContext>(_ctx, getState());
  enterRule(_localctx, 120, MizarParser::RulePredicateSynonym);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(738);
    match(MizarParser::T__35);
    setState(739);
    predicatePattern();
    setState(740);
    match(MizarParser::T__15);
    setState(741);
    predicatePattern();
    setState(742);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicateAntonymContext ------------------------------------------------------------------

MizarParser::PredicateAntonymContext::PredicateAntonymContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::PredicatePatternContext *> MizarParser::PredicateAntonymContext::predicatePattern() {
  return getRuleContexts<MizarParser::PredicatePatternContext>();
}

MizarParser::PredicatePatternContext* MizarParser::PredicateAntonymContext::predicatePattern(size_t i) {
  return getRuleContext<MizarParser::PredicatePatternContext>(i);
}


size_t MizarParser::PredicateAntonymContext::getRuleIndex() const {
  return MizarParser::RulePredicateAntonym;
}

void MizarParser::PredicateAntonymContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicateAntonym(this);
}

void MizarParser::PredicateAntonymContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicateAntonym(this);
}

MizarParser::PredicateAntonymContext* MizarParser::predicateAntonym() {
  PredicateAntonymContext *_localctx = _tracker.createInstance<PredicateAntonymContext>(_ctx, getState());
  enterRule(_localctx, 122, MizarParser::RulePredicateAntonym);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(744);
    match(MizarParser::T__56);
    setState(745);
    predicatePattern();
    setState(746);
    match(MizarParser::T__15);
    setState(747);
    predicatePattern();
    setState(748);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicateSymbolContext ------------------------------------------------------------------

MizarParser::PredicateSymbolContext::PredicateSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::PredicateSymbolContext::PREDICATE_SYMBOL() {
  return getToken(MizarParser::PREDICATE_SYMBOL, 0);
}


size_t MizarParser::PredicateSymbolContext::getRuleIndex() const {
  return MizarParser::RulePredicateSymbol;
}

void MizarParser::PredicateSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicateSymbol(this);
}

void MizarParser::PredicateSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicateSymbol(this);
}

MizarParser::PredicateSymbolContext* MizarParser::predicateSymbol() {
  PredicateSymbolContext *_localctx = _tracker.createInstance<PredicateSymbolContext>(_ctx, getState());
  enterRule(_localctx, 124, MizarParser::RulePredicateSymbol);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(750);
    _la = _input->LA(1);
    if (!(_la == MizarParser::T__57 || _la == MizarParser::PREDICATE_SYMBOL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeDefinitionContext ------------------------------------------------------------------

MizarParser::AttributeDefinitionContext::AttributeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::AttributePatternContext* MizarParser::AttributeDefinitionContext::attributePattern() {
  return getRuleContext<MizarParser::AttributePatternContext>(0);
}

MizarParser::DefiniensContext* MizarParser::AttributeDefinitionContext::definiens() {
  return getRuleContext<MizarParser::DefiniensContext>(0);
}

MizarParser::CorrectnessConditionsContext* MizarParser::AttributeDefinitionContext::correctnessConditions() {
  return getRuleContext<MizarParser::CorrectnessConditionsContext>(0);
}


size_t MizarParser::AttributeDefinitionContext::getRuleIndex() const {
  return MizarParser::RuleAttributeDefinition;
}

void MizarParser::AttributeDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeDefinition(this);
}

void MizarParser::AttributeDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeDefinition(this);
}

MizarParser::AttributeDefinitionContext* MizarParser::attributeDefinition() {
  AttributeDefinitionContext *_localctx = _tracker.createInstance<AttributeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 126, MizarParser::RuleAttributeDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(752);
    match(MizarParser::T__58);
    setState(753);
    attributePattern();
    setState(754);
    match(MizarParser::T__31);
    setState(755);
    definiens();
    setState(756);
    match(MizarParser::T__3);
    setState(757);
    correctnessConditions();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributePatternContext ------------------------------------------------------------------

MizarParser::AttributePatternContext::AttributePatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::LocusContext* MizarParser::AttributePatternContext::locus() {
  return getRuleContext<MizarParser::LocusContext>(0);
}

MizarParser::AttributeSymbolContext* MizarParser::AttributePatternContext::attributeSymbol() {
  return getRuleContext<MizarParser::AttributeSymbolContext>(0);
}

MizarParser::AttributeLociContext* MizarParser::AttributePatternContext::attributeLoci() {
  return getRuleContext<MizarParser::AttributeLociContext>(0);
}


size_t MizarParser::AttributePatternContext::getRuleIndex() const {
  return MizarParser::RuleAttributePattern;
}

void MizarParser::AttributePatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributePattern(this);
}

void MizarParser::AttributePatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributePattern(this);
}

MizarParser::AttributePatternContext* MizarParser::attributePattern() {
  AttributePatternContext *_localctx = _tracker.createInstance<AttributePatternContext>(_ctx, getState());
  enterRule(_localctx, 128, MizarParser::RuleAttributePattern);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(759);
    locus();
    setState(760);
    match(MizarParser::T__32);
    setState(762);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__24 || _la == MizarParser::IDENTIFIER) {
      setState(761);
      attributeLoci();
    }
    setState(764);
    attributeSymbol();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeSynonymContext ------------------------------------------------------------------

MizarParser::AttributeSynonymContext::AttributeSynonymContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::AttributePatternContext *> MizarParser::AttributeSynonymContext::attributePattern() {
  return getRuleContexts<MizarParser::AttributePatternContext>();
}

MizarParser::AttributePatternContext* MizarParser::AttributeSynonymContext::attributePattern(size_t i) {
  return getRuleContext<MizarParser::AttributePatternContext>(i);
}


size_t MizarParser::AttributeSynonymContext::getRuleIndex() const {
  return MizarParser::RuleAttributeSynonym;
}

void MizarParser::AttributeSynonymContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeSynonym(this);
}

void MizarParser::AttributeSynonymContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeSynonym(this);
}

MizarParser::AttributeSynonymContext* MizarParser::attributeSynonym() {
  AttributeSynonymContext *_localctx = _tracker.createInstance<AttributeSynonymContext>(_ctx, getState());
  enterRule(_localctx, 130, MizarParser::RuleAttributeSynonym);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(766);
    match(MizarParser::T__35);
    setState(767);
    attributePattern();
    setState(768);
    match(MizarParser::T__15);
    setState(769);
    attributePattern();
    setState(770);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeAntonymContext ------------------------------------------------------------------

MizarParser::AttributeAntonymContext::AttributeAntonymContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::AttributePatternContext *> MizarParser::AttributeAntonymContext::attributePattern() {
  return getRuleContexts<MizarParser::AttributePatternContext>();
}

MizarParser::AttributePatternContext* MizarParser::AttributeAntonymContext::attributePattern(size_t i) {
  return getRuleContext<MizarParser::AttributePatternContext>(i);
}


size_t MizarParser::AttributeAntonymContext::getRuleIndex() const {
  return MizarParser::RuleAttributeAntonym;
}

void MizarParser::AttributeAntonymContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeAntonym(this);
}

void MizarParser::AttributeAntonymContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeAntonym(this);
}

MizarParser::AttributeAntonymContext* MizarParser::attributeAntonym() {
  AttributeAntonymContext *_localctx = _tracker.createInstance<AttributeAntonymContext>(_ctx, getState());
  enterRule(_localctx, 132, MizarParser::RuleAttributeAntonym);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(772);
    match(MizarParser::T__56);
    setState(773);
    attributePattern();
    setState(774);
    match(MizarParser::T__15);
    setState(775);
    attributePattern();
    setState(776);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeSymbolContext ------------------------------------------------------------------

MizarParser::AttributeSymbolContext::AttributeSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::AttributeSymbolContext::ATTRIBUTE_SYMBOL() {
  return getToken(MizarParser::ATTRIBUTE_SYMBOL, 0);
}


size_t MizarParser::AttributeSymbolContext::getRuleIndex() const {
  return MizarParser::RuleAttributeSymbol;
}

void MizarParser::AttributeSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeSymbol(this);
}

void MizarParser::AttributeSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeSymbol(this);
}

MizarParser::AttributeSymbolContext* MizarParser::attributeSymbol() {
  AttributeSymbolContext *_localctx = _tracker.createInstance<AttributeSymbolContext>(_ctx, getState());
  enterRule(_localctx, 134, MizarParser::RuleAttributeSymbol);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(778);
    match(MizarParser::ATTRIBUTE_SYMBOL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeLociContext ------------------------------------------------------------------

MizarParser::AttributeLociContext::AttributeLociContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::LociContext* MizarParser::AttributeLociContext::loci() {
  return getRuleContext<MizarParser::LociContext>(0);
}


size_t MizarParser::AttributeLociContext::getRuleIndex() const {
  return MizarParser::RuleAttributeLoci;
}

void MizarParser::AttributeLociContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeLoci(this);
}

void MizarParser::AttributeLociContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeLoci(this);
}

MizarParser::AttributeLociContext* MizarParser::attributeLoci() {
  AttributeLociContext *_localctx = _tracker.createInstance<AttributeLociContext>(_ctx, getState());
  enterRule(_localctx, 136, MizarParser::RuleAttributeLoci);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(785);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(780);
        loci();
        break;
      }

      case MizarParser::T__24: {
        enterOuterAlt(_localctx, 2);
        setState(781);
        match(MizarParser::T__24);
        setState(782);
        loci();
        setState(783);
        match(MizarParser::T__25);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClusterRegistrationContext ------------------------------------------------------------------

MizarParser::ClusterRegistrationContext::ClusterRegistrationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ExistentialRegistrationContext* MizarParser::ClusterRegistrationContext::existentialRegistration() {
  return getRuleContext<MizarParser::ExistentialRegistrationContext>(0);
}

MizarParser::ConditionalRegistrationContext* MizarParser::ClusterRegistrationContext::conditionalRegistration() {
  return getRuleContext<MizarParser::ConditionalRegistrationContext>(0);
}

MizarParser::FunctorialRegistrationContext* MizarParser::ClusterRegistrationContext::functorialRegistration() {
  return getRuleContext<MizarParser::FunctorialRegistrationContext>(0);
}


size_t MizarParser::ClusterRegistrationContext::getRuleIndex() const {
  return MizarParser::RuleClusterRegistration;
}

void MizarParser::ClusterRegistrationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClusterRegistration(this);
}

void MizarParser::ClusterRegistrationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClusterRegistration(this);
}

MizarParser::ClusterRegistrationContext* MizarParser::clusterRegistration() {
  ClusterRegistrationContext *_localctx = _tracker.createInstance<ClusterRegistrationContext>(_ctx, getState());
  enterRule(_localctx, 138, MizarParser::RuleClusterRegistration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(790);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(787);
      existentialRegistration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(788);
      conditionalRegistration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(789);
      functorialRegistration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExistentialRegistrationContext ------------------------------------------------------------------

MizarParser::ExistentialRegistrationContext::ExistentialRegistrationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::AdjectiveClusterContext* MizarParser::ExistentialRegistrationContext::adjectiveCluster() {
  return getRuleContext<MizarParser::AdjectiveClusterContext>(0);
}

MizarParser::TypeExpressionContext* MizarParser::ExistentialRegistrationContext::typeExpression() {
  return getRuleContext<MizarParser::TypeExpressionContext>(0);
}

MizarParser::CorrectnessConditionsContext* MizarParser::ExistentialRegistrationContext::correctnessConditions() {
  return getRuleContext<MizarParser::CorrectnessConditionsContext>(0);
}


size_t MizarParser::ExistentialRegistrationContext::getRuleIndex() const {
  return MizarParser::RuleExistentialRegistration;
}

void MizarParser::ExistentialRegistrationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExistentialRegistration(this);
}

void MizarParser::ExistentialRegistrationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExistentialRegistration(this);
}

MizarParser::ExistentialRegistrationContext* MizarParser::existentialRegistration() {
  ExistentialRegistrationContext *_localctx = _tracker.createInstance<ExistentialRegistrationContext>(_ctx, getState());
  enterRule(_localctx, 140, MizarParser::RuleExistentialRegistration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(792);
    match(MizarParser::T__59);
    setState(793);
    adjectiveCluster();
    setState(794);
    match(MizarParser::T__15);
    setState(795);
    typeExpression();
    setState(796);
    match(MizarParser::T__3);
    setState(797);
    correctnessConditions();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdjectiveClusterContext ------------------------------------------------------------------

MizarParser::AdjectiveClusterContext::AdjectiveClusterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::AdjectiveContext *> MizarParser::AdjectiveClusterContext::adjective() {
  return getRuleContexts<MizarParser::AdjectiveContext>();
}

MizarParser::AdjectiveContext* MizarParser::AdjectiveClusterContext::adjective(size_t i) {
  return getRuleContext<MizarParser::AdjectiveContext>(i);
}


size_t MizarParser::AdjectiveClusterContext::getRuleIndex() const {
  return MizarParser::RuleAdjectiveCluster;
}

void MizarParser::AdjectiveClusterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdjectiveCluster(this);
}

void MizarParser::AdjectiveClusterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdjectiveCluster(this);
}

MizarParser::AdjectiveClusterContext* MizarParser::adjectiveCluster() {
  AdjectiveClusterContext *_localctx = _tracker.createInstance<AdjectiveClusterContext>(_ctx, getState());
  enterRule(_localctx, 142, MizarParser::RuleAdjectiveCluster);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(802);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(799);
        adjective(); 
      }
      setState(804);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdjectiveContext ------------------------------------------------------------------

MizarParser::AdjectiveContext::AdjectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::AttributeSymbolContext* MizarParser::AdjectiveContext::attributeSymbol() {
  return getRuleContext<MizarParser::AttributeSymbolContext>(0);
}

MizarParser::AdjectiveArgumentsContext* MizarParser::AdjectiveContext::adjectiveArguments() {
  return getRuleContext<MizarParser::AdjectiveArgumentsContext>(0);
}


size_t MizarParser::AdjectiveContext::getRuleIndex() const {
  return MizarParser::RuleAdjective;
}

void MizarParser::AdjectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdjective(this);
}

void MizarParser::AdjectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdjective(this);
}

MizarParser::AdjectiveContext* MizarParser::adjective() {
  AdjectiveContext *_localctx = _tracker.createInstance<AdjectiveContext>(_ctx, getState());
  enterRule(_localctx, 144, MizarParser::RuleAdjective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(806);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__60) {
      setState(805);
      match(MizarParser::T__60);
    }
    setState(809);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MizarParser::T__24)
      | (1ULL << MizarParser::T__46)
      | (1ULL << MizarParser::T__47))) != 0) || ((((_la - 118) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 118)) & ((1ULL << (MizarParser::T__117 - 118))
      | (1ULL << (MizarParser::T__119 - 118))
      | (1ULL << (MizarParser::T__122 - 118))
      | (1ULL << (MizarParser::T__123 - 118))
      | (1ULL << (MizarParser::T__124 - 118))
      | (1ULL << (MizarParser::T__125 - 118))
      | (1ULL << (MizarParser::T__126 - 118))
      | (1ULL << (MizarParser::T__127 - 118))
      | (1ULL << (MizarParser::T__128 - 118))
      | (1ULL << (MizarParser::T__129 - 118))
      | (1ULL << (MizarParser::T__130 - 118))
      | (1ULL << (MizarParser::T__131 - 118))
      | (1ULL << (MizarParser::FUNCTOR_SYMBOL - 118))
      | (1ULL << (MizarParser::STRUCTURE_SYMBOL - 118))
      | (1ULL << (MizarParser::LEFT_FUNCTOR_SYMBOL - 118))
      | (1ULL << (MizarParser::IDENTIFIER - 118))
      | (1ULL << (MizarParser::NUMERAL - 118)))) != 0)) {
      setState(808);
      adjectiveArguments();
    }
    setState(811);
    attributeSymbol();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalRegistrationContext ------------------------------------------------------------------

MizarParser::ConditionalRegistrationContext::ConditionalRegistrationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::AdjectiveClusterContext *> MizarParser::ConditionalRegistrationContext::adjectiveCluster() {
  return getRuleContexts<MizarParser::AdjectiveClusterContext>();
}

MizarParser::AdjectiveClusterContext* MizarParser::ConditionalRegistrationContext::adjectiveCluster(size_t i) {
  return getRuleContext<MizarParser::AdjectiveClusterContext>(i);
}

MizarParser::TypeExpressionContext* MizarParser::ConditionalRegistrationContext::typeExpression() {
  return getRuleContext<MizarParser::TypeExpressionContext>(0);
}

MizarParser::CorrectnessConditionsContext* MizarParser::ConditionalRegistrationContext::correctnessConditions() {
  return getRuleContext<MizarParser::CorrectnessConditionsContext>(0);
}


size_t MizarParser::ConditionalRegistrationContext::getRuleIndex() const {
  return MizarParser::RuleConditionalRegistration;
}

void MizarParser::ConditionalRegistrationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalRegistration(this);
}

void MizarParser::ConditionalRegistrationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalRegistration(this);
}

MizarParser::ConditionalRegistrationContext* MizarParser::conditionalRegistration() {
  ConditionalRegistrationContext *_localctx = _tracker.createInstance<ConditionalRegistrationContext>(_ctx, getState());
  enterRule(_localctx, 146, MizarParser::RuleConditionalRegistration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(813);
    match(MizarParser::T__59);
    setState(814);
    adjectiveCluster();
    setState(815);
    match(MizarParser::T__29);
    setState(816);
    adjectiveCluster();
    setState(817);
    match(MizarParser::T__15);
    setState(818);
    typeExpression();
    setState(819);
    match(MizarParser::T__3);
    setState(820);
    correctnessConditions();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctorialRegistrationContext ------------------------------------------------------------------

MizarParser::FunctorialRegistrationContext::FunctorialRegistrationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::TermExpressionContext* MizarParser::FunctorialRegistrationContext::termExpression() {
  return getRuleContext<MizarParser::TermExpressionContext>(0);
}

MizarParser::AdjectiveClusterContext* MizarParser::FunctorialRegistrationContext::adjectiveCluster() {
  return getRuleContext<MizarParser::AdjectiveClusterContext>(0);
}

MizarParser::CorrectnessConditionsContext* MizarParser::FunctorialRegistrationContext::correctnessConditions() {
  return getRuleContext<MizarParser::CorrectnessConditionsContext>(0);
}

MizarParser::TypeExpressionContext* MizarParser::FunctorialRegistrationContext::typeExpression() {
  return getRuleContext<MizarParser::TypeExpressionContext>(0);
}


size_t MizarParser::FunctorialRegistrationContext::getRuleIndex() const {
  return MizarParser::RuleFunctorialRegistration;
}

void MizarParser::FunctorialRegistrationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctorialRegistration(this);
}

void MizarParser::FunctorialRegistrationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctorialRegistration(this);
}

MizarParser::FunctorialRegistrationContext* MizarParser::functorialRegistration() {
  FunctorialRegistrationContext *_localctx = _tracker.createInstance<FunctorialRegistrationContext>(_ctx, getState());
  enterRule(_localctx, 148, MizarParser::RuleFunctorialRegistration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(822);
    match(MizarParser::T__59);
    setState(823);
    termExpression(0);
    setState(824);
    match(MizarParser::T__29);
    setState(825);
    adjectiveCluster();
    setState(828);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__15) {
      setState(826);
      match(MizarParser::T__15);
      setState(827);
      typeExpression();
    }
    setState(830);
    match(MizarParser::T__3);
    setState(831);
    correctnessConditions();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifyRegistrationContext ------------------------------------------------------------------

MizarParser::IdentifyRegistrationContext::IdentifyRegistrationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::FunctorPatternContext *> MizarParser::IdentifyRegistrationContext::functorPattern() {
  return getRuleContexts<MizarParser::FunctorPatternContext>();
}

MizarParser::FunctorPatternContext* MizarParser::IdentifyRegistrationContext::functorPattern(size_t i) {
  return getRuleContext<MizarParser::FunctorPatternContext>(i);
}

MizarParser::CorrectnessConditionsContext* MizarParser::IdentifyRegistrationContext::correctnessConditions() {
  return getRuleContext<MizarParser::CorrectnessConditionsContext>(0);
}

std::vector<MizarParser::LocusContext *> MizarParser::IdentifyRegistrationContext::locus() {
  return getRuleContexts<MizarParser::LocusContext>();
}

MizarParser::LocusContext* MizarParser::IdentifyRegistrationContext::locus(size_t i) {
  return getRuleContext<MizarParser::LocusContext>(i);
}


size_t MizarParser::IdentifyRegistrationContext::getRuleIndex() const {
  return MizarParser::RuleIdentifyRegistration;
}

void MizarParser::IdentifyRegistrationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifyRegistration(this);
}

void MizarParser::IdentifyRegistrationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifyRegistration(this);
}

MizarParser::IdentifyRegistrationContext* MizarParser::identifyRegistration() {
  IdentifyRegistrationContext *_localctx = _tracker.createInstance<IdentifyRegistrationContext>(_ctx, getState());
  enterRule(_localctx, 150, MizarParser::RuleIdentifyRegistration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(833);
    match(MizarParser::T__61);
    setState(834);
    functorPattern();
    setState(835);
    match(MizarParser::T__62);
    setState(836);
    functorPattern();
    setState(851);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__63) {
      setState(837);
      match(MizarParser::T__63);
      setState(838);
      locus();
      setState(839);
      match(MizarParser::T__57);
      setState(840);
      locus();
      setState(848);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MizarParser::T__2) {
        setState(841);
        match(MizarParser::T__2);
        setState(842);
        locus();
        setState(843);
        match(MizarParser::T__57);
        setState(844);
        locus();
        setState(850);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(853);
    match(MizarParser::T__3);
    setState(854);
    correctnessConditions();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyRegistrationContext ------------------------------------------------------------------

MizarParser::PropertyRegistrationContext::PropertyRegistrationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::TypeExpressionContext* MizarParser::PropertyRegistrationContext::typeExpression() {
  return getRuleContext<MizarParser::TypeExpressionContext>(0);
}

MizarParser::JustificationContext* MizarParser::PropertyRegistrationContext::justification() {
  return getRuleContext<MizarParser::JustificationContext>(0);
}


size_t MizarParser::PropertyRegistrationContext::getRuleIndex() const {
  return MizarParser::RulePropertyRegistration;
}

void MizarParser::PropertyRegistrationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyRegistration(this);
}

void MizarParser::PropertyRegistrationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyRegistration(this);
}

MizarParser::PropertyRegistrationContext* MizarParser::propertyRegistration() {
  PropertyRegistrationContext *_localctx = _tracker.createInstance<PropertyRegistrationContext>(_ctx, getState());
  enterRule(_localctx, 152, MizarParser::RulePropertyRegistration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(856);
    match(MizarParser::T__39);
    setState(857);
    match(MizarParser::T__33);
    setState(858);
    typeExpression();
    setState(859);
    justification();
    setState(860);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReductionRegistrationContext ------------------------------------------------------------------

MizarParser::ReductionRegistrationContext::ReductionRegistrationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::TermExpressionContext *> MizarParser::ReductionRegistrationContext::termExpression() {
  return getRuleContexts<MizarParser::TermExpressionContext>();
}

MizarParser::TermExpressionContext* MizarParser::ReductionRegistrationContext::termExpression(size_t i) {
  return getRuleContext<MizarParser::TermExpressionContext>(i);
}

MizarParser::CorrectnessConditionsContext* MizarParser::ReductionRegistrationContext::correctnessConditions() {
  return getRuleContext<MizarParser::CorrectnessConditionsContext>(0);
}


size_t MizarParser::ReductionRegistrationContext::getRuleIndex() const {
  return MizarParser::RuleReductionRegistration;
}

void MizarParser::ReductionRegistrationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReductionRegistration(this);
}

void MizarParser::ReductionRegistrationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReductionRegistration(this);
}

MizarParser::ReductionRegistrationContext* MizarParser::reductionRegistration() {
  ReductionRegistrationContext *_localctx = _tracker.createInstance<ReductionRegistrationContext>(_ctx, getState());
  enterRule(_localctx, 154, MizarParser::RuleReductionRegistration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(862);
    match(MizarParser::T__64);
    setState(863);
    termExpression(0);
    setState(864);
    match(MizarParser::T__65);
    setState(865);
    termExpression(0);
    setState(866);
    match(MizarParser::T__3);
    setState(867);
    correctnessConditions();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CorrectnessConditionsContext ------------------------------------------------------------------

MizarParser::CorrectnessConditionsContext::CorrectnessConditionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::CorrectnessConditionContext *> MizarParser::CorrectnessConditionsContext::correctnessCondition() {
  return getRuleContexts<MizarParser::CorrectnessConditionContext>();
}

MizarParser::CorrectnessConditionContext* MizarParser::CorrectnessConditionsContext::correctnessCondition(size_t i) {
  return getRuleContext<MizarParser::CorrectnessConditionContext>(i);
}

MizarParser::JustificationContext* MizarParser::CorrectnessConditionsContext::justification() {
  return getRuleContext<MizarParser::JustificationContext>(0);
}


size_t MizarParser::CorrectnessConditionsContext::getRuleIndex() const {
  return MizarParser::RuleCorrectnessConditions;
}

void MizarParser::CorrectnessConditionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCorrectnessConditions(this);
}

void MizarParser::CorrectnessConditionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCorrectnessConditions(this);
}

MizarParser::CorrectnessConditionsContext* MizarParser::correctnessConditions() {
  CorrectnessConditionsContext *_localctx = _tracker.createInstance<CorrectnessConditionsContext>(_ctx, getState());
  enterRule(_localctx, 156, MizarParser::RuleCorrectnessConditions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(872);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (MizarParser::T__67 - 68))
      | (1ULL << (MizarParser::T__68 - 68))
      | (1ULL << (MizarParser::T__69 - 68))
      | (1ULL << (MizarParser::T__70 - 68))
      | (1ULL << (MizarParser::T__71 - 68))
      | (1ULL << (MizarParser::T__72 - 68)))) != 0)) {
      setState(869);
      correctnessCondition();
      setState(874);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(879);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__66) {
      setState(875);
      match(MizarParser::T__66);
      setState(876);
      justification();
      setState(877);
      match(MizarParser::T__3);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CorrectnessConditionContext ------------------------------------------------------------------

MizarParser::CorrectnessConditionContext::CorrectnessConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::JustificationContext* MizarParser::CorrectnessConditionContext::justification() {
  return getRuleContext<MizarParser::JustificationContext>(0);
}


size_t MizarParser::CorrectnessConditionContext::getRuleIndex() const {
  return MizarParser::RuleCorrectnessCondition;
}

void MizarParser::CorrectnessConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCorrectnessCondition(this);
}

void MizarParser::CorrectnessConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCorrectnessCondition(this);
}

MizarParser::CorrectnessConditionContext* MizarParser::correctnessCondition() {
  CorrectnessConditionContext *_localctx = _tracker.createInstance<CorrectnessConditionContext>(_ctx, getState());
  enterRule(_localctx, 158, MizarParser::RuleCorrectnessCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(881);
    _la = _input->LA(1);
    if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (MizarParser::T__67 - 68))
      | (1ULL << (MizarParser::T__68 - 68))
      | (1ULL << (MizarParser::T__69 - 68))
      | (1ULL << (MizarParser::T__70 - 68))
      | (1ULL << (MizarParser::T__71 - 68))
      | (1ULL << (MizarParser::T__72 - 68)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(882);
    justification();
    setState(883);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheoremContext ------------------------------------------------------------------

MizarParser::TheoremContext::TheoremContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::CompactStatementContext* MizarParser::TheoremContext::compactStatement() {
  return getRuleContext<MizarParser::CompactStatementContext>(0);
}


size_t MizarParser::TheoremContext::getRuleIndex() const {
  return MizarParser::RuleTheorem;
}

void MizarParser::TheoremContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheorem(this);
}

void MizarParser::TheoremContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheorem(this);
}

MizarParser::TheoremContext* MizarParser::theorem() {
  TheoremContext *_localctx = _tracker.createInstance<TheoremContext>(_ctx, getState());
  enterRule(_localctx, 160, MizarParser::RuleTheorem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(885);
    match(MizarParser::T__73);
    setState(886);
    compactStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemeItemContext ------------------------------------------------------------------

MizarParser::SchemeItemContext::SchemeItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::SchemeBlockContext* MizarParser::SchemeItemContext::schemeBlock() {
  return getRuleContext<MizarParser::SchemeBlockContext>(0);
}


size_t MizarParser::SchemeItemContext::getRuleIndex() const {
  return MizarParser::RuleSchemeItem;
}

void MizarParser::SchemeItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchemeItem(this);
}

void MizarParser::SchemeItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchemeItem(this);
}

MizarParser::SchemeItemContext* MizarParser::schemeItem() {
  SchemeItemContext *_localctx = _tracker.createInstance<SchemeItemContext>(_ctx, getState());
  enterRule(_localctx, 162, MizarParser::RuleSchemeItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(888);
    schemeBlock();
    setState(889);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemeBlockContext ------------------------------------------------------------------

MizarParser::SchemeBlockContext::SchemeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::SchemeIdentifierContext* MizarParser::SchemeBlockContext::schemeIdentifier() {
  return getRuleContext<MizarParser::SchemeIdentifierContext>(0);
}

MizarParser::SchemeParametersContext* MizarParser::SchemeBlockContext::schemeParameters() {
  return getRuleContext<MizarParser::SchemeParametersContext>(0);
}

MizarParser::SchemeConclusionContext* MizarParser::SchemeBlockContext::schemeConclusion() {
  return getRuleContext<MizarParser::SchemeConclusionContext>(0);
}

MizarParser::ReasoningContext* MizarParser::SchemeBlockContext::reasoning() {
  return getRuleContext<MizarParser::ReasoningContext>(0);
}

std::vector<MizarParser::SchemePremiseContext *> MizarParser::SchemeBlockContext::schemePremise() {
  return getRuleContexts<MizarParser::SchemePremiseContext>();
}

MizarParser::SchemePremiseContext* MizarParser::SchemeBlockContext::schemePremise(size_t i) {
  return getRuleContext<MizarParser::SchemePremiseContext>(i);
}


size_t MizarParser::SchemeBlockContext::getRuleIndex() const {
  return MizarParser::RuleSchemeBlock;
}

void MizarParser::SchemeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchemeBlock(this);
}

void MizarParser::SchemeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchemeBlock(this);
}

MizarParser::SchemeBlockContext* MizarParser::schemeBlock() {
  SchemeBlockContext *_localctx = _tracker.createInstance<SchemeBlockContext>(_ctx, getState());
  enterRule(_localctx, 164, MizarParser::RuleSchemeBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(891);
    match(MizarParser::T__74);
    setState(892);
    schemeIdentifier();
    setState(893);
    match(MizarParser::T__46);
    setState(894);
    schemeParameters();
    setState(895);
    match(MizarParser::T__48);
    setState(896);
    match(MizarParser::T__36);
    setState(897);
    schemeConclusion();
    setState(907);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__75) {
      setState(898);
      match(MizarParser::T__75);
      setState(899);
      schemePremise();
      setState(904);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MizarParser::T__76) {
        setState(900);
        match(MizarParser::T__76);
        setState(901);
        schemePremise();
        setState(906);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(909);
    _la = _input->LA(1);
    if (!(_la == MizarParser::T__3 || _la == MizarParser::T__77)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(910);
    reasoning();
    setState(911);
    match(MizarParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemeIdentifierContext ------------------------------------------------------------------

MizarParser::SchemeIdentifierContext::SchemeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::SchemeIdentifierContext::IDENTIFIER() {
  return getToken(MizarParser::IDENTIFIER, 0);
}


size_t MizarParser::SchemeIdentifierContext::getRuleIndex() const {
  return MizarParser::RuleSchemeIdentifier;
}

void MizarParser::SchemeIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchemeIdentifier(this);
}

void MizarParser::SchemeIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchemeIdentifier(this);
}

MizarParser::SchemeIdentifierContext* MizarParser::schemeIdentifier() {
  SchemeIdentifierContext *_localctx = _tracker.createInstance<SchemeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 166, MizarParser::RuleSchemeIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(913);
    match(MizarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemeParametersContext ------------------------------------------------------------------

MizarParser::SchemeParametersContext::SchemeParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::SchemeSegmentContext *> MizarParser::SchemeParametersContext::schemeSegment() {
  return getRuleContexts<MizarParser::SchemeSegmentContext>();
}

MizarParser::SchemeSegmentContext* MizarParser::SchemeParametersContext::schemeSegment(size_t i) {
  return getRuleContext<MizarParser::SchemeSegmentContext>(i);
}


size_t MizarParser::SchemeParametersContext::getRuleIndex() const {
  return MizarParser::RuleSchemeParameters;
}

void MizarParser::SchemeParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchemeParameters(this);
}

void MizarParser::SchemeParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchemeParameters(this);
}

MizarParser::SchemeParametersContext* MizarParser::schemeParameters() {
  SchemeParametersContext *_localctx = _tracker.createInstance<SchemeParametersContext>(_ctx, getState());
  enterRule(_localctx, 168, MizarParser::RuleSchemeParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(915);
    schemeSegment();
    setState(920);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(916);
      match(MizarParser::T__2);
      setState(917);
      schemeSegment();
      setState(922);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemeConclusionContext ------------------------------------------------------------------

MizarParser::SchemeConclusionContext::SchemeConclusionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::SentenceContext* MizarParser::SchemeConclusionContext::sentence() {
  return getRuleContext<MizarParser::SentenceContext>(0);
}


size_t MizarParser::SchemeConclusionContext::getRuleIndex() const {
  return MizarParser::RuleSchemeConclusion;
}

void MizarParser::SchemeConclusionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchemeConclusion(this);
}

void MizarParser::SchemeConclusionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchemeConclusion(this);
}

MizarParser::SchemeConclusionContext* MizarParser::schemeConclusion() {
  SchemeConclusionContext *_localctx = _tracker.createInstance<SchemeConclusionContext>(_ctx, getState());
  enterRule(_localctx, 170, MizarParser::RuleSchemeConclusion);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(923);
    sentence();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemePremiseContext ------------------------------------------------------------------

MizarParser::SchemePremiseContext::SchemePremiseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::PropositionContext* MizarParser::SchemePremiseContext::proposition() {
  return getRuleContext<MizarParser::PropositionContext>(0);
}


size_t MizarParser::SchemePremiseContext::getRuleIndex() const {
  return MizarParser::RuleSchemePremise;
}

void MizarParser::SchemePremiseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchemePremise(this);
}

void MizarParser::SchemePremiseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchemePremise(this);
}

MizarParser::SchemePremiseContext* MizarParser::schemePremise() {
  SchemePremiseContext *_localctx = _tracker.createInstance<SchemePremiseContext>(_ctx, getState());
  enterRule(_localctx, 172, MizarParser::RuleSchemePremise);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(925);
    proposition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemeSegmentContext ------------------------------------------------------------------

MizarParser::SchemeSegmentContext::SchemeSegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::PredicateSegmentContext* MizarParser::SchemeSegmentContext::predicateSegment() {
  return getRuleContext<MizarParser::PredicateSegmentContext>(0);
}

MizarParser::FunctorSegmentContext* MizarParser::SchemeSegmentContext::functorSegment() {
  return getRuleContext<MizarParser::FunctorSegmentContext>(0);
}


size_t MizarParser::SchemeSegmentContext::getRuleIndex() const {
  return MizarParser::RuleSchemeSegment;
}

void MizarParser::SchemeSegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchemeSegment(this);
}

void MizarParser::SchemeSegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchemeSegment(this);
}

MizarParser::SchemeSegmentContext* MizarParser::schemeSegment() {
  SchemeSegmentContext *_localctx = _tracker.createInstance<SchemeSegmentContext>(_ctx, getState());
  enterRule(_localctx, 174, MizarParser::RuleSchemeSegment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(929);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(927);
      predicateSegment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(928);
      functorSegment();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicateSegmentContext ------------------------------------------------------------------

MizarParser::PredicateSegmentContext::PredicateSegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::PredicateIdentifierContext *> MizarParser::PredicateSegmentContext::predicateIdentifier() {
  return getRuleContexts<MizarParser::PredicateIdentifierContext>();
}

MizarParser::PredicateIdentifierContext* MizarParser::PredicateSegmentContext::predicateIdentifier(size_t i) {
  return getRuleContext<MizarParser::PredicateIdentifierContext>(i);
}

MizarParser::TypeExpressionListContext* MizarParser::PredicateSegmentContext::typeExpressionList() {
  return getRuleContext<MizarParser::TypeExpressionListContext>(0);
}


size_t MizarParser::PredicateSegmentContext::getRuleIndex() const {
  return MizarParser::RulePredicateSegment;
}

void MizarParser::PredicateSegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicateSegment(this);
}

void MizarParser::PredicateSegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicateSegment(this);
}

MizarParser::PredicateSegmentContext* MizarParser::predicateSegment() {
  PredicateSegmentContext *_localctx = _tracker.createInstance<PredicateSegmentContext>(_ctx, getState());
  enterRule(_localctx, 176, MizarParser::RulePredicateSegment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(931);
    predicateIdentifier();
    setState(936);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(932);
      match(MizarParser::T__2);
      setState(933);
      predicateIdentifier();
      setState(938);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(939);
    match(MizarParser::T__47);
    setState(941);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MizarParser::T__24)
      | (1ULL << MizarParser::T__34)
      | (1ULL << MizarParser::T__46)
      | (1ULL << MizarParser::T__47)
      | (1ULL << MizarParser::T__60))) != 0) || ((((_la - 118) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 118)) & ((1ULL << (MizarParser::T__117 - 118))
      | (1ULL << (MizarParser::T__119 - 118))
      | (1ULL << (MizarParser::T__122 - 118))
      | (1ULL << (MizarParser::T__123 - 118))
      | (1ULL << (MizarParser::T__124 - 118))
      | (1ULL << (MizarParser::T__125 - 118))
      | (1ULL << (MizarParser::T__126 - 118))
      | (1ULL << (MizarParser::T__127 - 118))
      | (1ULL << (MizarParser::T__128 - 118))
      | (1ULL << (MizarParser::T__129 - 118))
      | (1ULL << (MizarParser::T__130 - 118))
      | (1ULL << (MizarParser::T__131 - 118))
      | (1ULL << (MizarParser::FUNCTOR_SYMBOL - 118))
      | (1ULL << (MizarParser::MODE_SYMBOL - 118))
      | (1ULL << (MizarParser::STRUCTURE_SYMBOL - 118))
      | (1ULL << (MizarParser::ATTRIBUTE_SYMBOL - 118))
      | (1ULL << (MizarParser::LEFT_FUNCTOR_SYMBOL - 118))
      | (1ULL << (MizarParser::IDENTIFIER - 118))
      | (1ULL << (MizarParser::NUMERAL - 118)))) != 0)) {
      setState(940);
      typeExpressionList();
    }
    setState(943);
    match(MizarParser::T__49);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicateIdentifierContext ------------------------------------------------------------------

MizarParser::PredicateIdentifierContext::PredicateIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::PredicateIdentifierContext::IDENTIFIER() {
  return getToken(MizarParser::IDENTIFIER, 0);
}


size_t MizarParser::PredicateIdentifierContext::getRuleIndex() const {
  return MizarParser::RulePredicateIdentifier;
}

void MizarParser::PredicateIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicateIdentifier(this);
}

void MizarParser::PredicateIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicateIdentifier(this);
}

MizarParser::PredicateIdentifierContext* MizarParser::predicateIdentifier() {
  PredicateIdentifierContext *_localctx = _tracker.createInstance<PredicateIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 178, MizarParser::RulePredicateIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(945);
    match(MizarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctorSegmentContext ------------------------------------------------------------------

MizarParser::FunctorSegmentContext::FunctorSegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::FunctorIdentifierContext *> MizarParser::FunctorSegmentContext::functorIdentifier() {
  return getRuleContexts<MizarParser::FunctorIdentifierContext>();
}

MizarParser::FunctorIdentifierContext* MizarParser::FunctorSegmentContext::functorIdentifier(size_t i) {
  return getRuleContext<MizarParser::FunctorIdentifierContext>(i);
}

MizarParser::SpecificationContext* MizarParser::FunctorSegmentContext::specification() {
  return getRuleContext<MizarParser::SpecificationContext>(0);
}

MizarParser::TypeExpressionListContext* MizarParser::FunctorSegmentContext::typeExpressionList() {
  return getRuleContext<MizarParser::TypeExpressionListContext>(0);
}


size_t MizarParser::FunctorSegmentContext::getRuleIndex() const {
  return MizarParser::RuleFunctorSegment;
}

void MizarParser::FunctorSegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctorSegment(this);
}

void MizarParser::FunctorSegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctorSegment(this);
}

MizarParser::FunctorSegmentContext* MizarParser::functorSegment() {
  FunctorSegmentContext *_localctx = _tracker.createInstance<FunctorSegmentContext>(_ctx, getState());
  enterRule(_localctx, 180, MizarParser::RuleFunctorSegment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(947);
    functorIdentifier();
    setState(952);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(948);
      match(MizarParser::T__2);
      setState(949);
      functorIdentifier();
      setState(954);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(955);
    match(MizarParser::T__24);
    setState(957);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MizarParser::T__24)
      | (1ULL << MizarParser::T__34)
      | (1ULL << MizarParser::T__46)
      | (1ULL << MizarParser::T__47)
      | (1ULL << MizarParser::T__60))) != 0) || ((((_la - 118) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 118)) & ((1ULL << (MizarParser::T__117 - 118))
      | (1ULL << (MizarParser::T__119 - 118))
      | (1ULL << (MizarParser::T__122 - 118))
      | (1ULL << (MizarParser::T__123 - 118))
      | (1ULL << (MizarParser::T__124 - 118))
      | (1ULL << (MizarParser::T__125 - 118))
      | (1ULL << (MizarParser::T__126 - 118))
      | (1ULL << (MizarParser::T__127 - 118))
      | (1ULL << (MizarParser::T__128 - 118))
      | (1ULL << (MizarParser::T__129 - 118))
      | (1ULL << (MizarParser::T__130 - 118))
      | (1ULL << (MizarParser::T__131 - 118))
      | (1ULL << (MizarParser::FUNCTOR_SYMBOL - 118))
      | (1ULL << (MizarParser::MODE_SYMBOL - 118))
      | (1ULL << (MizarParser::STRUCTURE_SYMBOL - 118))
      | (1ULL << (MizarParser::ATTRIBUTE_SYMBOL - 118))
      | (1ULL << (MizarParser::LEFT_FUNCTOR_SYMBOL - 118))
      | (1ULL << (MizarParser::IDENTIFIER - 118))
      | (1ULL << (MizarParser::NUMERAL - 118)))) != 0)) {
      setState(956);
      typeExpressionList();
    }
    setState(959);
    match(MizarParser::T__25);
    setState(960);
    specification();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctorIdentifierContext ------------------------------------------------------------------

MizarParser::FunctorIdentifierContext::FunctorIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::FunctorIdentifierContext::IDENTIFIER() {
  return getToken(MizarParser::IDENTIFIER, 0);
}


size_t MizarParser::FunctorIdentifierContext::getRuleIndex() const {
  return MizarParser::RuleFunctorIdentifier;
}

void MizarParser::FunctorIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctorIdentifier(this);
}

void MizarParser::FunctorIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctorIdentifier(this);
}

MizarParser::FunctorIdentifierContext* MizarParser::functorIdentifier() {
  FunctorIdentifierContext *_localctx = _tracker.createInstance<FunctorIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 182, MizarParser::RuleFunctorIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(962);
    match(MizarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AuxiliaryItemContext ------------------------------------------------------------------

MizarParser::AuxiliaryItemContext::AuxiliaryItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::StatementContext* MizarParser::AuxiliaryItemContext::statement() {
  return getRuleContext<MizarParser::StatementContext>(0);
}

MizarParser::PrivateDefinitionContext* MizarParser::AuxiliaryItemContext::privateDefinition() {
  return getRuleContext<MizarParser::PrivateDefinitionContext>(0);
}


size_t MizarParser::AuxiliaryItemContext::getRuleIndex() const {
  return MizarParser::RuleAuxiliaryItem;
}

void MizarParser::AuxiliaryItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAuxiliaryItem(this);
}

void MizarParser::AuxiliaryItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAuxiliaryItem(this);
}

MizarParser::AuxiliaryItemContext* MizarParser::auxiliaryItem() {
  AuxiliaryItemContext *_localctx = _tracker.createInstance<AuxiliaryItemContext>(_ctx, getState());
  enterRule(_localctx, 184, MizarParser::RuleAuxiliaryItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(966);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__15:
      case MizarParser::T__24:
      case MizarParser::T__46:
      case MizarParser::T__47:
      case MizarParser::T__57:
      case MizarParser::T__80:
      case MizarParser::T__91:
      case MizarParser::T__92:
      case MizarParser::T__95:
      case MizarParser::T__106:
      case MizarParser::T__107:
      case MizarParser::T__108:
      case MizarParser::T__109:
      case MizarParser::T__110:
      case MizarParser::T__113:
      case MizarParser::T__117:
      case MizarParser::T__119:
      case MizarParser::T__122:
      case MizarParser::T__123:
      case MizarParser::T__124:
      case MizarParser::T__125:
      case MizarParser::T__126:
      case MizarParser::T__127:
      case MizarParser::T__128:
      case MizarParser::T__129:
      case MizarParser::T__130:
      case MizarParser::T__131:
      case MizarParser::PREDICATE_SYMBOL:
      case MizarParser::FUNCTOR_SYMBOL:
      case MizarParser::STRUCTURE_SYMBOL:
      case MizarParser::LEFT_FUNCTOR_SYMBOL:
      case MizarParser::IDENTIFIER:
      case MizarParser::NUMERAL: {
        enterOuterAlt(_localctx, 1);
        setState(964);
        statement();
        break;
      }

      case MizarParser::T__34:
      case MizarParser::T__78:
      case MizarParser::T__79: {
        enterOuterAlt(_localctx, 2);
        setState(965);
        privateDefinition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrivateDefinitionContext ------------------------------------------------------------------

MizarParser::PrivateDefinitionContext::PrivateDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ConstantDefinitionContext* MizarParser::PrivateDefinitionContext::constantDefinition() {
  return getRuleContext<MizarParser::ConstantDefinitionContext>(0);
}

MizarParser::PrivateFunctorDefinitionContext* MizarParser::PrivateDefinitionContext::privateFunctorDefinition() {
  return getRuleContext<MizarParser::PrivateFunctorDefinitionContext>(0);
}

MizarParser::PrivatePredicateDefinitionContext* MizarParser::PrivateDefinitionContext::privatePredicateDefinition() {
  return getRuleContext<MizarParser::PrivatePredicateDefinitionContext>(0);
}


size_t MizarParser::PrivateDefinitionContext::getRuleIndex() const {
  return MizarParser::RulePrivateDefinition;
}

void MizarParser::PrivateDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrivateDefinition(this);
}

void MizarParser::PrivateDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrivateDefinition(this);
}

MizarParser::PrivateDefinitionContext* MizarParser::privateDefinition() {
  PrivateDefinitionContext *_localctx = _tracker.createInstance<PrivateDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 186, MizarParser::RulePrivateDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(971);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__34: {
        enterOuterAlt(_localctx, 1);
        setState(968);
        constantDefinition();
        break;
      }

      case MizarParser::T__78: {
        enterOuterAlt(_localctx, 2);
        setState(969);
        privateFunctorDefinition();
        break;
      }

      case MizarParser::T__79: {
        enterOuterAlt(_localctx, 3);
        setState(970);
        privatePredicateDefinition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDefinitionContext ------------------------------------------------------------------

MizarParser::ConstantDefinitionContext::ConstantDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::EquatingListContext* MizarParser::ConstantDefinitionContext::equatingList() {
  return getRuleContext<MizarParser::EquatingListContext>(0);
}


size_t MizarParser::ConstantDefinitionContext::getRuleIndex() const {
  return MizarParser::RuleConstantDefinition;
}

void MizarParser::ConstantDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantDefinition(this);
}

void MizarParser::ConstantDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantDefinition(this);
}

MizarParser::ConstantDefinitionContext* MizarParser::constantDefinition() {
  ConstantDefinitionContext *_localctx = _tracker.createInstance<ConstantDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 188, MizarParser::RuleConstantDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(973);
    match(MizarParser::T__34);
    setState(974);
    equatingList();
    setState(975);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EquatingListContext ------------------------------------------------------------------

MizarParser::EquatingListContext::EquatingListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::EquatingContext *> MizarParser::EquatingListContext::equating() {
  return getRuleContexts<MizarParser::EquatingContext>();
}

MizarParser::EquatingContext* MizarParser::EquatingListContext::equating(size_t i) {
  return getRuleContext<MizarParser::EquatingContext>(i);
}


size_t MizarParser::EquatingListContext::getRuleIndex() const {
  return MizarParser::RuleEquatingList;
}

void MizarParser::EquatingListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquatingList(this);
}

void MizarParser::EquatingListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquatingList(this);
}

MizarParser::EquatingListContext* MizarParser::equatingList() {
  EquatingListContext *_localctx = _tracker.createInstance<EquatingListContext>(_ctx, getState());
  enterRule(_localctx, 190, MizarParser::RuleEquatingList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(977);
    equating();
    setState(982);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(978);
      match(MizarParser::T__2);
      setState(979);
      equating();
      setState(984);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EquatingContext ------------------------------------------------------------------

MizarParser::EquatingContext::EquatingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::VariableIdentifierContext* MizarParser::EquatingContext::variableIdentifier() {
  return getRuleContext<MizarParser::VariableIdentifierContext>(0);
}

MizarParser::TermExpressionContext* MizarParser::EquatingContext::termExpression() {
  return getRuleContext<MizarParser::TermExpressionContext>(0);
}


size_t MizarParser::EquatingContext::getRuleIndex() const {
  return MizarParser::RuleEquating;
}

void MizarParser::EquatingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquating(this);
}

void MizarParser::EquatingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquating(this);
}

MizarParser::EquatingContext* MizarParser::equating() {
  EquatingContext *_localctx = _tracker.createInstance<EquatingContext>(_ctx, getState());
  enterRule(_localctx, 192, MizarParser::RuleEquating);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(985);
    variableIdentifier();
    setState(986);
    match(MizarParser::T__57);
    setState(987);
    termExpression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrivateFunctorDefinitionContext ------------------------------------------------------------------

MizarParser::PrivateFunctorDefinitionContext::PrivateFunctorDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::PrivateFunctorPatternContext* MizarParser::PrivateFunctorDefinitionContext::privateFunctorPattern() {
  return getRuleContext<MizarParser::PrivateFunctorPatternContext>(0);
}

MizarParser::TermExpressionContext* MizarParser::PrivateFunctorDefinitionContext::termExpression() {
  return getRuleContext<MizarParser::TermExpressionContext>(0);
}


size_t MizarParser::PrivateFunctorDefinitionContext::getRuleIndex() const {
  return MizarParser::RulePrivateFunctorDefinition;
}

void MizarParser::PrivateFunctorDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrivateFunctorDefinition(this);
}

void MizarParser::PrivateFunctorDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrivateFunctorDefinition(this);
}

MizarParser::PrivateFunctorDefinitionContext* MizarParser::privateFunctorDefinition() {
  PrivateFunctorDefinitionContext *_localctx = _tracker.createInstance<PrivateFunctorDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 194, MizarParser::RulePrivateFunctorDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(989);
    match(MizarParser::T__78);
    setState(990);
    privateFunctorPattern();
    setState(991);
    match(MizarParser::T__57);
    setState(992);
    termExpression(0);
    setState(993);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrivatePredicateDefinitionContext ------------------------------------------------------------------

MizarParser::PrivatePredicateDefinitionContext::PrivatePredicateDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::PrivatePredicatePatternContext* MizarParser::PrivatePredicateDefinitionContext::privatePredicatePattern() {
  return getRuleContext<MizarParser::PrivatePredicatePatternContext>(0);
}

MizarParser::SentenceContext* MizarParser::PrivatePredicateDefinitionContext::sentence() {
  return getRuleContext<MizarParser::SentenceContext>(0);
}


size_t MizarParser::PrivatePredicateDefinitionContext::getRuleIndex() const {
  return MizarParser::RulePrivatePredicateDefinition;
}

void MizarParser::PrivatePredicateDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrivatePredicateDefinition(this);
}

void MizarParser::PrivatePredicateDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrivatePredicateDefinition(this);
}

MizarParser::PrivatePredicateDefinitionContext* MizarParser::privatePredicateDefinition() {
  PrivatePredicateDefinitionContext *_localctx = _tracker.createInstance<PrivatePredicateDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 196, MizarParser::RulePrivatePredicateDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(995);
    match(MizarParser::T__79);
    setState(996);
    privatePredicatePattern();
    setState(997);
    match(MizarParser::T__31);
    setState(998);
    sentence();
    setState(999);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrivateFunctorPatternContext ------------------------------------------------------------------

MizarParser::PrivateFunctorPatternContext::PrivateFunctorPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::FunctorIdentifierContext* MizarParser::PrivateFunctorPatternContext::functorIdentifier() {
  return getRuleContext<MizarParser::FunctorIdentifierContext>(0);
}

MizarParser::TypeExpressionListContext* MizarParser::PrivateFunctorPatternContext::typeExpressionList() {
  return getRuleContext<MizarParser::TypeExpressionListContext>(0);
}


size_t MizarParser::PrivateFunctorPatternContext::getRuleIndex() const {
  return MizarParser::RulePrivateFunctorPattern;
}

void MizarParser::PrivateFunctorPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrivateFunctorPattern(this);
}

void MizarParser::PrivateFunctorPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrivateFunctorPattern(this);
}

MizarParser::PrivateFunctorPatternContext* MizarParser::privateFunctorPattern() {
  PrivateFunctorPatternContext *_localctx = _tracker.createInstance<PrivateFunctorPatternContext>(_ctx, getState());
  enterRule(_localctx, 198, MizarParser::RulePrivateFunctorPattern);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1001);
    functorIdentifier();
    setState(1002);
    match(MizarParser::T__24);
    setState(1004);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MizarParser::T__24)
      | (1ULL << MizarParser::T__34)
      | (1ULL << MizarParser::T__46)
      | (1ULL << MizarParser::T__47)
      | (1ULL << MizarParser::T__60))) != 0) || ((((_la - 118) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 118)) & ((1ULL << (MizarParser::T__117 - 118))
      | (1ULL << (MizarParser::T__119 - 118))
      | (1ULL << (MizarParser::T__122 - 118))
      | (1ULL << (MizarParser::T__123 - 118))
      | (1ULL << (MizarParser::T__124 - 118))
      | (1ULL << (MizarParser::T__125 - 118))
      | (1ULL << (MizarParser::T__126 - 118))
      | (1ULL << (MizarParser::T__127 - 118))
      | (1ULL << (MizarParser::T__128 - 118))
      | (1ULL << (MizarParser::T__129 - 118))
      | (1ULL << (MizarParser::T__130 - 118))
      | (1ULL << (MizarParser::T__131 - 118))
      | (1ULL << (MizarParser::FUNCTOR_SYMBOL - 118))
      | (1ULL << (MizarParser::MODE_SYMBOL - 118))
      | (1ULL << (MizarParser::STRUCTURE_SYMBOL - 118))
      | (1ULL << (MizarParser::ATTRIBUTE_SYMBOL - 118))
      | (1ULL << (MizarParser::LEFT_FUNCTOR_SYMBOL - 118))
      | (1ULL << (MizarParser::IDENTIFIER - 118))
      | (1ULL << (MizarParser::NUMERAL - 118)))) != 0)) {
      setState(1003);
      typeExpressionList();
    }
    setState(1006);
    match(MizarParser::T__25);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrivatePredicatePatternContext ------------------------------------------------------------------

MizarParser::PrivatePredicatePatternContext::PrivatePredicatePatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::PredicateIdentifierContext* MizarParser::PrivatePredicatePatternContext::predicateIdentifier() {
  return getRuleContext<MizarParser::PredicateIdentifierContext>(0);
}

MizarParser::TypeExpressionListContext* MizarParser::PrivatePredicatePatternContext::typeExpressionList() {
  return getRuleContext<MizarParser::TypeExpressionListContext>(0);
}


size_t MizarParser::PrivatePredicatePatternContext::getRuleIndex() const {
  return MizarParser::RulePrivatePredicatePattern;
}

void MizarParser::PrivatePredicatePatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrivatePredicatePattern(this);
}

void MizarParser::PrivatePredicatePatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrivatePredicatePattern(this);
}

MizarParser::PrivatePredicatePatternContext* MizarParser::privatePredicatePattern() {
  PrivatePredicatePatternContext *_localctx = _tracker.createInstance<PrivatePredicatePatternContext>(_ctx, getState());
  enterRule(_localctx, 200, MizarParser::RulePrivatePredicatePattern);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1008);
    predicateIdentifier();
    setState(1009);
    match(MizarParser::T__47);
    setState(1011);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MizarParser::T__24)
      | (1ULL << MizarParser::T__34)
      | (1ULL << MizarParser::T__46)
      | (1ULL << MizarParser::T__47)
      | (1ULL << MizarParser::T__60))) != 0) || ((((_la - 118) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 118)) & ((1ULL << (MizarParser::T__117 - 118))
      | (1ULL << (MizarParser::T__119 - 118))
      | (1ULL << (MizarParser::T__122 - 118))
      | (1ULL << (MizarParser::T__123 - 118))
      | (1ULL << (MizarParser::T__124 - 118))
      | (1ULL << (MizarParser::T__125 - 118))
      | (1ULL << (MizarParser::T__126 - 118))
      | (1ULL << (MizarParser::T__127 - 118))
      | (1ULL << (MizarParser::T__128 - 118))
      | (1ULL << (MizarParser::T__129 - 118))
      | (1ULL << (MizarParser::T__130 - 118))
      | (1ULL << (MizarParser::T__131 - 118))
      | (1ULL << (MizarParser::FUNCTOR_SYMBOL - 118))
      | (1ULL << (MizarParser::MODE_SYMBOL - 118))
      | (1ULL << (MizarParser::STRUCTURE_SYMBOL - 118))
      | (1ULL << (MizarParser::ATTRIBUTE_SYMBOL - 118))
      | (1ULL << (MizarParser::LEFT_FUNCTOR_SYMBOL - 118))
      | (1ULL << (MizarParser::IDENTIFIER - 118))
      | (1ULL << (MizarParser::NUMERAL - 118)))) != 0)) {
      setState(1010);
      typeExpressionList();
    }
    setState(1013);
    match(MizarParser::T__49);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReasoningContext ------------------------------------------------------------------

MizarParser::ReasoningContext::ReasoningContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::ReasoningItemContext *> MizarParser::ReasoningContext::reasoningItem() {
  return getRuleContexts<MizarParser::ReasoningItemContext>();
}

MizarParser::ReasoningItemContext* MizarParser::ReasoningContext::reasoningItem(size_t i) {
  return getRuleContext<MizarParser::ReasoningItemContext>(i);
}

MizarParser::SimpleJustificationContext* MizarParser::ReasoningContext::simpleJustification() {
  return getRuleContext<MizarParser::SimpleJustificationContext>(0);
}

MizarParser::CaseListContext* MizarParser::ReasoningContext::caseList() {
  return getRuleContext<MizarParser::CaseListContext>(0);
}

MizarParser::SupposeListContext* MizarParser::ReasoningContext::supposeList() {
  return getRuleContext<MizarParser::SupposeListContext>(0);
}


size_t MizarParser::ReasoningContext::getRuleIndex() const {
  return MizarParser::RuleReasoning;
}

void MizarParser::ReasoningContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReasoning(this);
}

void MizarParser::ReasoningContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReasoning(this);
}

MizarParser::ReasoningContext* MizarParser::reasoning() {
  ReasoningContext *_localctx = _tracker.createInstance<ReasoningContext>(_ctx, getState());
  enterRule(_localctx, 202, MizarParser::RuleReasoning);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1018);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1015);
        reasoningItem(); 
      }
      setState(1020);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    }
    setState(1032);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__80

    || _la == MizarParser::T__81) {
      setState(1022);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MizarParser::T__80) {
        setState(1021);
        match(MizarParser::T__80);
      }
      setState(1024);
      match(MizarParser::T__81);
      setState(1025);
      match(MizarParser::T__82);
      setState(1026);
      simpleJustification();
      setState(1027);
      match(MizarParser::T__3);
      setState(1030);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MizarParser::T__83: {
          setState(1028);
          caseList();
          break;
        }

        case MizarParser::T__84: {
          setState(1029);
          supposeList();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseListContext ------------------------------------------------------------------

MizarParser::CaseListContext::CaseListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::CaseItemContext *> MizarParser::CaseListContext::caseItem() {
  return getRuleContexts<MizarParser::CaseItemContext>();
}

MizarParser::CaseItemContext* MizarParser::CaseListContext::caseItem(size_t i) {
  return getRuleContext<MizarParser::CaseItemContext>(i);
}


size_t MizarParser::CaseListContext::getRuleIndex() const {
  return MizarParser::RuleCaseList;
}

void MizarParser::CaseListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseList(this);
}

void MizarParser::CaseListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseList(this);
}

MizarParser::CaseListContext* MizarParser::caseList() {
  CaseListContext *_localctx = _tracker.createInstance<CaseListContext>(_ctx, getState());
  enterRule(_localctx, 204, MizarParser::RuleCaseList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1035); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1034);
      caseItem();
      setState(1037); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MizarParser::T__83);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseItemContext ------------------------------------------------------------------

MizarParser::CaseItemContext::CaseItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ReasoningContext* MizarParser::CaseItemContext::reasoning() {
  return getRuleContext<MizarParser::ReasoningContext>(0);
}

MizarParser::PropositionContext* MizarParser::CaseItemContext::proposition() {
  return getRuleContext<MizarParser::PropositionContext>(0);
}

MizarParser::ConditionsContext* MizarParser::CaseItemContext::conditions() {
  return getRuleContext<MizarParser::ConditionsContext>(0);
}


size_t MizarParser::CaseItemContext::getRuleIndex() const {
  return MizarParser::RuleCaseItem;
}

void MizarParser::CaseItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseItem(this);
}

void MizarParser::CaseItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseItem(this);
}

MizarParser::CaseItemContext* MizarParser::caseItem() {
  CaseItemContext *_localctx = _tracker.createInstance<CaseItemContext>(_ctx, getState());
  enterRule(_localctx, 206, MizarParser::RuleCaseItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1039);
    match(MizarParser::T__83);
    setState(1042);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__15:
      case MizarParser::T__24:
      case MizarParser::T__46:
      case MizarParser::T__47:
      case MizarParser::T__57:
      case MizarParser::T__106:
      case MizarParser::T__107:
      case MizarParser::T__108:
      case MizarParser::T__109:
      case MizarParser::T__110:
      case MizarParser::T__113:
      case MizarParser::T__117:
      case MizarParser::T__119:
      case MizarParser::T__122:
      case MizarParser::T__123:
      case MizarParser::T__124:
      case MizarParser::T__125:
      case MizarParser::T__126:
      case MizarParser::T__127:
      case MizarParser::T__128:
      case MizarParser::T__129:
      case MizarParser::T__130:
      case MizarParser::T__131:
      case MizarParser::PREDICATE_SYMBOL:
      case MizarParser::FUNCTOR_SYMBOL:
      case MizarParser::STRUCTURE_SYMBOL:
      case MizarParser::LEFT_FUNCTOR_SYMBOL:
      case MizarParser::IDENTIFIER:
      case MizarParser::NUMERAL: {
        setState(1040);
        proposition();
        break;
      }

      case MizarParser::T__100: {
        setState(1041);
        conditions();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1044);
    match(MizarParser::T__3);
    setState(1045);
    reasoning();
    setState(1046);
    match(MizarParser::T__17);
    setState(1047);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SupposeListContext ------------------------------------------------------------------

MizarParser::SupposeListContext::SupposeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::SupposeContext *> MizarParser::SupposeListContext::suppose() {
  return getRuleContexts<MizarParser::SupposeContext>();
}

MizarParser::SupposeContext* MizarParser::SupposeListContext::suppose(size_t i) {
  return getRuleContext<MizarParser::SupposeContext>(i);
}


size_t MizarParser::SupposeListContext::getRuleIndex() const {
  return MizarParser::RuleSupposeList;
}

void MizarParser::SupposeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSupposeList(this);
}

void MizarParser::SupposeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSupposeList(this);
}

MizarParser::SupposeListContext* MizarParser::supposeList() {
  SupposeListContext *_localctx = _tracker.createInstance<SupposeListContext>(_ctx, getState());
  enterRule(_localctx, 208, MizarParser::RuleSupposeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1050); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1049);
      suppose();
      setState(1052); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MizarParser::T__84);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SupposeContext ------------------------------------------------------------------

MizarParser::SupposeContext::SupposeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ReasoningContext* MizarParser::SupposeContext::reasoning() {
  return getRuleContext<MizarParser::ReasoningContext>(0);
}

MizarParser::PropositionContext* MizarParser::SupposeContext::proposition() {
  return getRuleContext<MizarParser::PropositionContext>(0);
}

MizarParser::ConditionsContext* MizarParser::SupposeContext::conditions() {
  return getRuleContext<MizarParser::ConditionsContext>(0);
}


size_t MizarParser::SupposeContext::getRuleIndex() const {
  return MizarParser::RuleSuppose;
}

void MizarParser::SupposeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuppose(this);
}

void MizarParser::SupposeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuppose(this);
}

MizarParser::SupposeContext* MizarParser::suppose() {
  SupposeContext *_localctx = _tracker.createInstance<SupposeContext>(_ctx, getState());
  enterRule(_localctx, 210, MizarParser::RuleSuppose);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1054);
    match(MizarParser::T__84);
    setState(1057);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__15:
      case MizarParser::T__24:
      case MizarParser::T__46:
      case MizarParser::T__47:
      case MizarParser::T__57:
      case MizarParser::T__106:
      case MizarParser::T__107:
      case MizarParser::T__108:
      case MizarParser::T__109:
      case MizarParser::T__110:
      case MizarParser::T__113:
      case MizarParser::T__117:
      case MizarParser::T__119:
      case MizarParser::T__122:
      case MizarParser::T__123:
      case MizarParser::T__124:
      case MizarParser::T__125:
      case MizarParser::T__126:
      case MizarParser::T__127:
      case MizarParser::T__128:
      case MizarParser::T__129:
      case MizarParser::T__130:
      case MizarParser::T__131:
      case MizarParser::PREDICATE_SYMBOL:
      case MizarParser::FUNCTOR_SYMBOL:
      case MizarParser::STRUCTURE_SYMBOL:
      case MizarParser::LEFT_FUNCTOR_SYMBOL:
      case MizarParser::IDENTIFIER:
      case MizarParser::NUMERAL: {
        setState(1055);
        proposition();
        break;
      }

      case MizarParser::T__100: {
        setState(1056);
        conditions();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1059);
    match(MizarParser::T__3);
    setState(1060);
    reasoning();
    setState(1061);
    match(MizarParser::T__17);
    setState(1062);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReasoningItemContext ------------------------------------------------------------------

MizarParser::ReasoningItemContext::ReasoningItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::AuxiliaryItemContext* MizarParser::ReasoningItemContext::auxiliaryItem() {
  return getRuleContext<MizarParser::AuxiliaryItemContext>(0);
}

MizarParser::SkeletonItemContext* MizarParser::ReasoningItemContext::skeletonItem() {
  return getRuleContext<MizarParser::SkeletonItemContext>(0);
}


size_t MizarParser::ReasoningItemContext::getRuleIndex() const {
  return MizarParser::RuleReasoningItem;
}

void MizarParser::ReasoningItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReasoningItem(this);
}

void MizarParser::ReasoningItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReasoningItem(this);
}

MizarParser::ReasoningItemContext* MizarParser::reasoningItem() {
  ReasoningItemContext *_localctx = _tracker.createInstance<ReasoningItemContext>(_ctx, getState());
  enterRule(_localctx, 212, MizarParser::RuleReasoningItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1066);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__15:
      case MizarParser::T__24:
      case MizarParser::T__34:
      case MizarParser::T__46:
      case MizarParser::T__47:
      case MizarParser::T__57:
      case MizarParser::T__78:
      case MizarParser::T__79:
      case MizarParser::T__80:
      case MizarParser::T__91:
      case MizarParser::T__92:
      case MizarParser::T__95:
      case MizarParser::T__106:
      case MizarParser::T__107:
      case MizarParser::T__108:
      case MizarParser::T__109:
      case MizarParser::T__110:
      case MizarParser::T__113:
      case MizarParser::T__117:
      case MizarParser::T__119:
      case MizarParser::T__122:
      case MizarParser::T__123:
      case MizarParser::T__124:
      case MizarParser::T__125:
      case MizarParser::T__126:
      case MizarParser::T__127:
      case MizarParser::T__128:
      case MizarParser::T__129:
      case MizarParser::T__130:
      case MizarParser::T__131:
      case MizarParser::PREDICATE_SYMBOL:
      case MizarParser::FUNCTOR_SYMBOL:
      case MizarParser::STRUCTURE_SYMBOL:
      case MizarParser::LEFT_FUNCTOR_SYMBOL:
      case MizarParser::IDENTIFIER:
      case MizarParser::NUMERAL: {
        enterOuterAlt(_localctx, 1);
        setState(1064);
        auxiliaryItem();
        break;
      }

      case MizarParser::T__20:
      case MizarParser::T__85:
      case MizarParser::T__86:
      case MizarParser::T__87:
      case MizarParser::T__88:
      case MizarParser::T__89:
      case MizarParser::T__90: {
        enterOuterAlt(_localctx, 2);
        setState(1065);
        skeletonItem();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SkeletonItemContext ------------------------------------------------------------------

MizarParser::SkeletonItemContext::SkeletonItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::GeneralizationContext* MizarParser::SkeletonItemContext::generalization() {
  return getRuleContext<MizarParser::GeneralizationContext>(0);
}

MizarParser::AssumptionContext* MizarParser::SkeletonItemContext::assumption() {
  return getRuleContext<MizarParser::AssumptionContext>(0);
}

MizarParser::ConclusionContext* MizarParser::SkeletonItemContext::conclusion() {
  return getRuleContext<MizarParser::ConclusionContext>(0);
}

MizarParser::ExemplificationContext* MizarParser::SkeletonItemContext::exemplification() {
  return getRuleContext<MizarParser::ExemplificationContext>(0);
}


size_t MizarParser::SkeletonItemContext::getRuleIndex() const {
  return MizarParser::RuleSkeletonItem;
}

void MizarParser::SkeletonItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSkeletonItem(this);
}

void MizarParser::SkeletonItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSkeletonItem(this);
}

MizarParser::SkeletonItemContext* MizarParser::skeletonItem() {
  SkeletonItemContext *_localctx = _tracker.createInstance<SkeletonItemContext>(_ctx, getState());
  enterRule(_localctx, 214, MizarParser::RuleSkeletonItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1072);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__20: {
        enterOuterAlt(_localctx, 1);
        setState(1068);
        generalization();
        break;
      }

      case MizarParser::T__85:
      case MizarParser::T__86: {
        enterOuterAlt(_localctx, 2);
        setState(1069);
        assumption();
        break;
      }

      case MizarParser::T__87:
      case MizarParser::T__88:
      case MizarParser::T__89: {
        enterOuterAlt(_localctx, 3);
        setState(1070);
        conclusion();
        break;
      }

      case MizarParser::T__90: {
        enterOuterAlt(_localctx, 4);
        setState(1071);
        exemplification();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralizationContext ------------------------------------------------------------------

MizarParser::GeneralizationContext::GeneralizationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::QualifiedVariablesContext* MizarParser::GeneralizationContext::qualifiedVariables() {
  return getRuleContext<MizarParser::QualifiedVariablesContext>(0);
}

MizarParser::ConditionsContext* MizarParser::GeneralizationContext::conditions() {
  return getRuleContext<MizarParser::ConditionsContext>(0);
}


size_t MizarParser::GeneralizationContext::getRuleIndex() const {
  return MizarParser::RuleGeneralization;
}

void MizarParser::GeneralizationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneralization(this);
}

void MizarParser::GeneralizationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneralization(this);
}

MizarParser::GeneralizationContext* MizarParser::generalization() {
  GeneralizationContext *_localctx = _tracker.createInstance<GeneralizationContext>(_ctx, getState());
  enterRule(_localctx, 216, MizarParser::RuleGeneralization);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1074);
    match(MizarParser::T__20);
    setState(1075);
    qualifiedVariables();
    setState(1078);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__21) {
      setState(1076);
      match(MizarParser::T__21);
      setState(1077);
      conditions();
    }
    setState(1080);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssumptionContext ------------------------------------------------------------------

MizarParser::AssumptionContext::AssumptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::SingleAssumptionContext* MizarParser::AssumptionContext::singleAssumption() {
  return getRuleContext<MizarParser::SingleAssumptionContext>(0);
}

MizarParser::CollectiveAssumptionContext* MizarParser::AssumptionContext::collectiveAssumption() {
  return getRuleContext<MizarParser::CollectiveAssumptionContext>(0);
}

MizarParser::ExistentialAssumptionContext* MizarParser::AssumptionContext::existentialAssumption() {
  return getRuleContext<MizarParser::ExistentialAssumptionContext>(0);
}


size_t MizarParser::AssumptionContext::getRuleIndex() const {
  return MizarParser::RuleAssumption;
}

void MizarParser::AssumptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssumption(this);
}

void MizarParser::AssumptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssumption(this);
}

MizarParser::AssumptionContext* MizarParser::assumption() {
  AssumptionContext *_localctx = _tracker.createInstance<AssumptionContext>(_ctx, getState());
  enterRule(_localctx, 218, MizarParser::RuleAssumption);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1085);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1082);
      singleAssumption();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1083);
      collectiveAssumption();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1084);
      existentialAssumption();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleAssumptionContext ------------------------------------------------------------------

MizarParser::SingleAssumptionContext::SingleAssumptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::PropositionContext* MizarParser::SingleAssumptionContext::proposition() {
  return getRuleContext<MizarParser::PropositionContext>(0);
}


size_t MizarParser::SingleAssumptionContext::getRuleIndex() const {
  return MizarParser::RuleSingleAssumption;
}

void MizarParser::SingleAssumptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleAssumption(this);
}

void MizarParser::SingleAssumptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleAssumption(this);
}

MizarParser::SingleAssumptionContext* MizarParser::singleAssumption() {
  SingleAssumptionContext *_localctx = _tracker.createInstance<SingleAssumptionContext>(_ctx, getState());
  enterRule(_localctx, 220, MizarParser::RuleSingleAssumption);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1087);
    match(MizarParser::T__85);
    setState(1088);
    proposition();
    setState(1089);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CollectiveAssumptionContext ------------------------------------------------------------------

MizarParser::CollectiveAssumptionContext::CollectiveAssumptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ConditionsContext* MizarParser::CollectiveAssumptionContext::conditions() {
  return getRuleContext<MizarParser::ConditionsContext>(0);
}


size_t MizarParser::CollectiveAssumptionContext::getRuleIndex() const {
  return MizarParser::RuleCollectiveAssumption;
}

void MizarParser::CollectiveAssumptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollectiveAssumption(this);
}

void MizarParser::CollectiveAssumptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollectiveAssumption(this);
}

MizarParser::CollectiveAssumptionContext* MizarParser::collectiveAssumption() {
  CollectiveAssumptionContext *_localctx = _tracker.createInstance<CollectiveAssumptionContext>(_ctx, getState());
  enterRule(_localctx, 222, MizarParser::RuleCollectiveAssumption);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1091);
    match(MizarParser::T__85);
    setState(1092);
    conditions();
    setState(1093);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExistentialAssumptionContext ------------------------------------------------------------------

MizarParser::ExistentialAssumptionContext::ExistentialAssumptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::QualifiedVariablesContext* MizarParser::ExistentialAssumptionContext::qualifiedVariables() {
  return getRuleContext<MizarParser::QualifiedVariablesContext>(0);
}

MizarParser::ConditionsContext* MizarParser::ExistentialAssumptionContext::conditions() {
  return getRuleContext<MizarParser::ConditionsContext>(0);
}


size_t MizarParser::ExistentialAssumptionContext::getRuleIndex() const {
  return MizarParser::RuleExistentialAssumption;
}

void MizarParser::ExistentialAssumptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExistentialAssumption(this);
}

void MizarParser::ExistentialAssumptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExistentialAssumption(this);
}

MizarParser::ExistentialAssumptionContext* MizarParser::existentialAssumption() {
  ExistentialAssumptionContext *_localctx = _tracker.createInstance<ExistentialAssumptionContext>(_ctx, getState());
  enterRule(_localctx, 224, MizarParser::RuleExistentialAssumption);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1095);
    match(MizarParser::T__86);
    setState(1096);
    qualifiedVariables();
    setState(1099);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__21) {
      setState(1097);
      match(MizarParser::T__21);
      setState(1098);
      conditions();
    }
    setState(1101);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConclusionContext ------------------------------------------------------------------

MizarParser::ConclusionContext::ConclusionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::CompactStatementContext* MizarParser::ConclusionContext::compactStatement() {
  return getRuleContext<MizarParser::CompactStatementContext>(0);
}

MizarParser::IterativeEqualityContext* MizarParser::ConclusionContext::iterativeEquality() {
  return getRuleContext<MizarParser::IterativeEqualityContext>(0);
}

MizarParser::DiffuseConclusionContext* MizarParser::ConclusionContext::diffuseConclusion() {
  return getRuleContext<MizarParser::DiffuseConclusionContext>(0);
}


size_t MizarParser::ConclusionContext::getRuleIndex() const {
  return MizarParser::RuleConclusion;
}

void MizarParser::ConclusionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConclusion(this);
}

void MizarParser::ConclusionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConclusion(this);
}

MizarParser::ConclusionContext* MizarParser::conclusion() {
  ConclusionContext *_localctx = _tracker.createInstance<ConclusionContext>(_ctx, getState());
  enterRule(_localctx, 226, MizarParser::RuleConclusion);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1109);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1103);
      _la = _input->LA(1);
      if (!(_la == MizarParser::T__87

      || _la == MizarParser::T__88)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1106);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
      case 1: {
        setState(1104);
        compactStatement();
        break;
      }

      case 2: {
        setState(1105);
        iterativeEquality();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1108);
      diffuseConclusion();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiffuseConclusionContext ------------------------------------------------------------------

MizarParser::DiffuseConclusionContext::DiffuseConclusionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::DiffuseStatementContext* MizarParser::DiffuseConclusionContext::diffuseStatement() {
  return getRuleContext<MizarParser::DiffuseStatementContext>(0);
}

MizarParser::ReasoningContext* MizarParser::DiffuseConclusionContext::reasoning() {
  return getRuleContext<MizarParser::ReasoningContext>(0);
}


size_t MizarParser::DiffuseConclusionContext::getRuleIndex() const {
  return MizarParser::RuleDiffuseConclusion;
}

void MizarParser::DiffuseConclusionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiffuseConclusion(this);
}

void MizarParser::DiffuseConclusionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiffuseConclusion(this);
}

MizarParser::DiffuseConclusionContext* MizarParser::diffuseConclusion() {
  DiffuseConclusionContext *_localctx = _tracker.createInstance<DiffuseConclusionContext>(_ctx, getState());
  enterRule(_localctx, 228, MizarParser::RuleDiffuseConclusion);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1118);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__87: {
        enterOuterAlt(_localctx, 1);
        setState(1111);
        match(MizarParser::T__87);
        setState(1112);
        diffuseStatement();
        break;
      }

      case MizarParser::T__89: {
        enterOuterAlt(_localctx, 2);
        setState(1113);
        match(MizarParser::T__89);
        setState(1114);
        reasoning();
        setState(1115);
        match(MizarParser::T__17);
        setState(1116);
        match(MizarParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExemplificationContext ------------------------------------------------------------------

MizarParser::ExemplificationContext::ExemplificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::ExampleContext *> MizarParser::ExemplificationContext::example() {
  return getRuleContexts<MizarParser::ExampleContext>();
}

MizarParser::ExampleContext* MizarParser::ExemplificationContext::example(size_t i) {
  return getRuleContext<MizarParser::ExampleContext>(i);
}


size_t MizarParser::ExemplificationContext::getRuleIndex() const {
  return MizarParser::RuleExemplification;
}

void MizarParser::ExemplificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExemplification(this);
}

void MizarParser::ExemplificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExemplification(this);
}

MizarParser::ExemplificationContext* MizarParser::exemplification() {
  ExemplificationContext *_localctx = _tracker.createInstance<ExemplificationContext>(_ctx, getState());
  enterRule(_localctx, 230, MizarParser::RuleExemplification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1120);
    match(MizarParser::T__90);
    setState(1121);
    example();
    setState(1126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(1122);
      match(MizarParser::T__2);
      setState(1123);
      example();
      setState(1128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1129);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExampleContext ------------------------------------------------------------------

MizarParser::ExampleContext::ExampleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::TermExpressionContext* MizarParser::ExampleContext::termExpression() {
  return getRuleContext<MizarParser::TermExpressionContext>(0);
}

MizarParser::VariableIdentifierContext* MizarParser::ExampleContext::variableIdentifier() {
  return getRuleContext<MizarParser::VariableIdentifierContext>(0);
}


size_t MizarParser::ExampleContext::getRuleIndex() const {
  return MizarParser::RuleExample;
}

void MizarParser::ExampleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExample(this);
}

void MizarParser::ExampleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExample(this);
}

MizarParser::ExampleContext* MizarParser::example() {
  ExampleContext *_localctx = _tracker.createInstance<ExampleContext>(_ctx, getState());
  enterRule(_localctx, 232, MizarParser::RuleExample);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1131);
      termExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1132);
      variableIdentifier();
      setState(1133);
      match(MizarParser::T__57);
      setState(1134);
      termExpression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

MizarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::LinkableStatementContext* MizarParser::StatementContext::linkableStatement() {
  return getRuleContext<MizarParser::LinkableStatementContext>(0);
}

MizarParser::DiffuseStatementContext* MizarParser::StatementContext::diffuseStatement() {
  return getRuleContext<MizarParser::DiffuseStatementContext>(0);
}


size_t MizarParser::StatementContext::getRuleIndex() const {
  return MizarParser::RuleStatement;
}

void MizarParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void MizarParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

MizarParser::StatementContext* MizarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 234, MizarParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1139);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MizarParser::T__80) {
        setState(1138);
        match(MizarParser::T__80);
      }
      setState(1141);
      linkableStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1142);
      diffuseStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LinkableStatementContext ------------------------------------------------------------------

MizarParser::LinkableStatementContext::LinkableStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::CompactStatementContext* MizarParser::LinkableStatementContext::compactStatement() {
  return getRuleContext<MizarParser::CompactStatementContext>(0);
}

MizarParser::ChoiceStatementContext* MizarParser::LinkableStatementContext::choiceStatement() {
  return getRuleContext<MizarParser::ChoiceStatementContext>(0);
}

MizarParser::TypeChangingStatementContext* MizarParser::LinkableStatementContext::typeChangingStatement() {
  return getRuleContext<MizarParser::TypeChangingStatementContext>(0);
}

MizarParser::IterativeEqualityContext* MizarParser::LinkableStatementContext::iterativeEquality() {
  return getRuleContext<MizarParser::IterativeEqualityContext>(0);
}


size_t MizarParser::LinkableStatementContext::getRuleIndex() const {
  return MizarParser::RuleLinkableStatement;
}

void MizarParser::LinkableStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLinkableStatement(this);
}

void MizarParser::LinkableStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLinkableStatement(this);
}

MizarParser::LinkableStatementContext* MizarParser::linkableStatement() {
  LinkableStatementContext *_localctx = _tracker.createInstance<LinkableStatementContext>(_ctx, getState());
  enterRule(_localctx, 236, MizarParser::RuleLinkableStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1149);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1145);
      compactStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1146);
      choiceStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1147);
      typeChangingStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1148);
      iterativeEquality();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompactStatementContext ------------------------------------------------------------------

MizarParser::CompactStatementContext::CompactStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::PropositionContext* MizarParser::CompactStatementContext::proposition() {
  return getRuleContext<MizarParser::PropositionContext>(0);
}

MizarParser::JustificationContext* MizarParser::CompactStatementContext::justification() {
  return getRuleContext<MizarParser::JustificationContext>(0);
}


size_t MizarParser::CompactStatementContext::getRuleIndex() const {
  return MizarParser::RuleCompactStatement;
}

void MizarParser::CompactStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompactStatement(this);
}

void MizarParser::CompactStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompactStatement(this);
}

MizarParser::CompactStatementContext* MizarParser::compactStatement() {
  CompactStatementContext *_localctx = _tracker.createInstance<CompactStatementContext>(_ctx, getState());
  enterRule(_localctx, 238, MizarParser::RuleCompactStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1151);
    proposition();
    setState(1152);
    justification();
    setState(1153);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChoiceStatementContext ------------------------------------------------------------------

MizarParser::ChoiceStatementContext::ChoiceStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::QualifiedVariablesContext* MizarParser::ChoiceStatementContext::qualifiedVariables() {
  return getRuleContext<MizarParser::QualifiedVariablesContext>(0);
}

MizarParser::ConditionsContext* MizarParser::ChoiceStatementContext::conditions() {
  return getRuleContext<MizarParser::ConditionsContext>(0);
}

MizarParser::SimpleJustificationContext* MizarParser::ChoiceStatementContext::simpleJustification() {
  return getRuleContext<MizarParser::SimpleJustificationContext>(0);
}


size_t MizarParser::ChoiceStatementContext::getRuleIndex() const {
  return MizarParser::RuleChoiceStatement;
}

void MizarParser::ChoiceStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChoiceStatement(this);
}

void MizarParser::ChoiceStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChoiceStatement(this);
}

MizarParser::ChoiceStatementContext* MizarParser::choiceStatement() {
  ChoiceStatementContext *_localctx = _tracker.createInstance<ChoiceStatementContext>(_ctx, getState());
  enterRule(_localctx, 240, MizarParser::RuleChoiceStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1155);
    match(MizarParser::T__91);
    setState(1156);
    qualifiedVariables();
    setState(1157);
    match(MizarParser::T__21);
    setState(1158);
    conditions();
    setState(1159);
    simpleJustification();
    setState(1160);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeChangingStatementContext ------------------------------------------------------------------

MizarParser::TypeChangingStatementContext::TypeChangingStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::TypeChangeListContext* MizarParser::TypeChangingStatementContext::typeChangeList() {
  return getRuleContext<MizarParser::TypeChangeListContext>(0);
}

MizarParser::TypeExpressionContext* MizarParser::TypeChangingStatementContext::typeExpression() {
  return getRuleContext<MizarParser::TypeExpressionContext>(0);
}

MizarParser::SimpleJustificationContext* MizarParser::TypeChangingStatementContext::simpleJustification() {
  return getRuleContext<MizarParser::SimpleJustificationContext>(0);
}


size_t MizarParser::TypeChangingStatementContext::getRuleIndex() const {
  return MizarParser::RuleTypeChangingStatement;
}

void MizarParser::TypeChangingStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeChangingStatement(this);
}

void MizarParser::TypeChangingStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeChangingStatement(this);
}

MizarParser::TypeChangingStatementContext* MizarParser::typeChangingStatement() {
  TypeChangingStatementContext *_localctx = _tracker.createInstance<TypeChangingStatementContext>(_ctx, getState());
  enterRule(_localctx, 242, MizarParser::RuleTypeChangingStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1162);
    match(MizarParser::T__92);
    setState(1163);
    typeChangeList();
    setState(1164);
    match(MizarParser::T__93);
    setState(1165);
    typeExpression();
    setState(1166);
    simpleJustification();
    setState(1167);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeChangeListContext ------------------------------------------------------------------

MizarParser::TypeChangeListContext::TypeChangeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::EquatingContext *> MizarParser::TypeChangeListContext::equating() {
  return getRuleContexts<MizarParser::EquatingContext>();
}

MizarParser::EquatingContext* MizarParser::TypeChangeListContext::equating(size_t i) {
  return getRuleContext<MizarParser::EquatingContext>(i);
}

std::vector<MizarParser::VariableIdentifierContext *> MizarParser::TypeChangeListContext::variableIdentifier() {
  return getRuleContexts<MizarParser::VariableIdentifierContext>();
}

MizarParser::VariableIdentifierContext* MizarParser::TypeChangeListContext::variableIdentifier(size_t i) {
  return getRuleContext<MizarParser::VariableIdentifierContext>(i);
}


size_t MizarParser::TypeChangeListContext::getRuleIndex() const {
  return MizarParser::RuleTypeChangeList;
}

void MizarParser::TypeChangeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeChangeList(this);
}

void MizarParser::TypeChangeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeChangeList(this);
}

MizarParser::TypeChangeListContext* MizarParser::typeChangeList() {
  TypeChangeListContext *_localctx = _tracker.createInstance<TypeChangeListContext>(_ctx, getState());
  enterRule(_localctx, 244, MizarParser::RuleTypeChangeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1171);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx)) {
    case 1: {
      setState(1169);
      equating();
      break;
    }

    case 2: {
      setState(1170);
      variableIdentifier();
      break;
    }

    }
    setState(1180);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(1173);
      match(MizarParser::T__2);
      setState(1176);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
      case 1: {
        setState(1174);
        equating();
        break;
      }

      case 2: {
        setState(1175);
        variableIdentifier();
        break;
      }

      }
      setState(1182);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterativeEqualityContext ------------------------------------------------------------------

MizarParser::IterativeEqualityContext::IterativeEqualityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::TermExpressionContext *> MizarParser::IterativeEqualityContext::termExpression() {
  return getRuleContexts<MizarParser::TermExpressionContext>();
}

MizarParser::TermExpressionContext* MizarParser::IterativeEqualityContext::termExpression(size_t i) {
  return getRuleContext<MizarParser::TermExpressionContext>(i);
}

std::vector<MizarParser::SimpleJustificationContext *> MizarParser::IterativeEqualityContext::simpleJustification() {
  return getRuleContexts<MizarParser::SimpleJustificationContext>();
}

MizarParser::SimpleJustificationContext* MizarParser::IterativeEqualityContext::simpleJustification(size_t i) {
  return getRuleContext<MizarParser::SimpleJustificationContext>(i);
}

MizarParser::LabelIdentifierContext* MizarParser::IterativeEqualityContext::labelIdentifier() {
  return getRuleContext<MizarParser::LabelIdentifierContext>(0);
}


size_t MizarParser::IterativeEqualityContext::getRuleIndex() const {
  return MizarParser::RuleIterativeEquality;
}

void MizarParser::IterativeEqualityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterativeEquality(this);
}

void MizarParser::IterativeEqualityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterativeEquality(this);
}

MizarParser::IterativeEqualityContext* MizarParser::iterativeEquality() {
  IterativeEqualityContext *_localctx = _tracker.createInstance<IterativeEqualityContext>(_ctx, getState());
  enterRule(_localctx, 246, MizarParser::RuleIterativeEquality);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1186);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
    case 1: {
      setState(1183);
      labelIdentifier();
      setState(1184);
      match(MizarParser::T__36);
      break;
    }

    }
    setState(1188);
    termExpression(0);
    setState(1189);
    match(MizarParser::T__57);
    setState(1190);
    termExpression(0);
    setState(1191);
    simpleJustification();
    setState(1196); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1192);
      match(MizarParser::T__94);
      setState(1193);
      termExpression(0);
      setState(1194);
      simpleJustification();
      setState(1198); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MizarParser::T__94);
    setState(1200);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiffuseStatementContext ------------------------------------------------------------------

MizarParser::DiffuseStatementContext::DiffuseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ReasoningContext* MizarParser::DiffuseStatementContext::reasoning() {
  return getRuleContext<MizarParser::ReasoningContext>(0);
}

MizarParser::LabelIdentifierContext* MizarParser::DiffuseStatementContext::labelIdentifier() {
  return getRuleContext<MizarParser::LabelIdentifierContext>(0);
}


size_t MizarParser::DiffuseStatementContext::getRuleIndex() const {
  return MizarParser::RuleDiffuseStatement;
}

void MizarParser::DiffuseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiffuseStatement(this);
}

void MizarParser::DiffuseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiffuseStatement(this);
}

MizarParser::DiffuseStatementContext* MizarParser::diffuseStatement() {
  DiffuseStatementContext *_localctx = _tracker.createInstance<DiffuseStatementContext>(_ctx, getState());
  enterRule(_localctx, 248, MizarParser::RuleDiffuseStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::IDENTIFIER) {
      setState(1202);
      labelIdentifier();
      setState(1203);
      match(MizarParser::T__36);
    }
    setState(1207);
    match(MizarParser::T__95);
    setState(1208);
    reasoning();
    setState(1209);
    match(MizarParser::T__17);
    setState(1210);
    match(MizarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JustificationContext ------------------------------------------------------------------

MizarParser::JustificationContext::JustificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::SimpleJustificationContext* MizarParser::JustificationContext::simpleJustification() {
  return getRuleContext<MizarParser::SimpleJustificationContext>(0);
}

MizarParser::ProofContext* MizarParser::JustificationContext::proof() {
  return getRuleContext<MizarParser::ProofContext>(0);
}


size_t MizarParser::JustificationContext::getRuleIndex() const {
  return MizarParser::RuleJustification;
}

void MizarParser::JustificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJustification(this);
}

void MizarParser::JustificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJustification(this);
}

MizarParser::JustificationContext* MizarParser::justification() {
  JustificationContext *_localctx = _tracker.createInstance<JustificationContext>(_ctx, getState());
  enterRule(_localctx, 250, MizarParser::RuleJustification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1214);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__3:
      case MizarParser::T__96:
      case MizarParser::T__97: {
        enterOuterAlt(_localctx, 1);
        setState(1212);
        simpleJustification();
        break;
      }

      case MizarParser::T__77: {
        enterOuterAlt(_localctx, 2);
        setState(1213);
        proof();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleJustificationContext ------------------------------------------------------------------

MizarParser::SimpleJustificationContext::SimpleJustificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::StraightforwardJustificationContext* MizarParser::SimpleJustificationContext::straightforwardJustification() {
  return getRuleContext<MizarParser::StraightforwardJustificationContext>(0);
}

MizarParser::SchemeJustificationContext* MizarParser::SimpleJustificationContext::schemeJustification() {
  return getRuleContext<MizarParser::SchemeJustificationContext>(0);
}


size_t MizarParser::SimpleJustificationContext::getRuleIndex() const {
  return MizarParser::RuleSimpleJustification;
}

void MizarParser::SimpleJustificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleJustification(this);
}

void MizarParser::SimpleJustificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleJustification(this);
}

MizarParser::SimpleJustificationContext* MizarParser::simpleJustification() {
  SimpleJustificationContext *_localctx = _tracker.createInstance<SimpleJustificationContext>(_ctx, getState());
  enterRule(_localctx, 252, MizarParser::RuleSimpleJustification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1218);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__3:
      case MizarParser::T__94:
      case MizarParser::T__96: {
        enterOuterAlt(_localctx, 1);
        setState(1216);
        straightforwardJustification();
        break;
      }

      case MizarParser::T__97: {
        enterOuterAlt(_localctx, 2);
        setState(1217);
        schemeJustification();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProofContext ------------------------------------------------------------------

MizarParser::ProofContext::ProofContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ReasoningContext* MizarParser::ProofContext::reasoning() {
  return getRuleContext<MizarParser::ReasoningContext>(0);
}


size_t MizarParser::ProofContext::getRuleIndex() const {
  return MizarParser::RuleProof;
}

void MizarParser::ProofContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProof(this);
}

void MizarParser::ProofContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProof(this);
}

MizarParser::ProofContext* MizarParser::proof() {
  ProofContext *_localctx = _tracker.createInstance<ProofContext>(_ctx, getState());
  enterRule(_localctx, 254, MizarParser::RuleProof);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1220);
    match(MizarParser::T__77);
    setState(1221);
    reasoning();
    setState(1222);
    match(MizarParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StraightforwardJustificationContext ------------------------------------------------------------------

MizarParser::StraightforwardJustificationContext::StraightforwardJustificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ReferencesContext* MizarParser::StraightforwardJustificationContext::references() {
  return getRuleContext<MizarParser::ReferencesContext>(0);
}


size_t MizarParser::StraightforwardJustificationContext::getRuleIndex() const {
  return MizarParser::RuleStraightforwardJustification;
}

void MizarParser::StraightforwardJustificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStraightforwardJustification(this);
}

void MizarParser::StraightforwardJustificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStraightforwardJustification(this);
}

MizarParser::StraightforwardJustificationContext* MizarParser::straightforwardJustification() {
  StraightforwardJustificationContext *_localctx = _tracker.createInstance<StraightforwardJustificationContext>(_ctx, getState());
  enterRule(_localctx, 256, MizarParser::RuleStraightforwardJustification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1226);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__96) {
      setState(1224);
      match(MizarParser::T__96);
      setState(1225);
      references();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemeJustificationContext ------------------------------------------------------------------

MizarParser::SchemeJustificationContext::SchemeJustificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::SchemeReferenceContext* MizarParser::SchemeJustificationContext::schemeReference() {
  return getRuleContext<MizarParser::SchemeReferenceContext>(0);
}

MizarParser::ReferencesContext* MizarParser::SchemeJustificationContext::references() {
  return getRuleContext<MizarParser::ReferencesContext>(0);
}


size_t MizarParser::SchemeJustificationContext::getRuleIndex() const {
  return MizarParser::RuleSchemeJustification;
}

void MizarParser::SchemeJustificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchemeJustification(this);
}

void MizarParser::SchemeJustificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchemeJustification(this);
}

MizarParser::SchemeJustificationContext* MizarParser::schemeJustification() {
  SchemeJustificationContext *_localctx = _tracker.createInstance<SchemeJustificationContext>(_ctx, getState());
  enterRule(_localctx, 258, MizarParser::RuleSchemeJustification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1228);
    match(MizarParser::T__97);
    setState(1229);
    schemeReference();
    setState(1234);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MizarParser::T__24) {
      setState(1230);
      match(MizarParser::T__24);
      setState(1231);
      references();
      setState(1232);
      match(MizarParser::T__25);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReferencesContext ------------------------------------------------------------------

MizarParser::ReferencesContext::ReferencesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::ReferenceContext *> MizarParser::ReferencesContext::reference() {
  return getRuleContexts<MizarParser::ReferenceContext>();
}

MizarParser::ReferenceContext* MizarParser::ReferencesContext::reference(size_t i) {
  return getRuleContext<MizarParser::ReferenceContext>(i);
}


size_t MizarParser::ReferencesContext::getRuleIndex() const {
  return MizarParser::RuleReferences;
}

void MizarParser::ReferencesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReferences(this);
}

void MizarParser::ReferencesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReferences(this);
}

MizarParser::ReferencesContext* MizarParser::references() {
  ReferencesContext *_localctx = _tracker.createInstance<ReferencesContext>(_ctx, getState());
  enterRule(_localctx, 260, MizarParser::RuleReferences);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1236);
    reference();
    setState(1241);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(1237);
      match(MizarParser::T__2);
      setState(1238);
      reference();
      setState(1243);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReferenceContext ------------------------------------------------------------------

MizarParser::ReferenceContext::ReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::LocalReferenceContext* MizarParser::ReferenceContext::localReference() {
  return getRuleContext<MizarParser::LocalReferenceContext>(0);
}

MizarParser::LibraryReferenceContext* MizarParser::ReferenceContext::libraryReference() {
  return getRuleContext<MizarParser::LibraryReferenceContext>(0);
}


size_t MizarParser::ReferenceContext::getRuleIndex() const {
  return MizarParser::RuleReference;
}

void MizarParser::ReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReference(this);
}

void MizarParser::ReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReference(this);
}

MizarParser::ReferenceContext* MizarParser::reference() {
  ReferenceContext *_localctx = _tracker.createInstance<ReferenceContext>(_ctx, getState());
  enterRule(_localctx, 262, MizarParser::RuleReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1246);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1244);
        localReference();
        break;
      }

      case MizarParser::FILE_NAME: {
        enterOuterAlt(_localctx, 2);
        setState(1245);
        libraryReference();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemeReferenceContext ------------------------------------------------------------------

MizarParser::SchemeReferenceContext::SchemeReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::LocalSchemeReferenceContext* MizarParser::SchemeReferenceContext::localSchemeReference() {
  return getRuleContext<MizarParser::LocalSchemeReferenceContext>(0);
}

MizarParser::LibrarySchemeReferenceContext* MizarParser::SchemeReferenceContext::librarySchemeReference() {
  return getRuleContext<MizarParser::LibrarySchemeReferenceContext>(0);
}


size_t MizarParser::SchemeReferenceContext::getRuleIndex() const {
  return MizarParser::RuleSchemeReference;
}

void MizarParser::SchemeReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchemeReference(this);
}

void MizarParser::SchemeReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchemeReference(this);
}

MizarParser::SchemeReferenceContext* MizarParser::schemeReference() {
  SchemeReferenceContext *_localctx = _tracker.createInstance<SchemeReferenceContext>(_ctx, getState());
  enterRule(_localctx, 264, MizarParser::RuleSchemeReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1250);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1248);
        localSchemeReference();
        break;
      }

      case MizarParser::FILE_NAME: {
        enterOuterAlt(_localctx, 2);
        setState(1249);
        librarySchemeReference();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalReferenceContext ------------------------------------------------------------------

MizarParser::LocalReferenceContext::LocalReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::LabelIdentifierContext* MizarParser::LocalReferenceContext::labelIdentifier() {
  return getRuleContext<MizarParser::LabelIdentifierContext>(0);
}


size_t MizarParser::LocalReferenceContext::getRuleIndex() const {
  return MizarParser::RuleLocalReference;
}

void MizarParser::LocalReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalReference(this);
}

void MizarParser::LocalReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalReference(this);
}

MizarParser::LocalReferenceContext* MizarParser::localReference() {
  LocalReferenceContext *_localctx = _tracker.createInstance<LocalReferenceContext>(_ctx, getState());
  enterRule(_localctx, 266, MizarParser::RuleLocalReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1252);
    labelIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalSchemeReferenceContext ------------------------------------------------------------------

MizarParser::LocalSchemeReferenceContext::LocalSchemeReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::SchemeIdentifierContext* MizarParser::LocalSchemeReferenceContext::schemeIdentifier() {
  return getRuleContext<MizarParser::SchemeIdentifierContext>(0);
}


size_t MizarParser::LocalSchemeReferenceContext::getRuleIndex() const {
  return MizarParser::RuleLocalSchemeReference;
}

void MizarParser::LocalSchemeReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalSchemeReference(this);
}

void MizarParser::LocalSchemeReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalSchemeReference(this);
}

MizarParser::LocalSchemeReferenceContext* MizarParser::localSchemeReference() {
  LocalSchemeReferenceContext *_localctx = _tracker.createInstance<LocalSchemeReferenceContext>(_ctx, getState());
  enterRule(_localctx, 268, MizarParser::RuleLocalSchemeReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1254);
    schemeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LibraryReferenceContext ------------------------------------------------------------------

MizarParser::LibraryReferenceContext::LibraryReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ArticleNameContext* MizarParser::LibraryReferenceContext::articleName() {
  return getRuleContext<MizarParser::ArticleNameContext>(0);
}

std::vector<MizarParser::TheoremNumberContext *> MizarParser::LibraryReferenceContext::theoremNumber() {
  return getRuleContexts<MizarParser::TheoremNumberContext>();
}

MizarParser::TheoremNumberContext* MizarParser::LibraryReferenceContext::theoremNumber(size_t i) {
  return getRuleContext<MizarParser::TheoremNumberContext>(i);
}

std::vector<MizarParser::DefinitionNumberContext *> MizarParser::LibraryReferenceContext::definitionNumber() {
  return getRuleContexts<MizarParser::DefinitionNumberContext>();
}

MizarParser::DefinitionNumberContext* MizarParser::LibraryReferenceContext::definitionNumber(size_t i) {
  return getRuleContext<MizarParser::DefinitionNumberContext>(i);
}


size_t MizarParser::LibraryReferenceContext::getRuleIndex() const {
  return MizarParser::RuleLibraryReference;
}

void MizarParser::LibraryReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLibraryReference(this);
}

void MizarParser::LibraryReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLibraryReference(this);
}

MizarParser::LibraryReferenceContext* MizarParser::libraryReference() {
  LibraryReferenceContext *_localctx = _tracker.createInstance<LibraryReferenceContext>(_ctx, getState());
  enterRule(_localctx, 270, MizarParser::RuleLibraryReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1256);
    articleName();
    setState(1257);
    match(MizarParser::T__36);
    setState(1261);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::NUMERAL: {
        setState(1258);
        theoremNumber();
        break;
      }

      case MizarParser::T__98: {
        setState(1259);
        match(MizarParser::T__98);
        setState(1260);
        definitionNumber();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1271);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1263);
        match(MizarParser::T__2);
        setState(1267);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MizarParser::NUMERAL: {
            setState(1264);
            theoremNumber();
            break;
          }

          case MizarParser::T__98: {
            setState(1265);
            match(MizarParser::T__98);
            setState(1266);
            definitionNumber();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(1273);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LibrarySchemeReferenceContext ------------------------------------------------------------------

MizarParser::LibrarySchemeReferenceContext::LibrarySchemeReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ArticleNameContext* MizarParser::LibrarySchemeReferenceContext::articleName() {
  return getRuleContext<MizarParser::ArticleNameContext>(0);
}

MizarParser::SchemeNumberContext* MizarParser::LibrarySchemeReferenceContext::schemeNumber() {
  return getRuleContext<MizarParser::SchemeNumberContext>(0);
}


size_t MizarParser::LibrarySchemeReferenceContext::getRuleIndex() const {
  return MizarParser::RuleLibrarySchemeReference;
}

void MizarParser::LibrarySchemeReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLibrarySchemeReference(this);
}

void MizarParser::LibrarySchemeReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLibrarySchemeReference(this);
}

MizarParser::LibrarySchemeReferenceContext* MizarParser::librarySchemeReference() {
  LibrarySchemeReferenceContext *_localctx = _tracker.createInstance<LibrarySchemeReferenceContext>(_ctx, getState());
  enterRule(_localctx, 272, MizarParser::RuleLibrarySchemeReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1274);
    articleName();
    setState(1275);
    match(MizarParser::T__36);
    setState(1276);
    match(MizarParser::T__99);
    setState(1277);
    schemeNumber();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheoremNumberContext ------------------------------------------------------------------

MizarParser::TheoremNumberContext::TheoremNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::TheoremNumberContext::NUMERAL() {
  return getToken(MizarParser::NUMERAL, 0);
}


size_t MizarParser::TheoremNumberContext::getRuleIndex() const {
  return MizarParser::RuleTheoremNumber;
}

void MizarParser::TheoremNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheoremNumber(this);
}

void MizarParser::TheoremNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheoremNumber(this);
}

MizarParser::TheoremNumberContext* MizarParser::theoremNumber() {
  TheoremNumberContext *_localctx = _tracker.createInstance<TheoremNumberContext>(_ctx, getState());
  enterRule(_localctx, 274, MizarParser::RuleTheoremNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1279);
    match(MizarParser::NUMERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionNumberContext ------------------------------------------------------------------

MizarParser::DefinitionNumberContext::DefinitionNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::DefinitionNumberContext::NUMERAL() {
  return getToken(MizarParser::NUMERAL, 0);
}


size_t MizarParser::DefinitionNumberContext::getRuleIndex() const {
  return MizarParser::RuleDefinitionNumber;
}

void MizarParser::DefinitionNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinitionNumber(this);
}

void MizarParser::DefinitionNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinitionNumber(this);
}

MizarParser::DefinitionNumberContext* MizarParser::definitionNumber() {
  DefinitionNumberContext *_localctx = _tracker.createInstance<DefinitionNumberContext>(_ctx, getState());
  enterRule(_localctx, 276, MizarParser::RuleDefinitionNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1281);
    match(MizarParser::NUMERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SchemeNumberContext ------------------------------------------------------------------

MizarParser::SchemeNumberContext::SchemeNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::SchemeNumberContext::NUMERAL() {
  return getToken(MizarParser::NUMERAL, 0);
}


size_t MizarParser::SchemeNumberContext::getRuleIndex() const {
  return MizarParser::RuleSchemeNumber;
}

void MizarParser::SchemeNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchemeNumber(this);
}

void MizarParser::SchemeNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchemeNumber(this);
}

MizarParser::SchemeNumberContext* MizarParser::schemeNumber() {
  SchemeNumberContext *_localctx = _tracker.createInstance<SchemeNumberContext>(_ctx, getState());
  enterRule(_localctx, 278, MizarParser::RuleSchemeNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1283);
    match(MizarParser::NUMERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionsContext ------------------------------------------------------------------

MizarParser::ConditionsContext::ConditionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::PropositionContext *> MizarParser::ConditionsContext::proposition() {
  return getRuleContexts<MizarParser::PropositionContext>();
}

MizarParser::PropositionContext* MizarParser::ConditionsContext::proposition(size_t i) {
  return getRuleContext<MizarParser::PropositionContext>(i);
}


size_t MizarParser::ConditionsContext::getRuleIndex() const {
  return MizarParser::RuleConditions;
}

void MizarParser::ConditionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditions(this);
}

void MizarParser::ConditionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditions(this);
}

MizarParser::ConditionsContext* MizarParser::conditions() {
  ConditionsContext *_localctx = _tracker.createInstance<ConditionsContext>(_ctx, getState());
  enterRule(_localctx, 280, MizarParser::RuleConditions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1285);
    match(MizarParser::T__100);
    setState(1286);
    proposition();
    setState(1291);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__76) {
      setState(1287);
      match(MizarParser::T__76);
      setState(1288);
      proposition();
      setState(1293);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropositionContext ------------------------------------------------------------------

MizarParser::PropositionContext::PropositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::SentenceContext* MizarParser::PropositionContext::sentence() {
  return getRuleContext<MizarParser::SentenceContext>(0);
}

MizarParser::LabelIdentifierContext* MizarParser::PropositionContext::labelIdentifier() {
  return getRuleContext<MizarParser::LabelIdentifierContext>(0);
}


size_t MizarParser::PropositionContext::getRuleIndex() const {
  return MizarParser::RuleProposition;
}

void MizarParser::PropositionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProposition(this);
}

void MizarParser::PropositionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProposition(this);
}

MizarParser::PropositionContext* MizarParser::proposition() {
  PropositionContext *_localctx = _tracker.createInstance<PropositionContext>(_ctx, getState());
  enterRule(_localctx, 282, MizarParser::RuleProposition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1297);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
    case 1: {
      setState(1294);
      labelIdentifier();
      setState(1295);
      match(MizarParser::T__36);
      break;
    }

    }
    setState(1299);
    sentence();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SentenceContext ------------------------------------------------------------------

MizarParser::SentenceContext::SentenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::FormulaExpressionContext* MizarParser::SentenceContext::formulaExpression() {
  return getRuleContext<MizarParser::FormulaExpressionContext>(0);
}


size_t MizarParser::SentenceContext::getRuleIndex() const {
  return MizarParser::RuleSentence;
}

void MizarParser::SentenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSentence(this);
}

void MizarParser::SentenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSentence(this);
}

MizarParser::SentenceContext* MizarParser::sentence() {
  SentenceContext *_localctx = _tracker.createInstance<SentenceContext>(_ctx, getState());
  enterRule(_localctx, 284, MizarParser::RuleSentence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1301);
    formulaExpression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormulaExpressionContext ------------------------------------------------------------------

MizarParser::FormulaExpressionContext::FormulaExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::FormulaExpressionContext *> MizarParser::FormulaExpressionContext::formulaExpression() {
  return getRuleContexts<MizarParser::FormulaExpressionContext>();
}

MizarParser::FormulaExpressionContext* MizarParser::FormulaExpressionContext::formulaExpression(size_t i) {
  return getRuleContext<MizarParser::FormulaExpressionContext>(i);
}

MizarParser::AtomicFormulaExpressionContext* MizarParser::FormulaExpressionContext::atomicFormulaExpression() {
  return getRuleContext<MizarParser::AtomicFormulaExpressionContext>(0);
}

MizarParser::QuantifiedFormulaExpressionContext* MizarParser::FormulaExpressionContext::quantifiedFormulaExpression() {
  return getRuleContext<MizarParser::QuantifiedFormulaExpressionContext>(0);
}


size_t MizarParser::FormulaExpressionContext::getRuleIndex() const {
  return MizarParser::RuleFormulaExpression;
}

void MizarParser::FormulaExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormulaExpression(this);
}

void MizarParser::FormulaExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormulaExpression(this);
}


MizarParser::FormulaExpressionContext* MizarParser::formulaExpression() {
   return formulaExpression(0);
}

MizarParser::FormulaExpressionContext* MizarParser::formulaExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MizarParser::FormulaExpressionContext *_localctx = _tracker.createInstance<FormulaExpressionContext>(_ctx, parentState);
  MizarParser::FormulaExpressionContext *previousContext = _localctx;
  size_t startState = 286;
  enterRecursionRule(_localctx, 286, MizarParser::RuleFormulaExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1314);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      setState(1304);
      match(MizarParser::T__24);
      setState(1305);
      formulaExpression(0);
      setState(1306);
      match(MizarParser::T__25);
      break;
    }

    case 2: {
      setState(1308);
      atomicFormulaExpression();
      break;
    }

    case 3: {
      setState(1309);
      quantifiedFormulaExpression();
      break;
    }

    case 4: {
      setState(1310);
      match(MizarParser::T__106);
      setState(1311);
      formulaExpression(3);
      break;
    }

    case 5: {
      setState(1312);
      match(MizarParser::T__107);
      break;
    }

    case 6: {
      setState(1313);
      match(MizarParser::T__108);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1340);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1338);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<FormulaExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleFormulaExpression);
          setState(1316);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(1317);
          match(MizarParser::T__101);
          setState(1318);
          formulaExpression(10);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<FormulaExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleFormulaExpression);
          setState(1319);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(1320);
          match(MizarParser::T__101);
          setState(1321);
          match(MizarParser::T__102);
          setState(1322);
          match(MizarParser::T__101);
          setState(1323);
          formulaExpression(9);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<FormulaExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleFormulaExpression);
          setState(1324);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(1325);
          match(MizarParser::T__103);
          setState(1326);
          formulaExpression(8);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<FormulaExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleFormulaExpression);
          setState(1327);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(1328);
          match(MizarParser::T__103);
          setState(1329);
          match(MizarParser::T__102);
          setState(1330);
          match(MizarParser::T__103);
          setState(1331);
          formulaExpression(7);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<FormulaExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleFormulaExpression);
          setState(1332);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1333);
          match(MizarParser::T__104);
          setState(1334);
          formulaExpression(6);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<FormulaExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleFormulaExpression);
          setState(1335);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(1336);
          match(MizarParser::T__105);
          setState(1337);
          formulaExpression(5);
          break;
        }

        } 
      }
      setState(1342);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AtomicFormulaExpressionContext ------------------------------------------------------------------

MizarParser::AtomicFormulaExpressionContext::AtomicFormulaExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::PredicateSymbolContext *> MizarParser::AtomicFormulaExpressionContext::predicateSymbol() {
  return getRuleContexts<MizarParser::PredicateSymbolContext>();
}

MizarParser::PredicateSymbolContext* MizarParser::AtomicFormulaExpressionContext::predicateSymbol(size_t i) {
  return getRuleContext<MizarParser::PredicateSymbolContext>(i);
}

std::vector<MizarParser::TermExpressionListContext *> MizarParser::AtomicFormulaExpressionContext::termExpressionList() {
  return getRuleContexts<MizarParser::TermExpressionListContext>();
}

MizarParser::TermExpressionListContext* MizarParser::AtomicFormulaExpressionContext::termExpressionList(size_t i) {
  return getRuleContext<MizarParser::TermExpressionListContext>(i);
}

MizarParser::PredicateIdentifierContext* MizarParser::AtomicFormulaExpressionContext::predicateIdentifier() {
  return getRuleContext<MizarParser::PredicateIdentifierContext>(0);
}

MizarParser::TermExpressionContext* MizarParser::AtomicFormulaExpressionContext::termExpression() {
  return getRuleContext<MizarParser::TermExpressionContext>(0);
}

std::vector<MizarParser::AdjectiveContext *> MizarParser::AtomicFormulaExpressionContext::adjective() {
  return getRuleContexts<MizarParser::AdjectiveContext>();
}

MizarParser::AdjectiveContext* MizarParser::AtomicFormulaExpressionContext::adjective(size_t i) {
  return getRuleContext<MizarParser::AdjectiveContext>(i);
}

MizarParser::TypeExpressionContext* MizarParser::AtomicFormulaExpressionContext::typeExpression() {
  return getRuleContext<MizarParser::TypeExpressionContext>(0);
}


size_t MizarParser::AtomicFormulaExpressionContext::getRuleIndex() const {
  return MizarParser::RuleAtomicFormulaExpression;
}

void MizarParser::AtomicFormulaExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomicFormulaExpression(this);
}

void MizarParser::AtomicFormulaExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomicFormulaExpression(this);
}

MizarParser::AtomicFormulaExpressionContext* MizarParser::atomicFormulaExpression() {
  AtomicFormulaExpressionContext *_localctx = _tracker.createInstance<AtomicFormulaExpressionContext>(_ctx, getState());
  enterRule(_localctx, 288, MizarParser::RuleAtomicFormulaExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1384);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1344);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MizarParser::T__24)
        | (1ULL << MizarParser::T__46)
        | (1ULL << MizarParser::T__47))) != 0) || ((((_la - 118) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 118)) & ((1ULL << (MizarParser::T__117 - 118))
        | (1ULL << (MizarParser::T__119 - 118))
        | (1ULL << (MizarParser::T__122 - 118))
        | (1ULL << (MizarParser::T__123 - 118))
        | (1ULL << (MizarParser::T__124 - 118))
        | (1ULL << (MizarParser::T__125 - 118))
        | (1ULL << (MizarParser::T__126 - 118))
        | (1ULL << (MizarParser::T__127 - 118))
        | (1ULL << (MizarParser::T__128 - 118))
        | (1ULL << (MizarParser::T__129 - 118))
        | (1ULL << (MizarParser::T__130 - 118))
        | (1ULL << (MizarParser::T__131 - 118))
        | (1ULL << (MizarParser::FUNCTOR_SYMBOL - 118))
        | (1ULL << (MizarParser::STRUCTURE_SYMBOL - 118))
        | (1ULL << (MizarParser::LEFT_FUNCTOR_SYMBOL - 118))
        | (1ULL << (MizarParser::IDENTIFIER - 118))
        | (1ULL << (MizarParser::NUMERAL - 118)))) != 0)) {
        setState(1343);
        termExpressionList();
      }
      setState(1348);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MizarParser::T__109

      || _la == MizarParser::T__110) {
        setState(1346);
        _la = _input->LA(1);
        if (!(_la == MizarParser::T__109

        || _la == MizarParser::T__110)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1347);
        match(MizarParser::T__106);
      }
      setState(1350);
      predicateSymbol();
      setState(1352);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
      case 1: {
        setState(1351);
        termExpressionList();
        break;
      }

      }
      setState(1363);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1356);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MizarParser::T__109

          || _la == MizarParser::T__110) {
            setState(1354);
            _la = _input->LA(1);
            if (!(_la == MizarParser::T__109

            || _la == MizarParser::T__110)) {
            _errHandler->recoverInline(this);
            }
            else {
              _errHandler->reportMatch(this);
              consume();
            }
            setState(1355);
            match(MizarParser::T__106);
          }
          setState(1358);
          predicateSymbol();
          setState(1359);
          termExpressionList(); 
        }
        setState(1365);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1366);
      predicateIdentifier();
      setState(1367);
      match(MizarParser::T__47);
      setState(1369);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MizarParser::T__24)
        | (1ULL << MizarParser::T__46)
        | (1ULL << MizarParser::T__47))) != 0) || ((((_la - 118) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 118)) & ((1ULL << (MizarParser::T__117 - 118))
        | (1ULL << (MizarParser::T__119 - 118))
        | (1ULL << (MizarParser::T__122 - 118))
        | (1ULL << (MizarParser::T__123 - 118))
        | (1ULL << (MizarParser::T__124 - 118))
        | (1ULL << (MizarParser::T__125 - 118))
        | (1ULL << (MizarParser::T__126 - 118))
        | (1ULL << (MizarParser::T__127 - 118))
        | (1ULL << (MizarParser::T__128 - 118))
        | (1ULL << (MizarParser::T__129 - 118))
        | (1ULL << (MizarParser::T__130 - 118))
        | (1ULL << (MizarParser::T__131 - 118))
        | (1ULL << (MizarParser::FUNCTOR_SYMBOL - 118))
        | (1ULL << (MizarParser::STRUCTURE_SYMBOL - 118))
        | (1ULL << (MizarParser::LEFT_FUNCTOR_SYMBOL - 118))
        | (1ULL << (MizarParser::IDENTIFIER - 118))
        | (1ULL << (MizarParser::NUMERAL - 118)))) != 0)) {
        setState(1368);
        termExpressionList();
      }
      setState(1371);
      match(MizarParser::T__49);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1373);
      termExpression(0);
      setState(1374);
      match(MizarParser::T__32);
      setState(1376); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(1375);
                adjective();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(1378); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1380);
      termExpression(0);
      setState(1381);
      match(MizarParser::T__32);
      setState(1382);
      typeExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantifiedFormulaExpressionContext ------------------------------------------------------------------

MizarParser::QuantifiedFormulaExpressionContext::QuantifiedFormulaExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::QualifiedVariablesContext* MizarParser::QuantifiedFormulaExpressionContext::qualifiedVariables() {
  return getRuleContext<MizarParser::QualifiedVariablesContext>(0);
}

std::vector<MizarParser::FormulaExpressionContext *> MizarParser::QuantifiedFormulaExpressionContext::formulaExpression() {
  return getRuleContexts<MizarParser::FormulaExpressionContext>();
}

MizarParser::FormulaExpressionContext* MizarParser::QuantifiedFormulaExpressionContext::formulaExpression(size_t i) {
  return getRuleContext<MizarParser::FormulaExpressionContext>(i);
}

MizarParser::QuantifiedFormulaExpressionContext* MizarParser::QuantifiedFormulaExpressionContext::quantifiedFormulaExpression() {
  return getRuleContext<MizarParser::QuantifiedFormulaExpressionContext>(0);
}


size_t MizarParser::QuantifiedFormulaExpressionContext::getRuleIndex() const {
  return MizarParser::RuleQuantifiedFormulaExpression;
}

void MizarParser::QuantifiedFormulaExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantifiedFormulaExpression(this);
}

void MizarParser::QuantifiedFormulaExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantifiedFormulaExpression(this);
}

MizarParser::QuantifiedFormulaExpressionContext* MizarParser::quantifiedFormulaExpression() {
  QuantifiedFormulaExpressionContext *_localctx = _tracker.createInstance<QuantifiedFormulaExpressionContext>(_ctx, getState());
  enterRule(_localctx, 290, MizarParser::RuleQuantifiedFormulaExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1402);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__15: {
        enterOuterAlt(_localctx, 1);
        setState(1386);
        match(MizarParser::T__15);
        setState(1387);
        qualifiedVariables();
        setState(1390);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == MizarParser::T__111) {
          setState(1388);
          match(MizarParser::T__111);
          setState(1389);
          formulaExpression(0);
        }
        setState(1395);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case MizarParser::T__112: {
            setState(1392);
            match(MizarParser::T__112);
            setState(1393);
            formulaExpression(0);
            break;
          }

          case MizarParser::T__15:
          case MizarParser::T__113: {
            setState(1394);
            quantifiedFormulaExpression();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case MizarParser::T__113: {
        enterOuterAlt(_localctx, 2);
        setState(1397);
        match(MizarParser::T__113);
        setState(1398);
        qualifiedVariables();
        setState(1399);
        match(MizarParser::T__111);
        setState(1400);
        formulaExpression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedVariablesContext ------------------------------------------------------------------

MizarParser::QualifiedVariablesContext::QualifiedVariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ImplicitlyQualifiedVariablesContext* MizarParser::QualifiedVariablesContext::implicitlyQualifiedVariables() {
  return getRuleContext<MizarParser::ImplicitlyQualifiedVariablesContext>(0);
}

MizarParser::ExplicitlyQualifiedVariablesContext* MizarParser::QualifiedVariablesContext::explicitlyQualifiedVariables() {
  return getRuleContext<MizarParser::ExplicitlyQualifiedVariablesContext>(0);
}


size_t MizarParser::QualifiedVariablesContext::getRuleIndex() const {
  return MizarParser::RuleQualifiedVariables;
}

void MizarParser::QualifiedVariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedVariables(this);
}

void MizarParser::QualifiedVariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedVariables(this);
}

MizarParser::QualifiedVariablesContext* MizarParser::qualifiedVariables() {
  QualifiedVariablesContext *_localctx = _tracker.createInstance<QualifiedVariablesContext>(_ctx, getState());
  enterRule(_localctx, 292, MizarParser::RuleQualifiedVariables);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1410);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1404);
      implicitlyQualifiedVariables();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1405);
      explicitlyQualifiedVariables();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1406);
      explicitlyQualifiedVariables();
      setState(1407);
      match(MizarParser::T__2);
      setState(1408);
      implicitlyQualifiedVariables();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImplicitlyQualifiedVariablesContext ------------------------------------------------------------------

MizarParser::ImplicitlyQualifiedVariablesContext::ImplicitlyQualifiedVariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::VariablesContext* MizarParser::ImplicitlyQualifiedVariablesContext::variables() {
  return getRuleContext<MizarParser::VariablesContext>(0);
}


size_t MizarParser::ImplicitlyQualifiedVariablesContext::getRuleIndex() const {
  return MizarParser::RuleImplicitlyQualifiedVariables;
}

void MizarParser::ImplicitlyQualifiedVariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImplicitlyQualifiedVariables(this);
}

void MizarParser::ImplicitlyQualifiedVariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImplicitlyQualifiedVariables(this);
}

MizarParser::ImplicitlyQualifiedVariablesContext* MizarParser::implicitlyQualifiedVariables() {
  ImplicitlyQualifiedVariablesContext *_localctx = _tracker.createInstance<ImplicitlyQualifiedVariablesContext>(_ctx, getState());
  enterRule(_localctx, 294, MizarParser::RuleImplicitlyQualifiedVariables);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1412);
    variables();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitlyQualifiedVariablesContext ------------------------------------------------------------------

MizarParser::ExplicitlyQualifiedVariablesContext::ExplicitlyQualifiedVariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::QualifiedSegmentContext *> MizarParser::ExplicitlyQualifiedVariablesContext::qualifiedSegment() {
  return getRuleContexts<MizarParser::QualifiedSegmentContext>();
}

MizarParser::QualifiedSegmentContext* MizarParser::ExplicitlyQualifiedVariablesContext::qualifiedSegment(size_t i) {
  return getRuleContext<MizarParser::QualifiedSegmentContext>(i);
}


size_t MizarParser::ExplicitlyQualifiedVariablesContext::getRuleIndex() const {
  return MizarParser::RuleExplicitlyQualifiedVariables;
}

void MizarParser::ExplicitlyQualifiedVariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitlyQualifiedVariables(this);
}

void MizarParser::ExplicitlyQualifiedVariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitlyQualifiedVariables(this);
}

MizarParser::ExplicitlyQualifiedVariablesContext* MizarParser::explicitlyQualifiedVariables() {
  ExplicitlyQualifiedVariablesContext *_localctx = _tracker.createInstance<ExplicitlyQualifiedVariablesContext>(_ctx, getState());
  enterRule(_localctx, 296, MizarParser::RuleExplicitlyQualifiedVariables);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1414);
    qualifiedSegment();
    setState(1419);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1415);
        match(MizarParser::T__2);
        setState(1416);
        qualifiedSegment(); 
      }
      setState(1421);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedSegmentContext ------------------------------------------------------------------

MizarParser::QualifiedSegmentContext::QualifiedSegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::VariablesContext* MizarParser::QualifiedSegmentContext::variables() {
  return getRuleContext<MizarParser::VariablesContext>(0);
}

MizarParser::QualificationContext* MizarParser::QualifiedSegmentContext::qualification() {
  return getRuleContext<MizarParser::QualificationContext>(0);
}


size_t MizarParser::QualifiedSegmentContext::getRuleIndex() const {
  return MizarParser::RuleQualifiedSegment;
}

void MizarParser::QualifiedSegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedSegment(this);
}

void MizarParser::QualifiedSegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedSegment(this);
}

MizarParser::QualifiedSegmentContext* MizarParser::qualifiedSegment() {
  QualifiedSegmentContext *_localctx = _tracker.createInstance<QualifiedSegmentContext>(_ctx, getState());
  enterRule(_localctx, 298, MizarParser::RuleQualifiedSegment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1422);
    variables();
    setState(1423);
    qualification();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariablesContext ------------------------------------------------------------------

MizarParser::VariablesContext::VariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::VariableIdentifierContext *> MizarParser::VariablesContext::variableIdentifier() {
  return getRuleContexts<MizarParser::VariableIdentifierContext>();
}

MizarParser::VariableIdentifierContext* MizarParser::VariablesContext::variableIdentifier(size_t i) {
  return getRuleContext<MizarParser::VariableIdentifierContext>(i);
}


size_t MizarParser::VariablesContext::getRuleIndex() const {
  return MizarParser::RuleVariables;
}

void MizarParser::VariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariables(this);
}

void MizarParser::VariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariables(this);
}

MizarParser::VariablesContext* MizarParser::variables() {
  VariablesContext *_localctx = _tracker.createInstance<VariablesContext>(_ctx, getState());
  enterRule(_localctx, 300, MizarParser::RuleVariables);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1425);
    variableIdentifier();
    setState(1430);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(1426);
      match(MizarParser::T__2);
      setState(1427);
      variableIdentifier();
      setState(1432);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualificationContext ------------------------------------------------------------------

MizarParser::QualificationContext::QualificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::TypeExpressionContext* MizarParser::QualificationContext::typeExpression() {
  return getRuleContext<MizarParser::TypeExpressionContext>(0);
}


size_t MizarParser::QualificationContext::getRuleIndex() const {
  return MizarParser::RuleQualification;
}

void MizarParser::QualificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualification(this);
}

void MizarParser::QualificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualification(this);
}

MizarParser::QualificationContext* MizarParser::qualification() {
  QualificationContext *_localctx = _tracker.createInstance<QualificationContext>(_ctx, getState());
  enterRule(_localctx, 302, MizarParser::RuleQualification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1433);
    _la = _input->LA(1);
    if (!(_la == MizarParser::T__114

    || _la == MizarParser::T__115)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1434);
    typeExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeExpressionContext ------------------------------------------------------------------

MizarParser::TypeExpressionContext::TypeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::AdjectiveClusterContext* MizarParser::TypeExpressionContext::adjectiveCluster() {
  return getRuleContext<MizarParser::AdjectiveClusterContext>(0);
}

MizarParser::RadixTypeExpressionContext* MizarParser::TypeExpressionContext::radixTypeExpression() {
  return getRuleContext<MizarParser::RadixTypeExpressionContext>(0);
}


size_t MizarParser::TypeExpressionContext::getRuleIndex() const {
  return MizarParser::RuleTypeExpression;
}

void MizarParser::TypeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeExpression(this);
}

void MizarParser::TypeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeExpression(this);
}

MizarParser::TypeExpressionContext* MizarParser::typeExpression() {
  TypeExpressionContext *_localctx = _tracker.createInstance<TypeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 304, MizarParser::RuleTypeExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1436);
    adjectiveCluster();
    setState(1437);
    radixTypeExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RadixTypeExpressionContext ------------------------------------------------------------------

MizarParser::RadixTypeExpressionContext::RadixTypeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::RadixTypeContext* MizarParser::RadixTypeExpressionContext::radixType() {
  return getRuleContext<MizarParser::RadixTypeContext>(0);
}


size_t MizarParser::RadixTypeExpressionContext::getRuleIndex() const {
  return MizarParser::RuleRadixTypeExpression;
}

void MizarParser::RadixTypeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRadixTypeExpression(this);
}

void MizarParser::RadixTypeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRadixTypeExpression(this);
}

MizarParser::RadixTypeExpressionContext* MizarParser::radixTypeExpression() {
  RadixTypeExpressionContext *_localctx = _tracker.createInstance<RadixTypeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 306, MizarParser::RuleRadixTypeExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1444);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__24: {
        enterOuterAlt(_localctx, 1);
        setState(1439);
        match(MizarParser::T__24);
        setState(1440);
        radixType();
        setState(1441);
        match(MizarParser::T__25);
        break;
      }

      case MizarParser::T__34:
      case MizarParser::MODE_SYMBOL:
      case MizarParser::STRUCTURE_SYMBOL: {
        enterOuterAlt(_localctx, 2);
        setState(1443);
        radixType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructureTypeExpressionContext ------------------------------------------------------------------

MizarParser::StructureTypeExpressionContext::StructureTypeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::StructureSymbolContext* MizarParser::StructureTypeExpressionContext::structureSymbol() {
  return getRuleContext<MizarParser::StructureSymbolContext>(0);
}

MizarParser::TermExpressionListContext* MizarParser::StructureTypeExpressionContext::termExpressionList() {
  return getRuleContext<MizarParser::TermExpressionListContext>(0);
}

MizarParser::AdjectiveClusterContext* MizarParser::StructureTypeExpressionContext::adjectiveCluster() {
  return getRuleContext<MizarParser::AdjectiveClusterContext>(0);
}


size_t MizarParser::StructureTypeExpressionContext::getRuleIndex() const {
  return MizarParser::RuleStructureTypeExpression;
}

void MizarParser::StructureTypeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructureTypeExpression(this);
}

void MizarParser::StructureTypeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructureTypeExpression(this);
}

MizarParser::StructureTypeExpressionContext* MizarParser::structureTypeExpression() {
  StructureTypeExpressionContext *_localctx = _tracker.createInstance<StructureTypeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 308, MizarParser::RuleStructureTypeExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1460);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1446);
      match(MizarParser::T__24);
      setState(1447);
      structureSymbol();
      setState(1450);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MizarParser::T__26) {
        setState(1448);
        match(MizarParser::T__26);
        setState(1449);
        termExpressionList();
      }
      setState(1452);
      match(MizarParser::T__25);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1454);
      adjectiveCluster();
      setState(1455);
      structureSymbol();
      setState(1458);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MizarParser::T__26) {
        setState(1456);
        match(MizarParser::T__26);
        setState(1457);
        termExpressionList();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RadixTypeContext ------------------------------------------------------------------

MizarParser::RadixTypeContext::RadixTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::ModeSymbolContext* MizarParser::RadixTypeContext::modeSymbol() {
  return getRuleContext<MizarParser::ModeSymbolContext>(0);
}

MizarParser::TermExpressionListContext* MizarParser::RadixTypeContext::termExpressionList() {
  return getRuleContext<MizarParser::TermExpressionListContext>(0);
}

MizarParser::StructureSymbolContext* MizarParser::RadixTypeContext::structureSymbol() {
  return getRuleContext<MizarParser::StructureSymbolContext>(0);
}


size_t MizarParser::RadixTypeContext::getRuleIndex() const {
  return MizarParser::RuleRadixType;
}

void MizarParser::RadixTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRadixType(this);
}

void MizarParser::RadixTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRadixType(this);
}

MizarParser::RadixTypeContext* MizarParser::radixType() {
  RadixTypeContext *_localctx = _tracker.createInstance<RadixTypeContext>(_ctx, getState());
  enterRule(_localctx, 310, MizarParser::RuleRadixType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1472);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MizarParser::T__34:
      case MizarParser::MODE_SYMBOL: {
        enterOuterAlt(_localctx, 1);
        setState(1462);
        modeSymbol();
        setState(1465);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx)) {
        case 1: {
          setState(1463);
          match(MizarParser::T__33);
          setState(1464);
          termExpressionList();
          break;
        }

        }
        break;
      }

      case MizarParser::STRUCTURE_SYMBOL: {
        enterOuterAlt(_localctx, 2);
        setState(1467);
        structureSymbol();
        setState(1470);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
        case 1: {
          setState(1468);
          match(MizarParser::T__26);
          setState(1469);
          termExpressionList();
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeExpressionListContext ------------------------------------------------------------------

MizarParser::TypeExpressionListContext::TypeExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::TypeExpressionContext *> MizarParser::TypeExpressionListContext::typeExpression() {
  return getRuleContexts<MizarParser::TypeExpressionContext>();
}

MizarParser::TypeExpressionContext* MizarParser::TypeExpressionListContext::typeExpression(size_t i) {
  return getRuleContext<MizarParser::TypeExpressionContext>(i);
}


size_t MizarParser::TypeExpressionListContext::getRuleIndex() const {
  return MizarParser::RuleTypeExpressionList;
}

void MizarParser::TypeExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeExpressionList(this);
}

void MizarParser::TypeExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeExpressionList(this);
}

MizarParser::TypeExpressionListContext* MizarParser::typeExpressionList() {
  TypeExpressionListContext *_localctx = _tracker.createInstance<TypeExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 312, MizarParser::RuleTypeExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1474);
    typeExpression();
    setState(1479);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MizarParser::T__2) {
      setState(1475);
      match(MizarParser::T__2);
      setState(1476);
      typeExpression();
      setState(1481);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermExpressionContext ------------------------------------------------------------------

MizarParser::TermExpressionContext::TermExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::ArgumentsContext *> MizarParser::TermExpressionContext::arguments() {
  return getRuleContexts<MizarParser::ArgumentsContext>();
}

MizarParser::ArgumentsContext* MizarParser::TermExpressionContext::arguments(size_t i) {
  return getRuleContext<MizarParser::ArgumentsContext>(i);
}

std::vector<MizarParser::FunctorSymbolContext *> MizarParser::TermExpressionContext::functorSymbol() {
  return getRuleContexts<MizarParser::FunctorSymbolContext>();
}

MizarParser::FunctorSymbolContext* MizarParser::TermExpressionContext::functorSymbol(size_t i) {
  return getRuleContext<MizarParser::FunctorSymbolContext>(i);
}

MizarParser::UnitaryTermContext* MizarParser::TermExpressionContext::unitaryTerm() {
  return getRuleContext<MizarParser::UnitaryTermContext>(0);
}

MizarParser::TermExpressionContext* MizarParser::TermExpressionContext::termExpression() {
  return getRuleContext<MizarParser::TermExpressionContext>(0);
}

MizarParser::TypeExpressionContext* MizarParser::TermExpressionContext::typeExpression() {
  return getRuleContext<MizarParser::TypeExpressionContext>(0);
}


size_t MizarParser::TermExpressionContext::getRuleIndex() const {
  return MizarParser::RuleTermExpression;
}

void MizarParser::TermExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTermExpression(this);
}

void MizarParser::TermExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTermExpression(this);
}


MizarParser::TermExpressionContext* MizarParser::termExpression() {
   return termExpression(0);
}

MizarParser::TermExpressionContext* MizarParser::termExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MizarParser::TermExpressionContext *_localctx = _tracker.createInstance<TermExpressionContext>(_ctx, parentState);
  MizarParser::TermExpressionContext *previousContext = _localctx;
  size_t startState = 314;
  enterRecursionRule(_localctx, 314, MizarParser::RuleTermExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1507);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx)) {
    case 1: {
      setState(1484);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MizarParser::T__24)
        | (1ULL << MizarParser::T__46)
        | (1ULL << MizarParser::T__47))) != 0) || ((((_la - 118) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 118)) & ((1ULL << (MizarParser::T__117 - 118))
        | (1ULL << (MizarParser::T__119 - 118))
        | (1ULL << (MizarParser::T__122 - 118))
        | (1ULL << (MizarParser::T__123 - 118))
        | (1ULL << (MizarParser::T__124 - 118))
        | (1ULL << (MizarParser::T__125 - 118))
        | (1ULL << (MizarParser::T__126 - 118))
        | (1ULL << (MizarParser::T__127 - 118))
        | (1ULL << (MizarParser::T__128 - 118))
        | (1ULL << (MizarParser::T__129 - 118))
        | (1ULL << (MizarParser::T__130 - 118))
        | (1ULL << (MizarParser::T__131 - 118))
        | (1ULL << (MizarParser::STRUCTURE_SYMBOL - 118))
        | (1ULL << (MizarParser::LEFT_FUNCTOR_SYMBOL - 118))
        | (1ULL << (MizarParser::IDENTIFIER - 118))
        | (1ULL << (MizarParser::NUMERAL - 118)))) != 0)) {
        setState(1483);
        arguments();
      }
      setState(1495);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1487); 
          _errHandler->sync(this);
          _la = _input->LA(1);
          do {
            setState(1486);
            functorSymbol();
            setState(1489); 
            _errHandler->sync(this);
            _la = _input->LA(1);
          } while (_la == MizarParser::FUNCTOR_SYMBOL);
          setState(1491);
          arguments(); 
        }
        setState(1497);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx);
      }
      setState(1499); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(1498);
                functorSymbol();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(1501); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(1504);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 143, _ctx)) {
      case 1: {
        setState(1503);
        arguments();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(1506);
      unitaryTerm();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1514);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TermExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTermExpression);
        setState(1509);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(1510);
        match(MizarParser::T__116);
        setState(1511);
        typeExpression(); 
      }
      setState(1516);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnitaryTermContext ------------------------------------------------------------------

MizarParser::UnitaryTermContext::UnitaryTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::TermExpressionContext* MizarParser::UnitaryTermContext::termExpression() {
  return getRuleContext<MizarParser::TermExpressionContext>(0);
}

MizarParser::LeftFunctorBracketContext* MizarParser::UnitaryTermContext::leftFunctorBracket() {
  return getRuleContext<MizarParser::LeftFunctorBracketContext>(0);
}

MizarParser::TermExpressionListContext* MizarParser::UnitaryTermContext::termExpressionList() {
  return getRuleContext<MizarParser::TermExpressionListContext>(0);
}

MizarParser::RightFunctorBracketContext* MizarParser::UnitaryTermContext::rightFunctorBracket() {
  return getRuleContext<MizarParser::RightFunctorBracketContext>(0);
}

MizarParser::FunctorIdentifierContext* MizarParser::UnitaryTermContext::functorIdentifier() {
  return getRuleContext<MizarParser::FunctorIdentifierContext>(0);
}

MizarParser::StructureSymbolContext* MizarParser::UnitaryTermContext::structureSymbol() {
  return getRuleContext<MizarParser::StructureSymbolContext>(0);
}

MizarParser::VariableIdentifierContext* MizarParser::UnitaryTermContext::variableIdentifier() {
  return getRuleContext<MizarParser::VariableIdentifierContext>(0);
}

MizarParser::SentenceContext* MizarParser::UnitaryTermContext::sentence() {
  return getRuleContext<MizarParser::SentenceContext>(0);
}

std::vector<MizarParser::PostqualificationContext *> MizarParser::UnitaryTermContext::postqualification() {
  return getRuleContexts<MizarParser::PostqualificationContext>();
}

MizarParser::PostqualificationContext* MizarParser::UnitaryTermContext::postqualification(size_t i) {
  return getRuleContext<MizarParser::PostqualificationContext>(i);
}

tree::TerminalNode* MizarParser::UnitaryTermContext::NUMERAL() {
  return getToken(MizarParser::NUMERAL, 0);
}

MizarParser::SelectorSymbolContext* MizarParser::UnitaryTermContext::selectorSymbol() {
  return getRuleContext<MizarParser::SelectorSymbolContext>(0);
}

MizarParser::TypeExpressionContext* MizarParser::UnitaryTermContext::typeExpression() {
  return getRuleContext<MizarParser::TypeExpressionContext>(0);
}

MizarParser::PrivateDefinitionParameterContext* MizarParser::UnitaryTermContext::privateDefinitionParameter() {
  return getRuleContext<MizarParser::PrivateDefinitionParameterContext>(0);
}


size_t MizarParser::UnitaryTermContext::getRuleIndex() const {
  return MizarParser::RuleUnitaryTerm;
}

void MizarParser::UnitaryTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnitaryTerm(this);
}

void MizarParser::UnitaryTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnitaryTerm(this);
}

MizarParser::UnitaryTermContext* MizarParser::unitaryTerm() {
  UnitaryTermContext *_localctx = _tracker.createInstance<UnitaryTermContext>(_ctx, getState());
  enterRule(_localctx, 316, MizarParser::RuleUnitaryTerm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1578);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 149, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1517);
      match(MizarParser::T__24);
      setState(1518);
      termExpression(0);
      setState(1519);
      match(MizarParser::T__25);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1521);
      leftFunctorBracket();
      setState(1522);
      termExpressionList();
      setState(1523);
      rightFunctorBracket();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1525);
      functorIdentifier();
      setState(1526);
      match(MizarParser::T__24);
      setState(1528);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << MizarParser::T__24)
        | (1ULL << MizarParser::T__46)
        | (1ULL << MizarParser::T__47))) != 0) || ((((_la - 118) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 118)) & ((1ULL << (MizarParser::T__117 - 118))
        | (1ULL << (MizarParser::T__119 - 118))
        | (1ULL << (MizarParser::T__122 - 118))
        | (1ULL << (MizarParser::T__123 - 118))
        | (1ULL << (MizarParser::T__124 - 118))
        | (1ULL << (MizarParser::T__125 - 118))
        | (1ULL << (MizarParser::T__126 - 118))
        | (1ULL << (MizarParser::T__127 - 118))
        | (1ULL << (MizarParser::T__128 - 118))
        | (1ULL << (MizarParser::T__129 - 118))
        | (1ULL << (MizarParser::T__130 - 118))
        | (1ULL << (MizarParser::T__131 - 118))
        | (1ULL << (MizarParser::FUNCTOR_SYMBOL - 118))
        | (1ULL << (MizarParser::STRUCTURE_SYMBOL - 118))
        | (1ULL << (MizarParser::LEFT_FUNCTOR_SYMBOL - 118))
        | (1ULL << (MizarParser::IDENTIFIER - 118))
        | (1ULL << (MizarParser::NUMERAL - 118)))) != 0)) {
        setState(1527);
        termExpressionList();
      }
      setState(1530);
      match(MizarParser::T__25);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1532);
      structureSymbol();
      setState(1533);
      match(MizarParser::T__27);
      setState(1534);
      termExpressionList();
      setState(1535);
      match(MizarParser::T__28);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1537);
      match(MizarParser::T__117);
      setState(1538);
      structureSymbol();
      setState(1539);
      match(MizarParser::T__33);
      setState(1540);
      termExpression(0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1542);
      variableIdentifier();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1543);
      match(MizarParser::T__46);
      setState(1544);
      termExpression(0);
      setState(1548);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MizarParser::T__120) {
        setState(1545);
        postqualification();
        setState(1550);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1551);
      match(MizarParser::T__36);
      setState(1552);
      sentence();
      setState(1553);
      match(MizarParser::T__48);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1555);
      match(MizarParser::T__117);
      setState(1556);
      match(MizarParser::T__34);
      setState(1557);
      match(MizarParser::T__33);
      setState(1558);
      match(MizarParser::T__118);
      setState(1559);
      termExpression(0);
      setState(1563);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1560);
          postqualification(); 
        }
        setState(1565);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx);
      }
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1566);
      match(MizarParser::NUMERAL);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1567);
      match(MizarParser::T__117);
      setState(1568);
      selectorSymbol();
      setState(1569);
      match(MizarParser::T__33);
      setState(1570);
      termExpression(0);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1572);
      match(MizarParser::T__117);
      setState(1573);
      selectorSymbol();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1574);
      match(MizarParser::T__117);
      setState(1575);
      typeExpression();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1576);
      privateDefinitionParameter();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1577);
      match(MizarParser::T__119);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

MizarParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::UnitaryTermContext* MizarParser::ArgumentsContext::unitaryTerm() {
  return getRuleContext<MizarParser::UnitaryTermContext>(0);
}

MizarParser::TermExpressionListContext* MizarParser::ArgumentsContext::termExpressionList() {
  return getRuleContext<MizarParser::TermExpressionListContext>(0);
}


size_t MizarParser::ArgumentsContext::getRuleIndex() const {
  return MizarParser::RuleArguments;
}

void MizarParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void MizarParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}

MizarParser::ArgumentsContext* MizarParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 318, MizarParser::RuleArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1585);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1580);
      unitaryTerm();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1581);
      match(MizarParser::T__24);
      setState(1582);
      termExpressionList();
      setState(1583);
      match(MizarParser::T__25);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdjectiveArgumentsContext ------------------------------------------------------------------

MizarParser::AdjectiveArgumentsContext::AdjectiveArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MizarParser::TermExpressionListContext* MizarParser::AdjectiveArgumentsContext::termExpressionList() {
  return getRuleContext<MizarParser::TermExpressionListContext>(0);
}


size_t MizarParser::AdjectiveArgumentsContext::getRuleIndex() const {
  return MizarParser::RuleAdjectiveArguments;
}

void MizarParser::AdjectiveArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdjectiveArguments(this);
}

void MizarParser::AdjectiveArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdjectiveArguments(this);
}

MizarParser::AdjectiveArgumentsContext* MizarParser::adjectiveArguments() {
  AdjectiveArgumentsContext *_localctx = _tracker.createInstance<AdjectiveArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 320, MizarParser::RuleAdjectiveArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1592);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 151, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1587);
      termExpressionList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1588);
      match(MizarParser::T__24);
      setState(1589);
      termExpressionList();
      setState(1590);
      match(MizarParser::T__25);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermExpressionListContext ------------------------------------------------------------------

MizarParser::TermExpressionListContext::TermExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::TermExpressionContext *> MizarParser::TermExpressionListContext::termExpression() {
  return getRuleContexts<MizarParser::TermExpressionContext>();
}

MizarParser::TermExpressionContext* MizarParser::TermExpressionListContext::termExpression(size_t i) {
  return getRuleContext<MizarParser::TermExpressionContext>(i);
}


size_t MizarParser::TermExpressionListContext::getRuleIndex() const {
  return MizarParser::RuleTermExpressionList;
}

void MizarParser::TermExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTermExpressionList(this);
}

void MizarParser::TermExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTermExpressionList(this);
}

MizarParser::TermExpressionListContext* MizarParser::termExpressionList() {
  TermExpressionListContext *_localctx = _tracker.createInstance<TermExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 322, MizarParser::RuleTermExpressionList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1594);
    termExpression(0);
    setState(1599);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1595);
        match(MizarParser::T__2);
        setState(1596);
        termExpression(0); 
      }
      setState(1601);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostqualificationContext ------------------------------------------------------------------

MizarParser::PostqualificationContext::PostqualificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::PostqualifyingSegmentContext *> MizarParser::PostqualificationContext::postqualifyingSegment() {
  return getRuleContexts<MizarParser::PostqualifyingSegmentContext>();
}

MizarParser::PostqualifyingSegmentContext* MizarParser::PostqualificationContext::postqualifyingSegment(size_t i) {
  return getRuleContext<MizarParser::PostqualifyingSegmentContext>(i);
}


size_t MizarParser::PostqualificationContext::getRuleIndex() const {
  return MizarParser::RulePostqualification;
}

void MizarParser::PostqualificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostqualification(this);
}

void MizarParser::PostqualificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostqualification(this);
}

MizarParser::PostqualificationContext* MizarParser::postqualification() {
  PostqualificationContext *_localctx = _tracker.createInstance<PostqualificationContext>(_ctx, getState());
  enterRule(_localctx, 324, MizarParser::RulePostqualification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1602);
    match(MizarParser::T__120);
    setState(1603);
    postqualifyingSegment();
    setState(1608);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1604);
        match(MizarParser::T__2);
        setState(1605);
        postqualifyingSegment(); 
      }
      setState(1610);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostqualifyingSegmentContext ------------------------------------------------------------------

MizarParser::PostqualifyingSegmentContext::PostqualifyingSegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MizarParser::PostqualifiedVariableContext *> MizarParser::PostqualifyingSegmentContext::postqualifiedVariable() {
  return getRuleContexts<MizarParser::PostqualifiedVariableContext>();
}

MizarParser::PostqualifiedVariableContext* MizarParser::PostqualifyingSegmentContext::postqualifiedVariable(size_t i) {
  return getRuleContext<MizarParser::PostqualifiedVariableContext>(i);
}

MizarParser::TypeExpressionContext* MizarParser::PostqualifyingSegmentContext::typeExpression() {
  return getRuleContext<MizarParser::TypeExpressionContext>(0);
}


size_t MizarParser::PostqualifyingSegmentContext::getRuleIndex() const {
  return MizarParser::RulePostqualifyingSegment;
}

void MizarParser::PostqualifyingSegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostqualifyingSegment(this);
}

void MizarParser::PostqualifyingSegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostqualifyingSegment(this);
}

MizarParser::PostqualifyingSegmentContext* MizarParser::postqualifyingSegment() {
  PostqualifyingSegmentContext *_localctx = _tracker.createInstance<PostqualifyingSegmentContext>(_ctx, getState());
  enterRule(_localctx, 326, MizarParser::RulePostqualifyingSegment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1611);
    postqualifiedVariable();
    setState(1616);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1612);
        match(MizarParser::T__2);
        setState(1613);
        postqualifiedVariable(); 
      }
      setState(1618);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx);
    }
    setState(1621);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx)) {
    case 1: {
      setState(1619);
      _la = _input->LA(1);
      if (!(_la == MizarParser::T__32 || _la == MizarParser::T__121)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1620);
      typeExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostqualifiedVariableContext ------------------------------------------------------------------

MizarParser::PostqualifiedVariableContext::PostqualifiedVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MizarParser::PostqualifiedVariableContext::IDENTIFIER() {
  return getToken(MizarParser::IDENTIFIER, 0);
}


size_t MizarParser::PostqualifiedVariableContext::getRuleIndex() const {
  return MizarParser::RulePostqualifiedVariable;
}

void MizarParser::PostqualifiedVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostqualifiedVariable(this);
}

void MizarParser::PostqualifiedVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostqualifiedVariable(this);
}

MizarParser::PostqualifiedVariableContext* MizarParser::postqualifiedVariable() {
  PostqualifiedVariableContext *_localctx = _tracker.createInstance<PostqualifiedVariableContext>(_ctx, getState());
  enterRule(_localctx, 328, MizarParser::RulePostqualifiedVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1623);
    match(MizarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrivateDefinitionParameterContext ------------------------------------------------------------------

MizarParser::PrivateDefinitionParameterContext::PrivateDefinitionParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MizarParser::PrivateDefinitionParameterContext::getRuleIndex() const {
  return MizarParser::RulePrivateDefinitionParameter;
}

void MizarParser::PrivateDefinitionParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrivateDefinitionParameter(this);
}

void MizarParser::PrivateDefinitionParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MizarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrivateDefinitionParameter(this);
}

MizarParser::PrivateDefinitionParameterContext* MizarParser::privateDefinitionParameter() {
  PrivateDefinitionParameterContext *_localctx = _tracker.createInstance<PrivateDefinitionParameterContext>(_ctx, getState());
  enterRule(_localctx, 330, MizarParser::RulePrivateDefinitionParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1625);
    _la = _input->LA(1);
    if (!(((((_la - 123) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 123)) & ((1ULL << (MizarParser::T__122 - 123))
      | (1ULL << (MizarParser::T__123 - 123))
      | (1ULL << (MizarParser::T__124 - 123))
      | (1ULL << (MizarParser::T__125 - 123))
      | (1ULL << (MizarParser::T__126 - 123))
      | (1ULL << (MizarParser::T__127 - 123))
      | (1ULL << (MizarParser::T__128 - 123))
      | (1ULL << (MizarParser::T__129 - 123))
      | (1ULL << (MizarParser::T__130 - 123))
      | (1ULL << (MizarParser::T__131 - 123)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MizarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 143: return formulaExpressionSempred(dynamic_cast<FormulaExpressionContext *>(context), predicateIndex);
    case 157: return termExpressionSempred(dynamic_cast<TermExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MizarParser::formulaExpressionSempred(FormulaExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool MizarParser::termExpressionSempred(TermExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MizarParser::_decisionToDFA;
atn::PredictionContextCache MizarParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MizarParser::_atn;
std::vector<uint16_t> MizarParser::_serializedATN;

std::vector<std::string> MizarParser::_ruleNames = {
  "article", "environmentDeclaration", "directive", "vocabularyDirective", 
  "vocabularyName", "libraryDirective", "articleName", "requirementDirective", 
  "requirement", "textProper", "section", "textItem", "reservation", "reservationSegment", 
  "reservedIdentifiers", "reservedIdentifier", "definitionalItem", "registrationItem", 
  "notationItem", "definitionalBlock", "registrationBlock", "notationBlock", 
  "definitionItem", "notationDeclaration", "lociDeclaration", "permissiveAssumption", 
  "definition", "redefinition", "structureDefinition", "ancestors", "structureSymbol", 
  "loci", "fields", "locus", "variableIdentifier", "fieldSegment", "selectorSymbol", 
  "specification", "modeDefinition", "modePattern", "modeSymbol", "modeSynonym", 
  "definiens", "simpleDefiniens", "labelIdentifier", "conditionalDefiniens", 
  "partialDefiniensList", "partialDefiniens", "modeProperty", "functorDefinition", 
  "functorPattern", "functorProperty", "functorSynonym", "functorLoci", 
  "functorSymbol", "leftFunctorBracket", "rightFunctorBracket", "predicateDefinition", 
  "predicatePattern", "predicateProperty", "predicateSynonym", "predicateAntonym", 
  "predicateSymbol", "attributeDefinition", "attributePattern", "attributeSynonym", 
  "attributeAntonym", "attributeSymbol", "attributeLoci", "clusterRegistration", 
  "existentialRegistration", "adjectiveCluster", "adjective", "conditionalRegistration", 
  "functorialRegistration", "identifyRegistration", "propertyRegistration", 
  "reductionRegistration", "correctnessConditions", "correctnessCondition", 
  "theorem", "schemeItem", "schemeBlock", "schemeIdentifier", "schemeParameters", 
  "schemeConclusion", "schemePremise", "schemeSegment", "predicateSegment", 
  "predicateIdentifier", "functorSegment", "functorIdentifier", "auxiliaryItem", 
  "privateDefinition", "constantDefinition", "equatingList", "equating", 
  "privateFunctorDefinition", "privatePredicateDefinition", "privateFunctorPattern", 
  "privatePredicatePattern", "reasoning", "caseList", "caseItem", "supposeList", 
  "suppose", "reasoningItem", "skeletonItem", "generalization", "assumption", 
  "singleAssumption", "collectiveAssumption", "existentialAssumption", "conclusion", 
  "diffuseConclusion", "exemplification", "example", "statement", "linkableStatement", 
  "compactStatement", "choiceStatement", "typeChangingStatement", "typeChangeList", 
  "iterativeEquality", "diffuseStatement", "justification", "simpleJustification", 
  "proof", "straightforwardJustification", "schemeJustification", "references", 
  "reference", "schemeReference", "localReference", "localSchemeReference", 
  "libraryReference", "librarySchemeReference", "theoremNumber", "definitionNumber", 
  "schemeNumber", "conditions", "proposition", "sentence", "formulaExpression", 
  "atomicFormulaExpression", "quantifiedFormulaExpression", "qualifiedVariables", 
  "implicitlyQualifiedVariables", "explicitlyQualifiedVariables", "qualifiedSegment", 
  "variables", "qualification", "typeExpression", "radixTypeExpression", 
  "structureTypeExpression", "radixType", "typeExpressionList", "termExpression", 
  "unitaryTerm", "arguments", "adjectiveArguments", "termExpressionList", 
  "postqualification", "postqualifyingSegment", "postqualifiedVariable", 
  "privateDefinitionParameter"
};

std::vector<std::string> MizarParser::_literalNames = {
  "", "'environ'", "'vocabularies'", "','", "';'", "'notations'", "'constructors'", 
  "'registrations'", "'definitions'", "'expansions'", "'equalities'", "'theorems'", 
  "'schemes'", "'requirements'", "'begin'", "'reserve'", "'for'", "'definition'", 
  "'end'", "'registration'", "'notation'", "'let'", "'such'", "'redefine'", 
  "'struct'", "'('", "')'", "'over'", "'(#'", "'#)'", "'->'", "'mode'", 
  "'means'", "'is'", "'of'", "'set'", "'synonym'", "':'", "'otherwise'", 
  "'if'", "'sethood'", "'func'", "'equals'", "'commutativity'", "'idempotence'", 
  "'involutiveness'", "'projectivity'", "'{'", "'['", "'}'", "']'", "'pred'", 
  "'symmetry'", "'asymmetry'", "'connectedness'", "'reflexivity'", "'irreflexivity'", 
  "'antonym'", "'='", "'attr'", "'cluster'", "'non'", "'identify'", "'with'", 
  "'when'", "'reduce'", "'to'", "'correctness'", "'existence'", "'uniqueness'", 
  "'coherence'", "'compatibility'", "'consistency'", "'reducibility'", "'theorem'", 
  "'scheme'", "'provided'", "'and'", "'proof'", "'deffunc'", "'defpred'", 
  "'then'", "'per'", "'cases'", "'case'", "'suppose'", "'assume'", "'given'", 
  "'thus'", "'hence'", "'hereby'", "'take'", "'consider'", "'reconsider'", 
  "'as'", "'.='", "'now'", "'by'", "'from'", "'def'", "'sch'", "'that'", 
  "'&'", "'...'", "'or'", "'implies'", "'iff'", "'not'", "'contradiction'", 
  "'thesis'", "'does'", "'do'", "'st'", "'holds'", "'ex'", "'being'", "'be'", 
  "'qua'", "'the'", "'all'", "'it'", "'where'", "'are'", "'$1'", "'$2'", 
  "'$3'", "'$4'", "'$5'", "'$6'", "'$7'", "'$8'", "'$9'", "'$10'"
};

std::vector<std::string> MizarParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "PREDICATE_SYMBOL", "FUNCTOR_SYMBOL", "MODE_SYMBOL", 
  "STRUCTURE_SYMBOL", "SELECTOR_SYMBOL", "ATTRIBUTE_SYMBOL", "LEFT_FUNCTOR_SYMBOL", 
  "RIGHT_FUNCTOR_SYMBOL", "FILE_NAME", "IDENTIFIER", "NUMERAL", "WHITE_SPACE"
};

dfa::Vocabulary MizarParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MizarParser::_tokenNames;

MizarParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x92, 0x65e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 
    0x94, 0x9, 0x94, 0x4, 0x95, 0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 
    0x9, 0x97, 0x4, 0x98, 0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 
    0x9a, 0x4, 0x9b, 0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 
    0x4, 0x9e, 0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 
    0xa1, 0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
    0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 0x9, 
    0xa7, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x154, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x157, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0x15c, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x7, 0x5, 0x162, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x165, 0xb, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x7, 0x7, 0x16f, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x172, 0xb, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x7, 0x9, 0x17c, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x17f, 0xb, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x6, 0xb, 0x186, 
    0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x187, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x18c, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x18f, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x198, 0xa, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x19e, 0xa, 0xe, 0xc, 
    0xe, 0xe, 0xe, 0x1a1, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x1ac, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x1af, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x7, 0x15, 0x1c0, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x1c3, 0xb, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x1ce, 0xa, 0x16, 0xc, 0x16, 
    0xe, 0x16, 0x1d1, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x7, 0x17, 0x1d8, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x1db, 
    0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 
    0x18, 0x1e2, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x1ea, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x1f0, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x5, 0x1c, 0x1fb, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x202, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x209, 0xa, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x20e, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 
    0x1f, 0x218, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x21b, 0xb, 0x1f, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x222, 
    0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x225, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x7, 0x22, 0x22a, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x22d, 
    0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x7, 0x25, 0x236, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 
    0x239, 0xb, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x245, 
    0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x249, 0xa, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x251, 
    0xa, 0x28, 0x3, 0x28, 0x7, 0x28, 0x254, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 
    0x257, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x25c, 
    0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
    0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x268, 
    0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x26e, 
    0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x272, 0xa, 0x2d, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x27a, 
    0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x280, 
    0xa, 0x2f, 0x5, 0x2f, 0x282, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x7, 0x30, 0x287, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x28a, 0xb, 0x30, 
    0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x28e, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x5, 0x33, 0x29a, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x5, 0x33, 0x29e, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x7, 0x33, 
    0x2a3, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x2a6, 0xb, 0x33, 0x3, 0x34, 
    0x5, 0x34, 0x2a9, 0xa, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x2ad, 
    0xa, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x2b3, 
    0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 
    0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x2c4, 0xa, 0x37, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 
    0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x2d0, 0xa, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x2d5, 0xa, 0x3b, 0xc, 0x3b, 0xe, 0x3b, 
    0x2d8, 0xb, 0x3b, 0x3, 0x3c, 0x5, 0x3c, 0x2db, 0xa, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x5, 0x3c, 0x2df, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 
    0x2fd, 0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x314, 0xa, 0x46, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x319, 0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x7, 
    0x49, 0x323, 0xa, 0x49, 0xc, 0x49, 0xe, 0x49, 0x326, 0xb, 0x49, 0x3, 
    0x4a, 0x5, 0x4a, 0x329, 0xa, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x32c, 0xa, 
    0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 
    0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x33f, 
    0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 
    0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x7, 0x4d, 0x351, 0xa, 0x4d, 
    0xc, 0x4d, 0xe, 0x4d, 0x354, 0xb, 0x4d, 0x5, 0x4d, 0x356, 0xa, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x7, 0x50, 0x369, 0xa, 0x50, 
    0xc, 0x50, 0xe, 0x50, 0x36c, 0xb, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
    0x3, 0x50, 0x5, 0x50, 0x372, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 
    0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x7, 0x54, 0x389, 
    0xa, 0x54, 0xc, 0x54, 0xe, 0x54, 0x38c, 0xb, 0x54, 0x5, 0x54, 0x38e, 
    0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 
    0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x7, 0x56, 0x399, 0xa, 0x56, 
    0xc, 0x56, 0xe, 0x56, 0x39c, 0xb, 0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 
    0x3, 0x58, 0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x3a4, 0xa, 0x59, 0x3, 0x5a, 
    0x3, 0x5a, 0x3, 0x5a, 0x7, 0x5a, 0x3a9, 0xa, 0x5a, 0xc, 0x5a, 0xe, 0x5a, 
    0x3ac, 0xb, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x3b0, 0xa, 0x5a, 
    0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 
    0x5c, 0x7, 0x5c, 0x3b9, 0xa, 0x5c, 0xc, 0x5c, 0xe, 0x5c, 0x3bc, 0xb, 
    0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x3c0, 0xa, 0x5c, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x5, 
    0x5e, 0x3c9, 0xa, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 
    0x3ce, 0xa, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 
    0x3, 0x61, 0x3, 0x61, 0x7, 0x61, 0x3d7, 0xa, 0x61, 0xc, 0x61, 0xe, 0x61, 
    0x3da, 0xb, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 
    0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 
    0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x5, 0x65, 0x3ef, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x3f6, 0xa, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x67, 0x7, 0x67, 0x3fb, 0xa, 0x67, 0xc, 0x67, 0xe, 0x67, 0x3fe, 
    0xb, 0x67, 0x3, 0x67, 0x5, 0x67, 0x401, 0xa, 0x67, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x5, 0x67, 0x409, 0xa, 0x67, 
    0x5, 0x67, 0x40b, 0xa, 0x67, 0x3, 0x68, 0x6, 0x68, 0x40e, 0xa, 0x68, 
    0xd, 0x68, 0xe, 0x68, 0x40f, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 
    0x415, 0xa, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 
    0x3, 0x6a, 0x6, 0x6a, 0x41d, 0xa, 0x6a, 0xd, 0x6a, 0xe, 0x6a, 0x41e, 
    0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 0x424, 0xa, 0x6b, 0x3, 0x6b, 
    0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x5, 
    0x6c, 0x42d, 0xa, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 
    0x5, 0x6d, 0x433, 0xa, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 
    0x5, 0x6e, 0x439, 0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 
    0x3, 0x6f, 0x5, 0x6f, 0x440, 0xa, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 
    0x3, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x72, 0x3, 
    0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x44e, 0xa, 0x72, 0x3, 0x72, 
    0x3, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 0x455, 0xa, 0x73, 
    0x3, 0x73, 0x5, 0x73, 0x458, 0xa, 0x73, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 
    0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x461, 0xa, 0x74, 
    0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x7, 0x75, 0x467, 0xa, 0x75, 
    0xc, 0x75, 0xe, 0x75, 0x46a, 0xb, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x76, 
    0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x473, 0xa, 0x76, 
    0x3, 0x77, 0x5, 0x77, 0x476, 0xa, 0x77, 0x3, 0x77, 0x3, 0x77, 0x5, 0x77, 
    0x47a, 0xa, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x5, 0x78, 
    0x480, 0xa, 0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x7a, 
    0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 
    0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 
    0x3, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 0x496, 0xa, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 
    0x3, 0x7c, 0x5, 0x7c, 0x49b, 0xa, 0x7c, 0x7, 0x7c, 0x49d, 0xa, 0x7c, 
    0xc, 0x7c, 0xe, 0x7c, 0x4a0, 0xb, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x5, 0x7d, 0x4a5, 0xa, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x6, 0x7d, 0x4af, 0xa, 0x7d, 
    0xd, 0x7d, 0xe, 0x7d, 0x4b0, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 
    0x3, 0x7e, 0x5, 0x7e, 0x4b8, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 
    0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x5, 0x7f, 0x4c1, 0xa, 0x7f, 
    0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 0x4c5, 0xa, 0x80, 0x3, 0x81, 0x3, 0x81, 
    0x3, 0x81, 0x3, 0x81, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x4cd, 0xa, 0x82, 
    0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 
    0x83, 0x4d5, 0xa, 0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x7, 0x84, 
    0x4da, 0xa, 0x84, 0xc, 0x84, 0xe, 0x84, 0x4dd, 0xb, 0x84, 0x3, 0x85, 
    0x3, 0x85, 0x5, 0x85, 0x4e1, 0xa, 0x85, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 
    0x4e5, 0xa, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x88, 0x3, 0x88, 0x3, 0x89, 
    0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x5, 0x89, 0x4f0, 0xa, 0x89, 
    0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x5, 0x89, 0x4f6, 0xa, 0x89, 
    0x7, 0x89, 0x4f8, 0xa, 0x89, 0xc, 0x89, 0xe, 0x89, 0x4fb, 0xb, 0x89, 
    0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 
    0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 
    0x3, 0x8e, 0x3, 0x8e, 0x7, 0x8e, 0x50c, 0xa, 0x8e, 0xc, 0x8e, 0xe, 0x8e, 
    0x50f, 0xb, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x514, 
    0xa, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x90, 0x3, 0x90, 0x3, 0x91, 0x3, 
    0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 
    0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x5, 0x91, 0x525, 0xa, 0x91, 0x3, 0x91, 
    0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 
    0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 
    0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 
    0x91, 0x3, 0x91, 0x7, 0x91, 0x53d, 0xa, 0x91, 0xc, 0x91, 0xe, 0x91, 
    0x540, 0xb, 0x91, 0x3, 0x92, 0x5, 0x92, 0x543, 0xa, 0x92, 0x3, 0x92, 
    0x3, 0x92, 0x5, 0x92, 0x547, 0xa, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 
    0x54b, 0xa, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 0x54f, 0xa, 0x92, 
    0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x7, 0x92, 0x554, 0xa, 0x92, 0xc, 0x92, 
    0xe, 0x92, 0x557, 0xb, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 
    0x55c, 0xa, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 
    0x6, 0x92, 0x563, 0xa, 0x92, 0xd, 0x92, 0xe, 0x92, 0x564, 0x3, 0x92, 
    0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 0x56b, 0xa, 0x92, 0x3, 0x93, 
    0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x5, 0x93, 0x571, 0xa, 0x93, 0x3, 0x93, 
    0x3, 0x93, 0x3, 0x93, 0x5, 0x93, 0x576, 0xa, 0x93, 0x3, 0x93, 0x3, 0x93, 
    0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x5, 0x93, 0x57d, 0xa, 0x93, 0x3, 0x94, 
    0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x585, 
    0xa, 0x94, 0x3, 0x95, 0x3, 0x95, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x7, 
    0x96, 0x58c, 0xa, 0x96, 0xc, 0x96, 0xe, 0x96, 0x58f, 0xb, 0x96, 0x3, 
    0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x7, 0x98, 
    0x597, 0xa, 0x98, 0xc, 0x98, 0xe, 0x98, 0x59a, 0xb, 0x98, 0x3, 0x99, 
    0x3, 0x99, 0x3, 0x99, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9b, 0x3, 
    0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x5, 0x9b, 0x5a7, 0xa, 0x9b, 
    0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x5ad, 0xa, 0x9c, 
    0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 
    0x9c, 0x5b5, 0xa, 0x9c, 0x5, 0x9c, 0x5b7, 0xa, 0x9c, 0x3, 0x9d, 0x3, 
    0x9d, 0x3, 0x9d, 0x5, 0x9d, 0x5bc, 0xa, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 
    0x3, 0x9d, 0x5, 0x9d, 0x5c1, 0xa, 0x9d, 0x5, 0x9d, 0x5c3, 0xa, 0x9d, 
    0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x7, 0x9e, 0x5c8, 0xa, 0x9e, 0xc, 0x9e, 
    0xe, 0x9e, 0x5cb, 0xb, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 0x5, 0x9f, 0x5cf, 
    0xa, 0x9f, 0x3, 0x9f, 0x6, 0x9f, 0x5d2, 0xa, 0x9f, 0xd, 0x9f, 0xe, 0x9f, 
    0x5d3, 0x3, 0x9f, 0x3, 0x9f, 0x7, 0x9f, 0x5d8, 0xa, 0x9f, 0xc, 0x9f, 
    0xe, 0x9f, 0x5db, 0xb, 0x9f, 0x3, 0x9f, 0x6, 0x9f, 0x5de, 0xa, 0x9f, 
    0xd, 0x9f, 0xe, 0x9f, 0x5df, 0x3, 0x9f, 0x5, 0x9f, 0x5e3, 0xa, 0x9f, 
    0x3, 0x9f, 0x5, 0x9f, 0x5e6, 0xa, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 
    0x7, 0x9f, 0x5eb, 0xa, 0x9f, 0xc, 0x9f, 0xe, 0x9f, 0x5ee, 0xb, 0x9f, 
    0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 
    0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x5, 0xa0, 0x5fb, 
    0xa, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 
    0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 
    0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x7, 0xa0, 0x60d, 0xa, 0xa0, 
    0xc, 0xa0, 0xe, 0xa0, 0x610, 0xb, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 
    0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 
    0xa0, 0x7, 0xa0, 0x61c, 0xa, 0xa0, 0xc, 0xa0, 0xe, 0xa0, 0x61f, 0xb, 
    0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 
    0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x5, 
    0xa0, 0x62d, 0xa, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
    0x3, 0xa1, 0x5, 0xa1, 0x634, 0xa, 0xa1, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 
    0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x63b, 0xa, 0xa2, 0x3, 0xa3, 0x3, 0xa3, 
    0x3, 0xa3, 0x7, 0xa3, 0x640, 0xa, 0xa3, 0xc, 0xa3, 0xe, 0xa3, 0x643, 
    0xb, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x7, 0xa4, 0x649, 
    0xa, 0xa4, 0xc, 0xa4, 0xe, 0xa4, 0x64c, 0xb, 0xa4, 0x3, 0xa5, 0x3, 0xa5, 
    0x3, 0xa5, 0x7, 0xa5, 0x651, 0xa, 0xa5, 0xc, 0xa5, 0xe, 0xa5, 0x654, 
    0xb, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x5, 0xa5, 0x658, 0xa, 0xa5, 0x3, 0xa6, 
    0x3, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x2, 0x4, 0x120, 0x13c, 
    0xa8, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
    0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 
    0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 
    0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 
    0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 
    0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 
    0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 
    0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 
    0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 
    0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 
    0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 
    0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 
    0x130, 0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 
    0x144, 0x146, 0x148, 0x14a, 0x14c, 0x2, 0x11, 0x3, 0x2, 0x7, 0xe, 0x4, 
    0x2, 0x25, 0x25, 0x89, 0x89, 0x4, 0x2, 0x22, 0x22, 0x2c, 0x2c, 0x3, 
    0x2, 0x2d, 0x30, 0x4, 0x2, 0x31, 0x32, 0x8d, 0x8d, 0x4, 0x2, 0x33, 0x34, 
    0x8e, 0x8e, 0x3, 0x2, 0x36, 0x3a, 0x4, 0x2, 0x3c, 0x3c, 0x87, 0x87, 
    0x3, 0x2, 0x46, 0x4b, 0x4, 0x2, 0x6, 0x6, 0x50, 0x50, 0x3, 0x2, 0x5a, 
    0x5b, 0x3, 0x2, 0x70, 0x71, 0x3, 0x2, 0x75, 0x76, 0x4, 0x2, 0x23, 0x23, 
    0x7c, 0x7c, 0x3, 0x2, 0x7d, 0x86, 0x2, 0x686, 0x2, 0x14e, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x151, 0x3, 0x2, 0x2, 0x2, 0x6, 0x15b, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x15d, 0x3, 0x2, 0x2, 0x2, 0xa, 0x168, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x16a, 0x3, 0x2, 0x2, 0x2, 0xe, 0x175, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x177, 0x3, 0x2, 0x2, 0x2, 0x12, 0x182, 0x3, 0x2, 0x2, 0x2, 0x14, 0x185, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18, 0x197, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x199, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1a4, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1b0, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1b5, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x1c6, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1e1, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1eb, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1fa, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x203, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x214, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x21c, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x42, 0x226, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x22e, 0x3, 0x2, 0x2, 0x2, 0x46, 0x230, 0x3, 0x2, 0x2, 0x2, 0x48, 0x232, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x23e, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x241, 0x3, 0x2, 0x2, 0x2, 0x50, 0x258, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x54, 0x25f, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x267, 0x3, 0x2, 0x2, 0x2, 0x58, 0x26d, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x273, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x279, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x283, 0x3, 0x2, 0x2, 0x2, 0x60, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x62, 0x292, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x296, 0x3, 0x2, 0x2, 0x2, 0x66, 0x2b2, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x2b8, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2c5, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2c9, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x76, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x2e0, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x2ea, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x80, 0x2f2, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x84, 0x300, 0x3, 0x2, 
    0x2, 0x2, 0x86, 0x306, 0x3, 0x2, 0x2, 0x2, 0x88, 0x30c, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x313, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x318, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x90, 0x324, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x328, 0x3, 0x2, 0x2, 0x2, 0x94, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x96, 0x338, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x343, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x35a, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x360, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x36a, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0x373, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x377, 0x3, 0x2, 0x2, 
    0x2, 0xa4, 0x37a, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x37d, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0x393, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x395, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0x39d, 0x3, 0x2, 0x2, 0x2, 0xae, 0x39f, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x3a3, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x3b3, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x3c4, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x3cd, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x3d3, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0x3db, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x3df, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0x3e5, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0xca, 0x3f2, 
    0x3, 0x2, 0x2, 0x2, 0xcc, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0xce, 0x40d, 0x3, 
    0x2, 0x2, 0x2, 0xd0, 0x411, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x41c, 0x3, 0x2, 
    0x2, 0x2, 0xd4, 0x420, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x42c, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0x432, 0x3, 0x2, 0x2, 0x2, 0xda, 0x434, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0x43f, 0x3, 0x2, 0x2, 0x2, 0xde, 0x441, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0x445, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x449, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x457, 
    0x3, 0x2, 0x2, 0x2, 0xe6, 0x460, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x462, 0x3, 
    0x2, 0x2, 0x2, 0xea, 0x472, 0x3, 0x2, 0x2, 0x2, 0xec, 0x479, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0x47f, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x481, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0x485, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x48c, 0x3, 0x2, 0x2, 0x2, 
    0xf6, 0x495, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x4a4, 0x3, 0x2, 0x2, 0x2, 0xfa, 
    0x4b7, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x4c4, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x102, 0x4cc, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0x106, 0x4d6, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x4e4, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x4e6, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x4e8, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x112, 0x4fc, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x501, 0x3, 0x2, 0x2, 0x2, 0x116, 0x503, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x505, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x507, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x513, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x517, 
    0x3, 0x2, 0x2, 0x2, 0x120, 0x524, 0x3, 0x2, 0x2, 0x2, 0x122, 0x56a, 
    0x3, 0x2, 0x2, 0x2, 0x124, 0x57c, 0x3, 0x2, 0x2, 0x2, 0x126, 0x584, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x586, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x588, 
    0x3, 0x2, 0x2, 0x2, 0x12c, 0x590, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x593, 
    0x3, 0x2, 0x2, 0x2, 0x130, 0x59b, 0x3, 0x2, 0x2, 0x2, 0x132, 0x59e, 
    0x3, 0x2, 0x2, 0x2, 0x134, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x136, 0x5b6, 
    0x3, 0x2, 0x2, 0x2, 0x138, 0x5c2, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x5c4, 
    0x3, 0x2, 0x2, 0x2, 0x13c, 0x5e5, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x62c, 
    0x3, 0x2, 0x2, 0x2, 0x140, 0x633, 0x3, 0x2, 0x2, 0x2, 0x142, 0x63a, 
    0x3, 0x2, 0x2, 0x2, 0x144, 0x63c, 0x3, 0x2, 0x2, 0x2, 0x146, 0x644, 
    0x3, 0x2, 0x2, 0x2, 0x148, 0x64d, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x659, 
    0x3, 0x2, 0x2, 0x2, 0x14c, 0x65b, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 
    0x5, 0x4, 0x3, 0x2, 0x14f, 0x150, 0x5, 0x14, 0xb, 0x2, 0x150, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x155, 0x7, 0x3, 0x2, 0x2, 0x152, 0x154, 0x5, 
    0x6, 0x4, 0x2, 0x153, 0x152, 0x3, 0x2, 0x2, 0x2, 0x154, 0x157, 0x3, 
    0x2, 0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x5, 0x3, 0x2, 0x2, 0x2, 0x157, 0x155, 0x3, 0x2, 
    0x2, 0x2, 0x158, 0x15c, 0x5, 0x8, 0x5, 0x2, 0x159, 0x15c, 0x5, 0xc, 
    0x7, 0x2, 0x15a, 0x15c, 0x5, 0x10, 0x9, 0x2, 0x15b, 0x158, 0x3, 0x2, 
    0x2, 0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15a, 0x3, 0x2, 
    0x2, 0x2, 0x15c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x7, 0x4, 0x2, 
    0x2, 0x15e, 0x163, 0x5, 0xa, 0x6, 0x2, 0x15f, 0x160, 0x7, 0x5, 0x2, 
    0x2, 0x160, 0x162, 0x5, 0xa, 0x6, 0x2, 0x161, 0x15f, 0x3, 0x2, 0x2, 
    0x2, 0x162, 0x165, 0x3, 0x2, 0x2, 0x2, 0x163, 0x161, 0x3, 0x2, 0x2, 
    0x2, 0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 0x166, 0x3, 0x2, 0x2, 
    0x2, 0x165, 0x163, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x7, 0x6, 0x2, 
    0x2, 0x167, 0x9, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x7, 0x8f, 0x2, 0x2, 
    0x169, 0xb, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x9, 0x2, 0x2, 0x2, 0x16b, 
    0x170, 0x5, 0xe, 0x8, 0x2, 0x16c, 0x16d, 0x7, 0x5, 0x2, 0x2, 0x16d, 
    0x16f, 0x5, 0xe, 0x8, 0x2, 0x16e, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16f, 
    0x172, 0x3, 0x2, 0x2, 0x2, 0x170, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x170, 
    0x171, 0x3, 0x2, 0x2, 0x2, 0x171, 0x173, 0x3, 0x2, 0x2, 0x2, 0x172, 
    0x170, 0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x7, 0x6, 0x2, 0x2, 0x174, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x7, 0x8f, 0x2, 0x2, 0x176, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x7, 0xf, 0x2, 0x2, 0x178, 0x17d, 
    0x5, 0x12, 0xa, 0x2, 0x179, 0x17a, 0x7, 0x5, 0x2, 0x2, 0x17a, 0x17c, 
    0x5, 0x12, 0xa, 0x2, 0x17b, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17f, 
    0x3, 0x2, 0x2, 0x2, 0x17d, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 
    0x3, 0x2, 0x2, 0x2, 0x17e, 0x180, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x17d, 
    0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x7, 0x6, 0x2, 0x2, 0x181, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x182, 0x183, 0x7, 0x8f, 0x2, 0x2, 0x183, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x184, 0x186, 0x5, 0x16, 0xc, 0x2, 0x185, 0x184, 0x3, 
    0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 0x2, 0x2, 0x2, 0x187, 0x185, 0x3, 
    0x2, 0x2, 0x2, 0x187, 0x188, 0x3, 0x2, 0x2, 0x2, 0x188, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x189, 0x18d, 0x7, 0x10, 0x2, 0x2, 0x18a, 0x18c, 0x5, 0x18, 
    0xd, 0x2, 0x18b, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18f, 0x3, 0x2, 
    0x2, 0x2, 0x18d, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 
    0x2, 0x2, 0x18e, 0x17, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x18d, 0x3, 0x2, 0x2, 
    0x2, 0x190, 0x198, 0x5, 0x1a, 0xe, 0x2, 0x191, 0x198, 0x5, 0x22, 0x12, 
    0x2, 0x192, 0x198, 0x5, 0x24, 0x13, 0x2, 0x193, 0x198, 0x5, 0x26, 0x14, 
    0x2, 0x194, 0x198, 0x5, 0xa2, 0x52, 0x2, 0x195, 0x198, 0x5, 0xa4, 0x53, 
    0x2, 0x196, 0x198, 0x5, 0xba, 0x5e, 0x2, 0x197, 0x190, 0x3, 0x2, 0x2, 
    0x2, 0x197, 0x191, 0x3, 0x2, 0x2, 0x2, 0x197, 0x192, 0x3, 0x2, 0x2, 
    0x2, 0x197, 0x193, 0x3, 0x2, 0x2, 0x2, 0x197, 0x194, 0x3, 0x2, 0x2, 
    0x2, 0x197, 0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x198, 0x19, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x7, 0x11, 0x2, 
    0x2, 0x19a, 0x19f, 0x5, 0x1c, 0xf, 0x2, 0x19b, 0x19c, 0x7, 0x5, 0x2, 
    0x2, 0x19c, 0x19e, 0x5, 0x1c, 0xf, 0x2, 0x19d, 0x19b, 0x3, 0x2, 0x2, 
    0x2, 0x19e, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x19d, 0x3, 0x2, 0x2, 
    0x2, 0x19f, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a2, 0x3, 0x2, 0x2, 
    0x2, 0x1a1, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x7, 0x6, 0x2, 
    0x2, 0x1a3, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x5, 0x1e, 0x10, 
    0x2, 0x1a5, 0x1a6, 0x7, 0x12, 0x2, 0x2, 0x1a6, 0x1a7, 0x5, 0x132, 0x9a, 
    0x2, 0x1a7, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1ad, 0x5, 0x20, 0x11, 
    0x2, 0x1a9, 0x1aa, 0x7, 0x5, 0x2, 0x2, 0x1aa, 0x1ac, 0x5, 0x20, 0x11, 
    0x2, 0x1ab, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1af, 0x3, 0x2, 0x2, 
    0x2, 0x1ad, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x3, 0x2, 0x2, 
    0x2, 0x1ae, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1ad, 0x3, 0x2, 0x2, 0x2, 
    0x1b0, 0x1b1, 0x7, 0x90, 0x2, 0x2, 0x1b1, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x1b2, 0x1b3, 0x5, 0x28, 0x15, 0x2, 0x1b3, 0x1b4, 0x7, 0x6, 0x2, 0x2, 
    0x1b4, 0x23, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x5, 0x2a, 0x16, 0x2, 
    0x1b6, 0x1b7, 0x7, 0x6, 0x2, 0x2, 0x1b7, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1b8, 
    0x1b9, 0x5, 0x2c, 0x17, 0x2, 0x1b9, 0x1ba, 0x7, 0x6, 0x2, 0x2, 0x1ba, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1c1, 0x7, 0x13, 0x2, 0x2, 0x1bc, 
    0x1c0, 0x5, 0x2e, 0x18, 0x2, 0x1bd, 0x1c0, 0x5, 0x36, 0x1c, 0x2, 0x1be, 
    0x1c0, 0x5, 0x38, 0x1d, 0x2, 0x1bf, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bf, 
    0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c0, 
    0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1c1, 
    0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c3, 
    0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 0x7, 0x14, 0x2, 0x2, 0x1c5, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1cf, 0x7, 0x15, 0x2, 0x2, 0x1c7, 
    0x1ce, 0x5, 0x32, 0x1a, 0x2, 0x1c8, 0x1ce, 0x5, 0x8c, 0x47, 0x2, 0x1c9, 
    0x1ce, 0x5, 0x98, 0x4d, 0x2, 0x1ca, 0x1ce, 0x5, 0x9a, 0x4e, 0x2, 0x1cb, 
    0x1ce, 0x5, 0x9c, 0x4f, 0x2, 0x1cc, 0x1ce, 0x5, 0xba, 0x5e, 0x2, 0x1cd, 
    0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1cd, 
    0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cd, 
    0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ce, 
    0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cf, 
    0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d1, 
    0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x7, 0x14, 0x2, 0x2, 0x1d3, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d9, 0x7, 0x16, 0x2, 0x2, 0x1d5, 
    0x1d8, 0x5, 0x32, 0x1a, 0x2, 0x1d6, 0x1d8, 0x5, 0x30, 0x19, 0x2, 0x1d7, 
    0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d8, 
    0x1db, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d9, 
    0x1da, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1db, 
    0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x7, 0x14, 0x2, 0x2, 0x1dd, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e2, 0x5, 0x32, 0x1a, 0x2, 0x1df, 
    0x1e2, 0x5, 0x34, 0x1b, 0x2, 0x1e0, 0x1e2, 0x5, 0xba, 0x5e, 0x2, 0x1e1, 
    0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e1, 
    0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1ea, 
    0x5, 0x84, 0x43, 0x2, 0x1e4, 0x1ea, 0x5, 0x86, 0x44, 0x2, 0x1e5, 0x1ea, 
    0x5, 0x6a, 0x36, 0x2, 0x1e6, 0x1ea, 0x5, 0x54, 0x2b, 0x2, 0x1e7, 0x1ea, 
    0x5, 0x7a, 0x3e, 0x2, 0x1e8, 0x1ea, 0x5, 0x7c, 0x3f, 0x2, 0x1e9, 0x1e3, 
    0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1e5, 
    0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1e7, 
    0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x7, 0x17, 0x2, 0x2, 0x1ec, 0x1ef, 0x5, 
    0x126, 0x94, 0x2, 0x1ed, 0x1ee, 0x7, 0x18, 0x2, 0x2, 0x1ee, 0x1f0, 0x5, 
    0x11a, 0x8e, 0x2, 0x1ef, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x3, 
    0x2, 0x2, 0x2, 0x1f0, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x7, 
    0x6, 0x2, 0x2, 0x1f2, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x5, 0xdc, 
    0x6f, 0x2, 0x1f4, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1fb, 0x5, 0x3a, 
    0x1e, 0x2, 0x1f6, 0x1fb, 0x5, 0x4e, 0x28, 0x2, 0x1f7, 0x1fb, 0x5, 0x64, 
    0x33, 0x2, 0x1f8, 0x1fb, 0x5, 0x74, 0x3b, 0x2, 0x1f9, 0x1fb, 0x5, 0x80, 
    0x41, 0x2, 0x1fa, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1f6, 0x3, 0x2, 
    0x2, 0x2, 0x1fa, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1f8, 0x3, 0x2, 
    0x2, 0x2, 0x1fa, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x1fc, 0x201, 0x7, 0x19, 0x2, 0x2, 0x1fd, 0x202, 0x5, 0x4e, 0x28, 
    0x2, 0x1fe, 0x202, 0x5, 0x64, 0x33, 0x2, 0x1ff, 0x202, 0x5, 0x74, 0x3b, 
    0x2, 0x200, 0x202, 0x5, 0x80, 0x41, 0x2, 0x201, 0x1fd, 0x3, 0x2, 0x2, 
    0x2, 0x201, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x201, 0x1ff, 0x3, 0x2, 0x2, 
    0x2, 0x201, 0x200, 0x3, 0x2, 0x2, 0x2, 0x202, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x203, 0x208, 0x7, 0x1a, 0x2, 0x2, 0x204, 0x205, 0x7, 0x1b, 0x2, 0x2, 
    0x205, 0x206, 0x5, 0x3c, 0x1f, 0x2, 0x206, 0x207, 0x7, 0x1c, 0x2, 0x2, 
    0x207, 0x209, 0x3, 0x2, 0x2, 0x2, 0x208, 0x204, 0x3, 0x2, 0x2, 0x2, 
    0x208, 0x209, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x3, 0x2, 0x2, 0x2, 
    0x20a, 0x20d, 0x5, 0x3e, 0x20, 0x2, 0x20b, 0x20c, 0x7, 0x1d, 0x2, 0x2, 
    0x20c, 0x20e, 0x5, 0x40, 0x21, 0x2, 0x20d, 0x20b, 0x3, 0x2, 0x2, 0x2, 
    0x20d, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20f, 0x3, 0x2, 0x2, 0x2, 
    0x20f, 0x210, 0x7, 0x1e, 0x2, 0x2, 0x210, 0x211, 0x5, 0x42, 0x22, 0x2, 
    0x211, 0x212, 0x7, 0x1f, 0x2, 0x2, 0x212, 0x213, 0x7, 0x6, 0x2, 0x2, 
    0x213, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x214, 0x219, 0x5, 0x136, 0x9c, 0x2, 
    0x215, 0x216, 0x7, 0x5, 0x2, 0x2, 0x216, 0x218, 0x5, 0x136, 0x9c, 0x2, 
    0x217, 0x215, 0x3, 0x2, 0x2, 0x2, 0x218, 0x21b, 0x3, 0x2, 0x2, 0x2, 
    0x219, 0x217, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0x3, 0x2, 0x2, 0x2, 
    0x21a, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21c, 
    0x21d, 0x7, 0x8a, 0x2, 0x2, 0x21d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x21e, 
    0x223, 0x5, 0x44, 0x23, 0x2, 0x21f, 0x220, 0x7, 0x5, 0x2, 0x2, 0x220, 
    0x222, 0x5, 0x44, 0x23, 0x2, 0x221, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x222, 
    0x225, 0x3, 0x2, 0x2, 0x2, 0x223, 0x221, 0x3, 0x2, 0x2, 0x2, 0x223, 
    0x224, 0x3, 0x2, 0x2, 0x2, 0x224, 0x41, 0x3, 0x2, 0x2, 0x2, 0x225, 0x223, 
    0x3, 0x2, 0x2, 0x2, 0x226, 0x22b, 0x5, 0x48, 0x25, 0x2, 0x227, 0x228, 
    0x7, 0x5, 0x2, 0x2, 0x228, 0x22a, 0x5, 0x48, 0x25, 0x2, 0x229, 0x227, 
    0x3, 0x2, 0x2, 0x2, 0x22a, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x229, 
    0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x22d, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x5, 
    0x46, 0x24, 0x2, 0x22f, 0x45, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x7, 
    0x90, 0x2, 0x2, 0x231, 0x47, 0x3, 0x2, 0x2, 0x2, 0x232, 0x237, 0x5, 
    0x4a, 0x26, 0x2, 0x233, 0x234, 0x7, 0x5, 0x2, 0x2, 0x234, 0x236, 0x5, 
    0x4a, 0x26, 0x2, 0x235, 0x233, 0x3, 0x2, 0x2, 0x2, 0x236, 0x239, 0x3, 
    0x2, 0x2, 0x2, 0x237, 0x235, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x3, 
    0x2, 0x2, 0x2, 0x238, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x239, 0x237, 0x3, 
    0x2, 0x2, 0x2, 0x23a, 0x23b, 0x5, 0x4c, 0x27, 0x2, 0x23b, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x23c, 0x23d, 0x7, 0x8b, 0x2, 0x2, 0x23d, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x23e, 0x23f, 0x7, 0x20, 0x2, 0x2, 0x23f, 0x240, 0x5, 
    0x132, 0x9a, 0x2, 0x240, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x7, 
    0x21, 0x2, 0x2, 0x242, 0x250, 0x5, 0x50, 0x29, 0x2, 0x243, 0x245, 0x5, 
    0x4c, 0x27, 0x2, 0x244, 0x243, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x3, 
    0x2, 0x2, 0x2, 0x245, 0x248, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x7, 
    0x22, 0x2, 0x2, 0x247, 0x249, 0x5, 0x56, 0x2c, 0x2, 0x248, 0x246, 0x3, 
    0x2, 0x2, 0x2, 0x248, 0x249, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 0x3, 
    0x2, 0x2, 0x2, 0x24a, 0x24b, 0x7, 0x6, 0x2, 0x2, 0x24b, 0x251, 0x5, 
    0x9e, 0x50, 0x2, 0x24c, 0x24d, 0x7, 0x23, 0x2, 0x2, 0x24d, 0x24e, 0x5, 
    0x132, 0x9a, 0x2, 0x24e, 0x24f, 0x7, 0x6, 0x2, 0x2, 0x24f, 0x251, 0x3, 
    0x2, 0x2, 0x2, 0x250, 0x244, 0x3, 0x2, 0x2, 0x2, 0x250, 0x24c, 0x3, 
    0x2, 0x2, 0x2, 0x251, 0x255, 0x3, 0x2, 0x2, 0x2, 0x252, 0x254, 0x5, 
    0x62, 0x32, 0x2, 0x253, 0x252, 0x3, 0x2, 0x2, 0x2, 0x254, 0x257, 0x3, 
    0x2, 0x2, 0x2, 0x255, 0x253, 0x3, 0x2, 0x2, 0x2, 0x255, 0x256, 0x3, 
    0x2, 0x2, 0x2, 0x256, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x257, 0x255, 0x3, 0x2, 
    0x2, 0x2, 0x258, 0x25b, 0x5, 0x52, 0x2a, 0x2, 0x259, 0x25a, 0x7, 0x24, 
    0x2, 0x2, 0x25a, 0x25c, 0x5, 0x40, 0x21, 0x2, 0x25b, 0x259, 0x3, 0x2, 
    0x2, 0x2, 0x25b, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x25d, 0x25e, 0x9, 0x3, 0x2, 0x2, 0x25e, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x25f, 0x260, 0x7, 0x26, 0x2, 0x2, 0x260, 0x261, 0x5, 0x50, 0x29, 0x2, 
    0x261, 0x262, 0x7, 0x12, 0x2, 0x2, 0x262, 0x263, 0x5, 0x50, 0x29, 0x2, 
    0x263, 0x264, 0x7, 0x6, 0x2, 0x2, 0x264, 0x55, 0x3, 0x2, 0x2, 0x2, 0x265, 
    0x268, 0x5, 0x58, 0x2d, 0x2, 0x266, 0x268, 0x5, 0x5c, 0x2f, 0x2, 0x267, 
    0x265, 0x3, 0x2, 0x2, 0x2, 0x267, 0x266, 0x3, 0x2, 0x2, 0x2, 0x268, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x7, 0x27, 0x2, 0x2, 0x26a, 
    0x26b, 0x5, 0x5a, 0x2e, 0x2, 0x26b, 0x26c, 0x7, 0x27, 0x2, 0x2, 0x26c, 
    0x26e, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x269, 0x3, 0x2, 0x2, 0x2, 0x26d, 
    0x26e, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x271, 0x3, 0x2, 0x2, 0x2, 0x26f, 
    0x272, 0x5, 0x11e, 0x90, 0x2, 0x270, 0x272, 0x5, 0x13c, 0x9f, 0x2, 0x271, 
    0x26f, 0x3, 0x2, 0x2, 0x2, 0x271, 0x270, 0x3, 0x2, 0x2, 0x2, 0x272, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x7, 0x90, 0x2, 0x2, 0x274, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x7, 0x27, 0x2, 0x2, 0x276, 
    0x277, 0x5, 0x5a, 0x2e, 0x2, 0x277, 0x278, 0x7, 0x27, 0x2, 0x2, 0x278, 
    0x27a, 0x3, 0x2, 0x2, 0x2, 0x279, 0x275, 0x3, 0x2, 0x2, 0x2, 0x279, 
    0x27a, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27b, 
    0x281, 0x5, 0x5e, 0x30, 0x2, 0x27c, 0x27f, 0x7, 0x28, 0x2, 0x2, 0x27d, 
    0x280, 0x5, 0x11e, 0x90, 0x2, 0x27e, 0x280, 0x5, 0x13c, 0x9f, 0x2, 0x27f, 
    0x27d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x280, 
    0x282, 0x3, 0x2, 0x2, 0x2, 0x281, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x281, 
    0x282, 0x3, 0x2, 0x2, 0x2, 0x282, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x283, 0x288, 
    0x5, 0x60, 0x31, 0x2, 0x284, 0x285, 0x7, 0x5, 0x2, 0x2, 0x285, 0x287, 
    0x5, 0x60, 0x31, 0x2, 0x286, 0x284, 0x3, 0x2, 0x2, 0x2, 0x287, 0x28a, 
    0x3, 0x2, 0x2, 0x2, 0x288, 0x286, 0x3, 0x2, 0x2, 0x2, 0x288, 0x289, 
    0x3, 0x2, 0x2, 0x2, 0x289, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x288, 0x3, 
    0x2, 0x2, 0x2, 0x28b, 0x28e, 0x5, 0x11e, 0x90, 0x2, 0x28c, 0x28e, 0x5, 
    0x13c, 0x9f, 0x2, 0x28d, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28c, 0x3, 
    0x2, 0x2, 0x2, 0x28e, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 0x7, 
    0x29, 0x2, 0x2, 0x290, 0x291, 0x5, 0x11e, 0x90, 0x2, 0x291, 0x61, 0x3, 
    0x2, 0x2, 0x2, 0x292, 0x293, 0x7, 0x2a, 0x2, 0x2, 0x293, 0x294, 0x5, 
    0xfc, 0x7f, 0x2, 0x294, 0x295, 0x7, 0x6, 0x2, 0x2, 0x295, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x296, 0x297, 0x7, 0x2b, 0x2, 0x2, 0x297, 0x299, 0x5, 
    0x66, 0x34, 0x2, 0x298, 0x29a, 0x5, 0x4c, 0x27, 0x2, 0x299, 0x298, 0x3, 
    0x2, 0x2, 0x2, 0x299, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x29d, 0x3, 
    0x2, 0x2, 0x2, 0x29b, 0x29c, 0x9, 0x4, 0x2, 0x2, 0x29c, 0x29e, 0x5, 
    0x56, 0x2c, 0x2, 0x29d, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29e, 0x3, 
    0x2, 0x2, 0x2, 0x29e, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a0, 0x7, 
    0x6, 0x2, 0x2, 0x2a0, 0x2a4, 0x5, 0x9e, 0x50, 0x2, 0x2a1, 0x2a3, 0x5, 
    0x68, 0x35, 0x2, 0x2a2, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a6, 0x3, 
    0x2, 0x2, 0x2, 0x2a4, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a5, 0x3, 
    0x2, 0x2, 0x2, 0x2a5, 0x65, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a4, 0x3, 0x2, 
    0x2, 0x2, 0x2a7, 0x2a9, 0x5, 0x6c, 0x37, 0x2, 0x2a8, 0x2a7, 0x3, 0x2, 
    0x2, 0x2, 0x2a8, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 0x3, 0x2, 
    0x2, 0x2, 0x2aa, 0x2ac, 0x5, 0x6e, 0x38, 0x2, 0x2ab, 0x2ad, 0x5, 0x6c, 
    0x37, 0x2, 0x2ac, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x3, 0x2, 
    0x2, 0x2, 0x2ad, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2af, 0x5, 0x70, 
    0x39, 0x2, 0x2af, 0x2b0, 0x5, 0x40, 0x21, 0x2, 0x2b0, 0x2b1, 0x5, 0x72, 
    0x3a, 0x2, 0x2b1, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2a8, 0x3, 0x2, 
    0x2, 0x2, 0x2b2, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x2b4, 0x2b5, 0x9, 0x5, 0x2, 0x2, 0x2b5, 0x2b6, 0x5, 0xfc, 0x7f, 
    0x2, 0x2b6, 0x2b7, 0x7, 0x6, 0x2, 0x2, 0x2b7, 0x69, 0x3, 0x2, 0x2, 0x2, 
    0x2b8, 0x2b9, 0x7, 0x26, 0x2, 0x2, 0x2b9, 0x2ba, 0x5, 0x66, 0x34, 0x2, 
    0x2ba, 0x2bb, 0x7, 0x12, 0x2, 0x2, 0x2bb, 0x2bc, 0x5, 0x66, 0x34, 0x2, 
    0x2bc, 0x2bd, 0x7, 0x6, 0x2, 0x2, 0x2bd, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x2be, 
    0x2c4, 0x5, 0x44, 0x23, 0x2, 0x2bf, 0x2c0, 0x7, 0x1b, 0x2, 0x2, 0x2c0, 
    0x2c1, 0x5, 0x40, 0x21, 0x2, 0x2c1, 0x2c2, 0x7, 0x1c, 0x2, 0x2, 0x2c2, 
    0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c3, 
    0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 
    0x7, 0x88, 0x2, 0x2, 0x2c6, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 
    0x9, 0x6, 0x2, 0x2, 0x2c8, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0x9, 
    0x7, 0x2, 0x2, 0x2ca, 0x73, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cc, 0x7, 0x35, 
    0x2, 0x2, 0x2cc, 0x2cf, 0x5, 0x76, 0x3c, 0x2, 0x2cd, 0x2ce, 0x7, 0x22, 
    0x2, 0x2, 0x2ce, 0x2d0, 0x5, 0x56, 0x2c, 0x2, 0x2cf, 0x2cd, 0x3, 0x2, 
    0x2, 0x2, 0x2cf, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x3, 0x2, 
    0x2, 0x2, 0x2d1, 0x2d2, 0x7, 0x6, 0x2, 0x2, 0x2d2, 0x2d6, 0x5, 0x9e, 
    0x50, 0x2, 0x2d3, 0x2d5, 0x5, 0x78, 0x3d, 0x2, 0x2d4, 0x2d3, 0x3, 0x2, 
    0x2, 0x2, 0x2d5, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d4, 0x3, 0x2, 
    0x2, 0x2, 0x2d6, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x2d8, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2db, 0x5, 0x40, 0x21, 
    0x2, 0x2da, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2db, 0x3, 0x2, 0x2, 
    0x2, 0x2db, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2de, 0x5, 0x7e, 0x40, 
    0x2, 0x2dd, 0x2df, 0x5, 0x40, 0x21, 0x2, 0x2de, 0x2dd, 0x3, 0x2, 0x2, 
    0x2, 0x2de, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x2e0, 0x2e1, 0x9, 0x8, 0x2, 0x2, 0x2e1, 0x2e2, 0x5, 0xfc, 0x7f, 0x2, 
    0x2e2, 0x2e3, 0x7, 0x6, 0x2, 0x2, 0x2e3, 0x79, 0x3, 0x2, 0x2, 0x2, 0x2e4, 
    0x2e5, 0x7, 0x26, 0x2, 0x2, 0x2e5, 0x2e6, 0x5, 0x76, 0x3c, 0x2, 0x2e6, 
    0x2e7, 0x7, 0x12, 0x2, 0x2, 0x2e7, 0x2e8, 0x5, 0x76, 0x3c, 0x2, 0x2e8, 
    0x2e9, 0x7, 0x6, 0x2, 0x2, 0x2e9, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2eb, 
    0x7, 0x3b, 0x2, 0x2, 0x2eb, 0x2ec, 0x5, 0x76, 0x3c, 0x2, 0x2ec, 0x2ed, 
    0x7, 0x12, 0x2, 0x2, 0x2ed, 0x2ee, 0x5, 0x76, 0x3c, 0x2, 0x2ee, 0x2ef, 
    0x7, 0x6, 0x2, 0x2, 0x2ef, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f1, 0x9, 
    0x9, 0x2, 0x2, 0x2f1, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f3, 0x7, 0x3d, 
    0x2, 0x2, 0x2f3, 0x2f4, 0x5, 0x82, 0x42, 0x2, 0x2f4, 0x2f5, 0x7, 0x22, 
    0x2, 0x2, 0x2f5, 0x2f6, 0x5, 0x56, 0x2c, 0x2, 0x2f6, 0x2f7, 0x7, 0x6, 
    0x2, 0x2, 0x2f7, 0x2f8, 0x5, 0x9e, 0x50, 0x2, 0x2f8, 0x81, 0x3, 0x2, 
    0x2, 0x2, 0x2f9, 0x2fa, 0x5, 0x44, 0x23, 0x2, 0x2fa, 0x2fc, 0x7, 0x23, 
    0x2, 0x2, 0x2fb, 0x2fd, 0x5, 0x8a, 0x46, 0x2, 0x2fc, 0x2fb, 0x3, 0x2, 
    0x2, 0x2, 0x2fc, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 0x3, 0x2, 
    0x2, 0x2, 0x2fe, 0x2ff, 0x5, 0x88, 0x45, 0x2, 0x2ff, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x300, 0x301, 0x7, 0x26, 0x2, 0x2, 0x301, 0x302, 0x5, 0x82, 
    0x42, 0x2, 0x302, 0x303, 0x7, 0x12, 0x2, 0x2, 0x303, 0x304, 0x5, 0x82, 
    0x42, 0x2, 0x304, 0x305, 0x7, 0x6, 0x2, 0x2, 0x305, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x306, 0x307, 0x7, 0x3b, 0x2, 0x2, 0x307, 0x308, 0x5, 0x82, 
    0x42, 0x2, 0x308, 0x309, 0x7, 0x12, 0x2, 0x2, 0x309, 0x30a, 0x5, 0x82, 
    0x42, 0x2, 0x30a, 0x30b, 0x7, 0x6, 0x2, 0x2, 0x30b, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0x30c, 0x30d, 0x7, 0x8c, 0x2, 0x2, 0x30d, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x30e, 0x314, 0x5, 0x40, 0x21, 0x2, 0x30f, 0x310, 0x7, 0x1b, 
    0x2, 0x2, 0x310, 0x311, 0x5, 0x40, 0x21, 0x2, 0x311, 0x312, 0x7, 0x1c, 
    0x2, 0x2, 0x312, 0x314, 0x3, 0x2, 0x2, 0x2, 0x313, 0x30e, 0x3, 0x2, 
    0x2, 0x2, 0x313, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x314, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x319, 0x5, 0x8e, 0x48, 0x2, 0x316, 0x319, 0x5, 0x94, 0x4b, 
    0x2, 0x317, 0x319, 0x5, 0x96, 0x4c, 0x2, 0x318, 0x315, 0x3, 0x2, 0x2, 
    0x2, 0x318, 0x316, 0x3, 0x2, 0x2, 0x2, 0x318, 0x317, 0x3, 0x2, 0x2, 
    0x2, 0x319, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x31b, 0x7, 0x3e, 0x2, 
    0x2, 0x31b, 0x31c, 0x5, 0x90, 0x49, 0x2, 0x31c, 0x31d, 0x7, 0x12, 0x2, 
    0x2, 0x31d, 0x31e, 0x5, 0x132, 0x9a, 0x2, 0x31e, 0x31f, 0x7, 0x6, 0x2, 
    0x2, 0x31f, 0x320, 0x5, 0x9e, 0x50, 0x2, 0x320, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x321, 0x323, 0x5, 0x92, 0x4a, 0x2, 0x322, 0x321, 0x3, 0x2, 0x2, 
    0x2, 0x323, 0x326, 0x3, 0x2, 0x2, 0x2, 0x324, 0x322, 0x3, 0x2, 0x2, 
    0x2, 0x324, 0x325, 0x3, 0x2, 0x2, 0x2, 0x325, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x326, 0x324, 0x3, 0x2, 0x2, 0x2, 0x327, 0x329, 0x7, 0x3f, 0x2, 0x2, 
    0x328, 0x327, 0x3, 0x2, 0x2, 0x2, 0x328, 0x329, 0x3, 0x2, 0x2, 0x2, 
    0x329, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32c, 0x5, 0x142, 0xa2, 0x2, 
    0x32b, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x32c, 0x3, 0x2, 0x2, 0x2, 
    0x32c, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32e, 0x5, 0x88, 0x45, 0x2, 
    0x32e, 0x93, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x330, 0x7, 0x3e, 0x2, 0x2, 
    0x330, 0x331, 0x5, 0x90, 0x49, 0x2, 0x331, 0x332, 0x7, 0x20, 0x2, 0x2, 
    0x332, 0x333, 0x5, 0x90, 0x49, 0x2, 0x333, 0x334, 0x7, 0x12, 0x2, 0x2, 
    0x334, 0x335, 0x5, 0x132, 0x9a, 0x2, 0x335, 0x336, 0x7, 0x6, 0x2, 0x2, 
    0x336, 0x337, 0x5, 0x9e, 0x50, 0x2, 0x337, 0x95, 0x3, 0x2, 0x2, 0x2, 
    0x338, 0x339, 0x7, 0x3e, 0x2, 0x2, 0x339, 0x33a, 0x5, 0x13c, 0x9f, 0x2, 
    0x33a, 0x33b, 0x7, 0x20, 0x2, 0x2, 0x33b, 0x33e, 0x5, 0x90, 0x49, 0x2, 
    0x33c, 0x33d, 0x7, 0x12, 0x2, 0x2, 0x33d, 0x33f, 0x5, 0x132, 0x9a, 0x2, 
    0x33e, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33f, 0x3, 0x2, 0x2, 0x2, 
    0x33f, 0x340, 0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x7, 0x6, 0x2, 0x2, 
    0x341, 0x342, 0x5, 0x9e, 0x50, 0x2, 0x342, 0x97, 0x3, 0x2, 0x2, 0x2, 
    0x343, 0x344, 0x7, 0x40, 0x2, 0x2, 0x344, 0x345, 0x5, 0x66, 0x34, 0x2, 
    0x345, 0x346, 0x7, 0x41, 0x2, 0x2, 0x346, 0x355, 0x5, 0x66, 0x34, 0x2, 
    0x347, 0x348, 0x7, 0x42, 0x2, 0x2, 0x348, 0x349, 0x5, 0x44, 0x23, 0x2, 
    0x349, 0x34a, 0x7, 0x3c, 0x2, 0x2, 0x34a, 0x352, 0x5, 0x44, 0x23, 0x2, 
    0x34b, 0x34c, 0x7, 0x5, 0x2, 0x2, 0x34c, 0x34d, 0x5, 0x44, 0x23, 0x2, 
    0x34d, 0x34e, 0x7, 0x3c, 0x2, 0x2, 0x34e, 0x34f, 0x5, 0x44, 0x23, 0x2, 
    0x34f, 0x351, 0x3, 0x2, 0x2, 0x2, 0x350, 0x34b, 0x3, 0x2, 0x2, 0x2, 
    0x351, 0x354, 0x3, 0x2, 0x2, 0x2, 0x352, 0x350, 0x3, 0x2, 0x2, 0x2, 
    0x352, 0x353, 0x3, 0x2, 0x2, 0x2, 0x353, 0x356, 0x3, 0x2, 0x2, 0x2, 
    0x354, 0x352, 0x3, 0x2, 0x2, 0x2, 0x355, 0x347, 0x3, 0x2, 0x2, 0x2, 
    0x355, 0x356, 0x3, 0x2, 0x2, 0x2, 0x356, 0x357, 0x3, 0x2, 0x2, 0x2, 
    0x357, 0x358, 0x7, 0x6, 0x2, 0x2, 0x358, 0x359, 0x5, 0x9e, 0x50, 0x2, 
    0x359, 0x99, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x7, 0x2a, 0x2, 0x2, 
    0x35b, 0x35c, 0x7, 0x24, 0x2, 0x2, 0x35c, 0x35d, 0x5, 0x132, 0x9a, 0x2, 
    0x35d, 0x35e, 0x5, 0xfc, 0x7f, 0x2, 0x35e, 0x35f, 0x7, 0x6, 0x2, 0x2, 
    0x35f, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 0x7, 0x43, 0x2, 0x2, 
    0x361, 0x362, 0x5, 0x13c, 0x9f, 0x2, 0x362, 0x363, 0x7, 0x44, 0x2, 0x2, 
    0x363, 0x364, 0x5, 0x13c, 0x9f, 0x2, 0x364, 0x365, 0x7, 0x6, 0x2, 0x2, 
    0x365, 0x366, 0x5, 0x9e, 0x50, 0x2, 0x366, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x367, 0x369, 0x5, 0xa0, 0x51, 0x2, 0x368, 0x367, 0x3, 0x2, 0x2, 0x2, 
    0x369, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x368, 0x3, 0x2, 0x2, 0x2, 
    0x36a, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x371, 0x3, 0x2, 0x2, 0x2, 
    0x36c, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36e, 0x7, 0x45, 0x2, 0x2, 
    0x36e, 0x36f, 0x5, 0xfc, 0x7f, 0x2, 0x36f, 0x370, 0x7, 0x6, 0x2, 0x2, 
    0x370, 0x372, 0x3, 0x2, 0x2, 0x2, 0x371, 0x36d, 0x3, 0x2, 0x2, 0x2, 
    0x371, 0x372, 0x3, 0x2, 0x2, 0x2, 0x372, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x373, 
    0x374, 0x9, 0xa, 0x2, 0x2, 0x374, 0x375, 0x5, 0xfc, 0x7f, 0x2, 0x375, 
    0x376, 0x7, 0x6, 0x2, 0x2, 0x376, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x377, 0x378, 
    0x7, 0x4c, 0x2, 0x2, 0x378, 0x379, 0x5, 0xf0, 0x79, 0x2, 0x379, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0x37a, 0x37b, 0x5, 0xa6, 0x54, 0x2, 0x37b, 0x37c, 
    0x7, 0x6, 0x2, 0x2, 0x37c, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x37e, 0x7, 
    0x4d, 0x2, 0x2, 0x37e, 0x37f, 0x5, 0xa8, 0x55, 0x2, 0x37f, 0x380, 0x7, 
    0x31, 0x2, 0x2, 0x380, 0x381, 0x5, 0xaa, 0x56, 0x2, 0x381, 0x382, 0x7, 
    0x33, 0x2, 0x2, 0x382, 0x383, 0x7, 0x27, 0x2, 0x2, 0x383, 0x38d, 0x5, 
    0xac, 0x57, 0x2, 0x384, 0x385, 0x7, 0x4e, 0x2, 0x2, 0x385, 0x38a, 0x5, 
    0xae, 0x58, 0x2, 0x386, 0x387, 0x7, 0x4f, 0x2, 0x2, 0x387, 0x389, 0x5, 
    0xae, 0x58, 0x2, 0x388, 0x386, 0x3, 0x2, 0x2, 0x2, 0x389, 0x38c, 0x3, 
    0x2, 0x2, 0x2, 0x38a, 0x388, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x38b, 0x3, 
    0x2, 0x2, 0x2, 0x38b, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38a, 0x3, 
    0x2, 0x2, 0x2, 0x38d, 0x384, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38e, 0x3, 
    0x2, 0x2, 0x2, 0x38e, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x390, 0x9, 
    0xb, 0x2, 0x2, 0x390, 0x391, 0x5, 0xcc, 0x67, 0x2, 0x391, 0x392, 0x7, 
    0x14, 0x2, 0x2, 0x392, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x393, 0x394, 0x7, 
    0x90, 0x2, 0x2, 0x394, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x395, 0x39a, 0x5, 
    0xb0, 0x59, 0x2, 0x396, 0x397, 0x7, 0x5, 0x2, 0x2, 0x397, 0x399, 0x5, 
    0xb0, 0x59, 0x2, 0x398, 0x396, 0x3, 0x2, 0x2, 0x2, 0x399, 0x39c, 0x3, 
    0x2, 0x2, 0x2, 0x39a, 0x398, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x3, 
    0x2, 0x2, 0x2, 0x39b, 0xab, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39a, 0x3, 0x2, 
    0x2, 0x2, 0x39d, 0x39e, 0x5, 0x11e, 0x90, 0x2, 0x39e, 0xad, 0x3, 0x2, 
    0x2, 0x2, 0x39f, 0x3a0, 0x5, 0x11c, 0x8f, 0x2, 0x3a0, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0x3a1, 0x3a4, 0x5, 0xb2, 0x5a, 0x2, 0x3a2, 0x3a4, 0x5, 0xb6, 
    0x5c, 0x2, 0x3a3, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a2, 0x3, 0x2, 
    0x2, 0x2, 0x3a4, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x3aa, 0x5, 0xb4, 
    0x5b, 0x2, 0x3a6, 0x3a7, 0x7, 0x5, 0x2, 0x2, 0x3a7, 0x3a9, 0x5, 0xb4, 
    0x5b, 0x2, 0x3a8, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3ac, 0x3, 0x2, 
    0x2, 0x2, 0x3aa, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ab, 0x3, 0x2, 
    0x2, 0x2, 0x3ab, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3aa, 0x3, 0x2, 
    0x2, 0x2, 0x3ad, 0x3af, 0x7, 0x32, 0x2, 0x2, 0x3ae, 0x3b0, 0x5, 0x13a, 
    0x9e, 0x2, 0x3af, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b0, 0x3, 0x2, 
    0x2, 0x2, 0x3b0, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b2, 0x7, 0x34, 
    0x2, 0x2, 0x3b2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b4, 0x7, 0x90, 
    0x2, 0x2, 0x3b4, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3ba, 0x5, 0xb8, 
    0x5d, 0x2, 0x3b6, 0x3b7, 0x7, 0x5, 0x2, 0x2, 0x3b7, 0x3b9, 0x5, 0xb8, 
    0x5d, 0x2, 0x3b8, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3bc, 0x3, 0x2, 
    0x2, 0x2, 0x3ba, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3bb, 0x3, 0x2, 
    0x2, 0x2, 0x3bb, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3ba, 0x3, 0x2, 
    0x2, 0x2, 0x3bd, 0x3bf, 0x7, 0x1b, 0x2, 0x2, 0x3be, 0x3c0, 0x5, 0x13a, 
    0x9e, 0x2, 0x3bf, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c0, 0x3, 0x2, 
    0x2, 0x2, 0x3c0, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3c2, 0x7, 0x1c, 
    0x2, 0x2, 0x3c2, 0x3c3, 0x5, 0x4c, 0x27, 0x2, 0x3c3, 0xb7, 0x3, 0x2, 
    0x2, 0x2, 0x3c4, 0x3c5, 0x7, 0x90, 0x2, 0x2, 0x3c5, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0x3c6, 0x3c9, 0x5, 0xec, 0x77, 0x2, 0x3c7, 0x3c9, 0x5, 0xbc, 
    0x5f, 0x2, 0x3c8, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c7, 0x3, 0x2, 
    0x2, 0x2, 0x3c9, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3ce, 0x5, 0xbe, 
    0x60, 0x2, 0x3cb, 0x3ce, 0x5, 0xc4, 0x63, 0x2, 0x3cc, 0x3ce, 0x5, 0xc6, 
    0x64, 0x2, 0x3cd, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3cb, 0x3, 0x2, 
    0x2, 0x2, 0x3cd, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0xbd, 0x3, 0x2, 0x2, 
    0x2, 0x3cf, 0x3d0, 0x7, 0x25, 0x2, 0x2, 0x3d0, 0x3d1, 0x5, 0xc0, 0x61, 
    0x2, 0x3d1, 0x3d2, 0x7, 0x6, 0x2, 0x2, 0x3d2, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0x3d3, 0x3d8, 0x5, 0xc2, 0x62, 0x2, 0x3d4, 0x3d5, 0x7, 0x5, 0x2, 0x2, 
    0x3d5, 0x3d7, 0x5, 0xc2, 0x62, 0x2, 0x3d6, 0x3d4, 0x3, 0x2, 0x2, 0x2, 
    0x3d7, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3d6, 0x3, 0x2, 0x2, 0x2, 
    0x3d8, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x3da, 
    0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3dc, 0x5, 0x46, 0x24, 0x2, 0x3dc, 
    0x3dd, 0x7, 0x3c, 0x2, 0x2, 0x3dd, 0x3de, 0x5, 0x13c, 0x9f, 0x2, 0x3de, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e0, 0x7, 0x51, 0x2, 0x2, 0x3e0, 
    0x3e1, 0x5, 0xc8, 0x65, 0x2, 0x3e1, 0x3e2, 0x7, 0x3c, 0x2, 0x2, 0x3e2, 
    0x3e3, 0x5, 0x13c, 0x9f, 0x2, 0x3e3, 0x3e4, 0x7, 0x6, 0x2, 0x2, 0x3e4, 
    0xc5, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e6, 0x7, 0x52, 0x2, 0x2, 0x3e6, 
    0x3e7, 0x5, 0xca, 0x66, 0x2, 0x3e7, 0x3e8, 0x7, 0x22, 0x2, 0x2, 0x3e8, 
    0x3e9, 0x5, 0x11e, 0x90, 0x2, 0x3e9, 0x3ea, 0x7, 0x6, 0x2, 0x2, 0x3ea, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ec, 0x5, 0xb8, 0x5d, 0x2, 0x3ec, 
    0x3ee, 0x7, 0x1b, 0x2, 0x2, 0x3ed, 0x3ef, 0x5, 0x13a, 0x9e, 0x2, 0x3ee, 
    0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3ef, 
    0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f1, 0x7, 0x1c, 0x2, 0x2, 0x3f1, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3f3, 0x5, 0xb4, 0x5b, 0x2, 0x3f3, 
    0x3f5, 0x7, 0x32, 0x2, 0x2, 0x3f4, 0x3f6, 0x5, 0x13a, 0x9e, 0x2, 0x3f5, 
    0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f6, 
    0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f8, 0x7, 0x34, 0x2, 0x2, 0x3f8, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3fb, 0x5, 0xd6, 0x6c, 0x2, 0x3fa, 
    0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3fc, 
    0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x3fd, 
    0x40a, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3ff, 
    0x401, 0x7, 0x53, 0x2, 0x2, 0x400, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x400, 
    0x401, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x3, 0x2, 0x2, 0x2, 0x402, 
    0x403, 0x7, 0x54, 0x2, 0x2, 0x403, 0x404, 0x7, 0x55, 0x2, 0x2, 0x404, 
    0x405, 0x5, 0xfe, 0x80, 0x2, 0x405, 0x408, 0x7, 0x6, 0x2, 0x2, 0x406, 
    0x409, 0x5, 0xce, 0x68, 0x2, 0x407, 0x409, 0x5, 0xd2, 0x6a, 0x2, 0x408, 
    0x406, 0x3, 0x2, 0x2, 0x2, 0x408, 0x407, 0x3, 0x2, 0x2, 0x2, 0x409, 
    0x40b, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x400, 0x3, 0x2, 0x2, 0x2, 0x40a, 
    0x40b, 0x3, 0x2, 0x2, 0x2, 0x40b, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x40e, 
    0x5, 0xd0, 0x69, 0x2, 0x40d, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x40f, 
    0x3, 0x2, 0x2, 0x2, 0x40f, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x410, 
    0x3, 0x2, 0x2, 0x2, 0x410, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x411, 0x414, 0x7, 
    0x56, 0x2, 0x2, 0x412, 0x415, 0x5, 0x11c, 0x8f, 0x2, 0x413, 0x415, 0x5, 
    0x11a, 0x8e, 0x2, 0x414, 0x412, 0x3, 0x2, 0x2, 0x2, 0x414, 0x413, 0x3, 
    0x2, 0x2, 0x2, 0x415, 0x416, 0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 0x7, 
    0x6, 0x2, 0x2, 0x417, 0x418, 0x5, 0xcc, 0x67, 0x2, 0x418, 0x419, 0x7, 
    0x14, 0x2, 0x2, 0x419, 0x41a, 0x7, 0x6, 0x2, 0x2, 0x41a, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0x41b, 0x41d, 0x5, 0xd4, 0x6b, 0x2, 0x41c, 0x41b, 0x3, 
    0x2, 0x2, 0x2, 0x41d, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x41e, 0x41c, 0x3, 
    0x2, 0x2, 0x2, 0x41e, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x41f, 0xd3, 0x3, 0x2, 
    0x2, 0x2, 0x420, 0x423, 0x7, 0x57, 0x2, 0x2, 0x421, 0x424, 0x5, 0x11c, 
    0x8f, 0x2, 0x422, 0x424, 0x5, 0x11a, 0x8e, 0x2, 0x423, 0x421, 0x3, 0x2, 
    0x2, 0x2, 0x423, 0x422, 0x3, 0x2, 0x2, 0x2, 0x424, 0x425, 0x3, 0x2, 
    0x2, 0x2, 0x425, 0x426, 0x7, 0x6, 0x2, 0x2, 0x426, 0x427, 0x5, 0xcc, 
    0x67, 0x2, 0x427, 0x428, 0x7, 0x14, 0x2, 0x2, 0x428, 0x429, 0x7, 0x6, 
    0x2, 0x2, 0x429, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x42a, 0x42d, 0x5, 0xba, 
    0x5e, 0x2, 0x42b, 0x42d, 0x5, 0xd8, 0x6d, 0x2, 0x42c, 0x42a, 0x3, 0x2, 
    0x2, 0x2, 0x42c, 0x42b, 0x3, 0x2, 0x2, 0x2, 0x42d, 0xd7, 0x3, 0x2, 0x2, 
    0x2, 0x42e, 0x433, 0x5, 0xda, 0x6e, 0x2, 0x42f, 0x433, 0x5, 0xdc, 0x6f, 
    0x2, 0x430, 0x433, 0x5, 0xe4, 0x73, 0x2, 0x431, 0x433, 0x5, 0xe8, 0x75, 
    0x2, 0x432, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x432, 0x42f, 0x3, 0x2, 0x2, 
    0x2, 0x432, 0x430, 0x3, 0x2, 0x2, 0x2, 0x432, 0x431, 0x3, 0x2, 0x2, 
    0x2, 0x433, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x434, 0x435, 0x7, 0x17, 0x2, 
    0x2, 0x435, 0x438, 0x5, 0x126, 0x94, 0x2, 0x436, 0x437, 0x7, 0x18, 0x2, 
    0x2, 0x437, 0x439, 0x5, 0x11a, 0x8e, 0x2, 0x438, 0x436, 0x3, 0x2, 0x2, 
    0x2, 0x438, 0x439, 0x3, 0x2, 0x2, 0x2, 0x439, 0x43a, 0x3, 0x2, 0x2, 
    0x2, 0x43a, 0x43b, 0x7, 0x6, 0x2, 0x2, 0x43b, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0x43c, 0x440, 0x5, 0xde, 0x70, 0x2, 0x43d, 0x440, 0x5, 0xe0, 0x71, 0x2, 
    0x43e, 0x440, 0x5, 0xe2, 0x72, 0x2, 0x43f, 0x43c, 0x3, 0x2, 0x2, 0x2, 
    0x43f, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x43e, 0x3, 0x2, 0x2, 0x2, 
    0x440, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x441, 0x442, 0x7, 0x58, 0x2, 0x2, 
    0x442, 0x443, 0x5, 0x11c, 0x8f, 0x2, 0x443, 0x444, 0x7, 0x6, 0x2, 0x2, 
    0x444, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x445, 0x446, 0x7, 0x58, 0x2, 0x2, 
    0x446, 0x447, 0x5, 0x11a, 0x8e, 0x2, 0x447, 0x448, 0x7, 0x6, 0x2, 0x2, 
    0x448, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x449, 0x44a, 0x7, 0x59, 0x2, 0x2, 
    0x44a, 0x44d, 0x5, 0x126, 0x94, 0x2, 0x44b, 0x44c, 0x7, 0x18, 0x2, 0x2, 
    0x44c, 0x44e, 0x5, 0x11a, 0x8e, 0x2, 0x44d, 0x44b, 0x3, 0x2, 0x2, 0x2, 
    0x44d, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x44f, 0x3, 0x2, 0x2, 0x2, 
    0x44f, 0x450, 0x7, 0x6, 0x2, 0x2, 0x450, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x451, 
    0x454, 0x9, 0xc, 0x2, 0x2, 0x452, 0x455, 0x5, 0xf0, 0x79, 0x2, 0x453, 
    0x455, 0x5, 0xf8, 0x7d, 0x2, 0x454, 0x452, 0x3, 0x2, 0x2, 0x2, 0x454, 
    0x453, 0x3, 0x2, 0x2, 0x2, 0x455, 0x458, 0x3, 0x2, 0x2, 0x2, 0x456, 
    0x458, 0x5, 0xe6, 0x74, 0x2, 0x457, 0x451, 0x3, 0x2, 0x2, 0x2, 0x457, 
    0x456, 0x3, 0x2, 0x2, 0x2, 0x458, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x459, 0x45a, 
    0x7, 0x5a, 0x2, 0x2, 0x45a, 0x461, 0x5, 0xfa, 0x7e, 0x2, 0x45b, 0x45c, 
    0x7, 0x5c, 0x2, 0x2, 0x45c, 0x45d, 0x5, 0xcc, 0x67, 0x2, 0x45d, 0x45e, 
    0x7, 0x14, 0x2, 0x2, 0x45e, 0x45f, 0x7, 0x6, 0x2, 0x2, 0x45f, 0x461, 
    0x3, 0x2, 0x2, 0x2, 0x460, 0x459, 0x3, 0x2, 0x2, 0x2, 0x460, 0x45b, 
    0x3, 0x2, 0x2, 0x2, 0x461, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x462, 0x463, 0x7, 
    0x5d, 0x2, 0x2, 0x463, 0x468, 0x5, 0xea, 0x76, 0x2, 0x464, 0x465, 0x7, 
    0x5, 0x2, 0x2, 0x465, 0x467, 0x5, 0xea, 0x76, 0x2, 0x466, 0x464, 0x3, 
    0x2, 0x2, 0x2, 0x467, 0x46a, 0x3, 0x2, 0x2, 0x2, 0x468, 0x466, 0x3, 
    0x2, 0x2, 0x2, 0x468, 0x469, 0x3, 0x2, 0x2, 0x2, 0x469, 0x46b, 0x3, 
    0x2, 0x2, 0x2, 0x46a, 0x468, 0x3, 0x2, 0x2, 0x2, 0x46b, 0x46c, 0x7, 
    0x6, 0x2, 0x2, 0x46c, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x473, 0x5, 0x13c, 
    0x9f, 0x2, 0x46e, 0x46f, 0x5, 0x46, 0x24, 0x2, 0x46f, 0x470, 0x7, 0x3c, 
    0x2, 0x2, 0x470, 0x471, 0x5, 0x13c, 0x9f, 0x2, 0x471, 0x473, 0x3, 0x2, 
    0x2, 0x2, 0x472, 0x46d, 0x3, 0x2, 0x2, 0x2, 0x472, 0x46e, 0x3, 0x2, 
    0x2, 0x2, 0x473, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x474, 0x476, 0x7, 0x53, 
    0x2, 0x2, 0x475, 0x474, 0x3, 0x2, 0x2, 0x2, 0x475, 0x476, 0x3, 0x2, 
    0x2, 0x2, 0x476, 0x477, 0x3, 0x2, 0x2, 0x2, 0x477, 0x47a, 0x5, 0xee, 
    0x78, 0x2, 0x478, 0x47a, 0x5, 0xfa, 0x7e, 0x2, 0x479, 0x475, 0x3, 0x2, 
    0x2, 0x2, 0x479, 0x478, 0x3, 0x2, 0x2, 0x2, 0x47a, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0x47b, 0x480, 0x5, 0xf0, 0x79, 0x2, 0x47c, 0x480, 0x5, 0xf2, 0x7a, 
    0x2, 0x47d, 0x480, 0x5, 0xf4, 0x7b, 0x2, 0x47e, 0x480, 0x5, 0xf8, 0x7d, 
    0x2, 0x47f, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x47c, 0x3, 0x2, 0x2, 
    0x2, 0x47f, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x47e, 0x3, 0x2, 0x2, 
    0x2, 0x480, 0xef, 0x3, 0x2, 0x2, 0x2, 0x481, 0x482, 0x5, 0x11c, 0x8f, 
    0x2, 0x482, 0x483, 0x5, 0xfc, 0x7f, 0x2, 0x483, 0x484, 0x7, 0x6, 0x2, 
    0x2, 0x484, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x485, 0x486, 0x7, 0x5e, 0x2, 
    0x2, 0x486, 0x487, 0x5, 0x126, 0x94, 0x2, 0x487, 0x488, 0x7, 0x18, 0x2, 
    0x2, 0x488, 0x489, 0x5, 0x11a, 0x8e, 0x2, 0x489, 0x48a, 0x5, 0xfe, 0x80, 
    0x2, 0x48a, 0x48b, 0x7, 0x6, 0x2, 0x2, 0x48b, 0xf3, 0x3, 0x2, 0x2, 0x2, 
    0x48c, 0x48d, 0x7, 0x5f, 0x2, 0x2, 0x48d, 0x48e, 0x5, 0xf6, 0x7c, 0x2, 
    0x48e, 0x48f, 0x7, 0x60, 0x2, 0x2, 0x48f, 0x490, 0x5, 0x132, 0x9a, 0x2, 
    0x490, 0x491, 0x5, 0xfe, 0x80, 0x2, 0x491, 0x492, 0x7, 0x6, 0x2, 0x2, 
    0x492, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x493, 0x496, 0x5, 0xc2, 0x62, 0x2, 
    0x494, 0x496, 0x5, 0x46, 0x24, 0x2, 0x495, 0x493, 0x3, 0x2, 0x2, 0x2, 
    0x495, 0x494, 0x3, 0x2, 0x2, 0x2, 0x496, 0x49e, 0x3, 0x2, 0x2, 0x2, 
    0x497, 0x49a, 0x7, 0x5, 0x2, 0x2, 0x498, 0x49b, 0x5, 0xc2, 0x62, 0x2, 
    0x499, 0x49b, 0x5, 0x46, 0x24, 0x2, 0x49a, 0x498, 0x3, 0x2, 0x2, 0x2, 
    0x49a, 0x499, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x49d, 0x3, 0x2, 0x2, 0x2, 
    0x49c, 0x497, 0x3, 0x2, 0x2, 0x2, 0x49d, 0x4a0, 0x3, 0x2, 0x2, 0x2, 
    0x49e, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x49e, 0x49f, 0x3, 0x2, 0x2, 0x2, 
    0x49f, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x4a0, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x4a1, 
    0x4a2, 0x5, 0x5a, 0x2e, 0x2, 0x4a2, 0x4a3, 0x7, 0x27, 0x2, 0x2, 0x4a3, 
    0x4a5, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0x4a4, 
    0x4a5, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0x4a6, 
    0x4a7, 0x5, 0x13c, 0x9f, 0x2, 0x4a7, 0x4a8, 0x7, 0x3c, 0x2, 0x2, 0x4a8, 
    0x4a9, 0x5, 0x13c, 0x9f, 0x2, 0x4a9, 0x4ae, 0x5, 0xfe, 0x80, 0x2, 0x4aa, 
    0x4ab, 0x7, 0x61, 0x2, 0x2, 0x4ab, 0x4ac, 0x5, 0x13c, 0x9f, 0x2, 0x4ac, 
    0x4ad, 0x5, 0xfe, 0x80, 0x2, 0x4ad, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x4ae, 
    0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4b0, 0x3, 0x2, 0x2, 0x2, 0x4b0, 
    0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0x4b1, 
    0x4b2, 0x3, 0x2, 0x2, 0x2, 0x4b2, 0x4b3, 0x7, 0x6, 0x2, 0x2, 0x4b3, 
    0xf9, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x4b5, 0x5, 0x5a, 0x2e, 0x2, 0x4b5, 
    0x4b6, 0x7, 0x27, 0x2, 0x2, 0x4b6, 0x4b8, 0x3, 0x2, 0x2, 0x2, 0x4b7, 
    0x4b4, 0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b8, 0x3, 0x2, 0x2, 0x2, 0x4b8, 
    0x4b9, 0x3, 0x2, 0x2, 0x2, 0x4b9, 0x4ba, 0x7, 0x62, 0x2, 0x2, 0x4ba, 
    0x4bb, 0x5, 0xcc, 0x67, 0x2, 0x4bb, 0x4bc, 0x7, 0x14, 0x2, 0x2, 0x4bc, 
    0x4bd, 0x7, 0x6, 0x2, 0x2, 0x4bd, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x4be, 0x4c1, 
    0x5, 0xfe, 0x80, 0x2, 0x4bf, 0x4c1, 0x5, 0x100, 0x81, 0x2, 0x4c0, 0x4be, 
    0x3, 0x2, 0x2, 0x2, 0x4c0, 0x4bf, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0xfd, 0x3, 
    0x2, 0x2, 0x2, 0x4c2, 0x4c5, 0x5, 0x102, 0x82, 0x2, 0x4c3, 0x4c5, 0x5, 
    0x104, 0x83, 0x2, 0x4c4, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4c3, 0x3, 
    0x2, 0x2, 0x2, 0x4c5, 0xff, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c7, 0x7, 0x50, 
    0x2, 0x2, 0x4c7, 0x4c8, 0x5, 0xcc, 0x67, 0x2, 0x4c8, 0x4c9, 0x7, 0x14, 
    0x2, 0x2, 0x4c9, 0x101, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cb, 0x7, 0x63, 
    0x2, 0x2, 0x4cb, 0x4cd, 0x5, 0x106, 0x84, 0x2, 0x4cc, 0x4ca, 0x3, 0x2, 
    0x2, 0x2, 0x4cc, 0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4cd, 0x103, 0x3, 0x2, 
    0x2, 0x2, 0x4ce, 0x4cf, 0x7, 0x64, 0x2, 0x2, 0x4cf, 0x4d4, 0x5, 0x10a, 
    0x86, 0x2, 0x4d0, 0x4d1, 0x7, 0x1b, 0x2, 0x2, 0x4d1, 0x4d2, 0x5, 0x106, 
    0x84, 0x2, 0x4d2, 0x4d3, 0x7, 0x1c, 0x2, 0x2, 0x4d3, 0x4d5, 0x3, 0x2, 
    0x2, 0x2, 0x4d4, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4d5, 0x3, 0x2, 
    0x2, 0x2, 0x4d5, 0x105, 0x3, 0x2, 0x2, 0x2, 0x4d6, 0x4db, 0x5, 0x108, 
    0x85, 0x2, 0x4d7, 0x4d8, 0x7, 0x5, 0x2, 0x2, 0x4d8, 0x4da, 0x5, 0x108, 
    0x85, 0x2, 0x4d9, 0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4da, 0x4dd, 0x3, 0x2, 
    0x2, 0x2, 0x4db, 0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x4dc, 0x3, 0x2, 
    0x2, 0x2, 0x4dc, 0x107, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4db, 0x3, 0x2, 
    0x2, 0x2, 0x4de, 0x4e1, 0x5, 0x10c, 0x87, 0x2, 0x4df, 0x4e1, 0x5, 0x110, 
    0x89, 0x2, 0x4e0, 0x4de, 0x3, 0x2, 0x2, 0x2, 0x4e0, 0x4df, 0x3, 0x2, 
    0x2, 0x2, 0x4e1, 0x109, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e5, 0x5, 0x10e, 
    0x88, 0x2, 0x4e3, 0x4e5, 0x5, 0x112, 0x8a, 0x2, 0x4e4, 0x4e2, 0x3, 0x2, 
    0x2, 0x2, 0x4e4, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4e5, 0x10b, 0x3, 0x2, 
    0x2, 0x2, 0x4e6, 0x4e7, 0x5, 0x5a, 0x2e, 0x2, 0x4e7, 0x10d, 0x3, 0x2, 
    0x2, 0x2, 0x4e8, 0x4e9, 0x5, 0xa8, 0x55, 0x2, 0x4e9, 0x10f, 0x3, 0x2, 
    0x2, 0x2, 0x4ea, 0x4eb, 0x5, 0xe, 0x8, 0x2, 0x4eb, 0x4ef, 0x7, 0x27, 
    0x2, 0x2, 0x4ec, 0x4f0, 0x5, 0x114, 0x8b, 0x2, 0x4ed, 0x4ee, 0x7, 0x65, 
    0x2, 0x2, 0x4ee, 0x4f0, 0x5, 0x116, 0x8c, 0x2, 0x4ef, 0x4ec, 0x3, 0x2, 
    0x2, 0x2, 0x4ef, 0x4ed, 0x3, 0x2, 0x2, 0x2, 0x4f0, 0x4f9, 0x3, 0x2, 
    0x2, 0x2, 0x4f1, 0x4f5, 0x7, 0x5, 0x2, 0x2, 0x4f2, 0x4f6, 0x5, 0x114, 
    0x8b, 0x2, 0x4f3, 0x4f4, 0x7, 0x65, 0x2, 0x2, 0x4f4, 0x4f6, 0x5, 0x116, 
    0x8c, 0x2, 0x4f5, 0x4f2, 0x3, 0x2, 0x2, 0x2, 0x4f5, 0x4f3, 0x3, 0x2, 
    0x2, 0x2, 0x4f6, 0x4f8, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f1, 0x3, 0x2, 
    0x2, 0x2, 0x4f8, 0x4fb, 0x3, 0x2, 0x2, 0x2, 0x4f9, 0x4f7, 0x3, 0x2, 
    0x2, 0x2, 0x4f9, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x4fb, 0x4f9, 0x3, 0x2, 0x2, 0x2, 0x4fc, 0x4fd, 0x5, 0xe, 
    0x8, 0x2, 0x4fd, 0x4fe, 0x7, 0x27, 0x2, 0x2, 0x4fe, 0x4ff, 0x7, 0x66, 
    0x2, 0x2, 0x4ff, 0x500, 0x5, 0x118, 0x8d, 0x2, 0x500, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x501, 0x502, 0x7, 0x91, 0x2, 0x2, 0x502, 0x115, 0x3, 0x2, 
    0x2, 0x2, 0x503, 0x504, 0x7, 0x91, 0x2, 0x2, 0x504, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x505, 0x506, 0x7, 0x91, 0x2, 0x2, 0x506, 0x119, 0x3, 0x2, 
    0x2, 0x2, 0x507, 0x508, 0x7, 0x67, 0x2, 0x2, 0x508, 0x50d, 0x5, 0x11c, 
    0x8f, 0x2, 0x509, 0x50a, 0x7, 0x4f, 0x2, 0x2, 0x50a, 0x50c, 0x5, 0x11c, 
    0x8f, 0x2, 0x50b, 0x509, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x50f, 0x3, 0x2, 
    0x2, 0x2, 0x50d, 0x50b, 0x3, 0x2, 0x2, 0x2, 0x50d, 0x50e, 0x3, 0x2, 
    0x2, 0x2, 0x50e, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x50d, 0x3, 0x2, 
    0x2, 0x2, 0x510, 0x511, 0x5, 0x5a, 0x2e, 0x2, 0x511, 0x512, 0x7, 0x27, 
    0x2, 0x2, 0x512, 0x514, 0x3, 0x2, 0x2, 0x2, 0x513, 0x510, 0x3, 0x2, 
    0x2, 0x2, 0x513, 0x514, 0x3, 0x2, 0x2, 0x2, 0x514, 0x515, 0x3, 0x2, 
    0x2, 0x2, 0x515, 0x516, 0x5, 0x11e, 0x90, 0x2, 0x516, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x517, 0x518, 0x5, 0x120, 0x91, 0x2, 0x518, 0x11f, 0x3, 0x2, 
    0x2, 0x2, 0x519, 0x51a, 0x8, 0x91, 0x1, 0x2, 0x51a, 0x51b, 0x7, 0x1b, 
    0x2, 0x2, 0x51b, 0x51c, 0x5, 0x120, 0x91, 0x2, 0x51c, 0x51d, 0x7, 0x1c, 
    0x2, 0x2, 0x51d, 0x525, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x525, 0x5, 0x122, 
    0x92, 0x2, 0x51f, 0x525, 0x5, 0x124, 0x93, 0x2, 0x520, 0x521, 0x7, 0x6d, 
    0x2, 0x2, 0x521, 0x525, 0x5, 0x120, 0x91, 0x5, 0x522, 0x525, 0x7, 0x6e, 
    0x2, 0x2, 0x523, 0x525, 0x7, 0x6f, 0x2, 0x2, 0x524, 0x519, 0x3, 0x2, 
    0x2, 0x2, 0x524, 0x51e, 0x3, 0x2, 0x2, 0x2, 0x524, 0x51f, 0x3, 0x2, 
    0x2, 0x2, 0x524, 0x520, 0x3, 0x2, 0x2, 0x2, 0x524, 0x522, 0x3, 0x2, 
    0x2, 0x2, 0x524, 0x523, 0x3, 0x2, 0x2, 0x2, 0x525, 0x53e, 0x3, 0x2, 
    0x2, 0x2, 0x526, 0x527, 0xc, 0xb, 0x2, 0x2, 0x527, 0x528, 0x7, 0x68, 
    0x2, 0x2, 0x528, 0x53d, 0x5, 0x120, 0x91, 0xc, 0x529, 0x52a, 0xc, 0xa, 
    0x2, 0x2, 0x52a, 0x52b, 0x7, 0x68, 0x2, 0x2, 0x52b, 0x52c, 0x7, 0x69, 
    0x2, 0x2, 0x52c, 0x52d, 0x7, 0x68, 0x2, 0x2, 0x52d, 0x53d, 0x5, 0x120, 
    0x91, 0xb, 0x52e, 0x52f, 0xc, 0x9, 0x2, 0x2, 0x52f, 0x530, 0x7, 0x6a, 
    0x2, 0x2, 0x530, 0x53d, 0x5, 0x120, 0x91, 0xa, 0x531, 0x532, 0xc, 0x8, 
    0x2, 0x2, 0x532, 0x533, 0x7, 0x6a, 0x2, 0x2, 0x533, 0x534, 0x7, 0x69, 
    0x2, 0x2, 0x534, 0x535, 0x7, 0x6a, 0x2, 0x2, 0x535, 0x53d, 0x5, 0x120, 
    0x91, 0x9, 0x536, 0x537, 0xc, 0x7, 0x2, 0x2, 0x537, 0x538, 0x7, 0x6b, 
    0x2, 0x2, 0x538, 0x53d, 0x5, 0x120, 0x91, 0x8, 0x539, 0x53a, 0xc, 0x6, 
    0x2, 0x2, 0x53a, 0x53b, 0x7, 0x6c, 0x2, 0x2, 0x53b, 0x53d, 0x5, 0x120, 
    0x91, 0x7, 0x53c, 0x526, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x529, 0x3, 0x2, 
    0x2, 0x2, 0x53c, 0x52e, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x531, 0x3, 0x2, 
    0x2, 0x2, 0x53c, 0x536, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x539, 0x3, 0x2, 
    0x2, 0x2, 0x53d, 0x540, 0x3, 0x2, 0x2, 0x2, 0x53e, 0x53c, 0x3, 0x2, 
    0x2, 0x2, 0x53e, 0x53f, 0x3, 0x2, 0x2, 0x2, 0x53f, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x540, 0x53e, 0x3, 0x2, 0x2, 0x2, 0x541, 0x543, 0x5, 0x144, 
    0xa3, 0x2, 0x542, 0x541, 0x3, 0x2, 0x2, 0x2, 0x542, 0x543, 0x3, 0x2, 
    0x2, 0x2, 0x543, 0x546, 0x3, 0x2, 0x2, 0x2, 0x544, 0x545, 0x9, 0xd, 
    0x2, 0x2, 0x545, 0x547, 0x7, 0x6d, 0x2, 0x2, 0x546, 0x544, 0x3, 0x2, 
    0x2, 0x2, 0x546, 0x547, 0x3, 0x2, 0x2, 0x2, 0x547, 0x548, 0x3, 0x2, 
    0x2, 0x2, 0x548, 0x54a, 0x5, 0x7e, 0x40, 0x2, 0x549, 0x54b, 0x5, 0x144, 
    0xa3, 0x2, 0x54a, 0x549, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x54b, 0x3, 0x2, 
    0x2, 0x2, 0x54b, 0x555, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x54d, 0x9, 0xd, 
    0x2, 0x2, 0x54d, 0x54f, 0x7, 0x6d, 0x2, 0x2, 0x54e, 0x54c, 0x3, 0x2, 
    0x2, 0x2, 0x54e, 0x54f, 0x3, 0x2, 0x2, 0x2, 0x54f, 0x550, 0x3, 0x2, 
    0x2, 0x2, 0x550, 0x551, 0x5, 0x7e, 0x40, 0x2, 0x551, 0x552, 0x5, 0x144, 
    0xa3, 0x2, 0x552, 0x554, 0x3, 0x2, 0x2, 0x2, 0x553, 0x54e, 0x3, 0x2, 
    0x2, 0x2, 0x554, 0x557, 0x3, 0x2, 0x2, 0x2, 0x555, 0x553, 0x3, 0x2, 
    0x2, 0x2, 0x555, 0x556, 0x3, 0x2, 0x2, 0x2, 0x556, 0x56b, 0x3, 0x2, 
    0x2, 0x2, 0x557, 0x555, 0x3, 0x2, 0x2, 0x2, 0x558, 0x559, 0x5, 0xb4, 
    0x5b, 0x2, 0x559, 0x55b, 0x7, 0x32, 0x2, 0x2, 0x55a, 0x55c, 0x5, 0x144, 
    0xa3, 0x2, 0x55b, 0x55a, 0x3, 0x2, 0x2, 0x2, 0x55b, 0x55c, 0x3, 0x2, 
    0x2, 0x2, 0x55c, 0x55d, 0x3, 0x2, 0x2, 0x2, 0x55d, 0x55e, 0x7, 0x34, 
    0x2, 0x2, 0x55e, 0x56b, 0x3, 0x2, 0x2, 0x2, 0x55f, 0x560, 0x5, 0x13c, 
    0x9f, 0x2, 0x560, 0x562, 0x7, 0x23, 0x2, 0x2, 0x561, 0x563, 0x5, 0x92, 
    0x4a, 0x2, 0x562, 0x561, 0x3, 0x2, 0x2, 0x2, 0x563, 0x564, 0x3, 0x2, 
    0x2, 0x2, 0x564, 0x562, 0x3, 0x2, 0x2, 0x2, 0x564, 0x565, 0x3, 0x2, 
    0x2, 0x2, 0x565, 0x56b, 0x3, 0x2, 0x2, 0x2, 0x566, 0x567, 0x5, 0x13c, 
    0x9f, 0x2, 0x567, 0x568, 0x7, 0x23, 0x2, 0x2, 0x568, 0x569, 0x5, 0x132, 
    0x9a, 0x2, 0x569, 0x56b, 0x3, 0x2, 0x2, 0x2, 0x56a, 0x542, 0x3, 0x2, 
    0x2, 0x2, 0x56a, 0x558, 0x3, 0x2, 0x2, 0x2, 0x56a, 0x55f, 0x3, 0x2, 
    0x2, 0x2, 0x56a, 0x566, 0x3, 0x2, 0x2, 0x2, 0x56b, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x56c, 0x56d, 0x7, 0x12, 0x2, 0x2, 0x56d, 0x570, 0x5, 0x126, 
    0x94, 0x2, 0x56e, 0x56f, 0x7, 0x72, 0x2, 0x2, 0x56f, 0x571, 0x5, 0x120, 
    0x91, 0x2, 0x570, 0x56e, 0x3, 0x2, 0x2, 0x2, 0x570, 0x571, 0x3, 0x2, 
    0x2, 0x2, 0x571, 0x575, 0x3, 0x2, 0x2, 0x2, 0x572, 0x573, 0x7, 0x73, 
    0x2, 0x2, 0x573, 0x576, 0x5, 0x120, 0x91, 0x2, 0x574, 0x576, 0x5, 0x124, 
    0x93, 0x2, 0x575, 0x572, 0x3, 0x2, 0x2, 0x2, 0x575, 0x574, 0x3, 0x2, 
    0x2, 0x2, 0x576, 0x57d, 0x3, 0x2, 0x2, 0x2, 0x577, 0x578, 0x7, 0x74, 
    0x2, 0x2, 0x578, 0x579, 0x5, 0x126, 0x94, 0x2, 0x579, 0x57a, 0x7, 0x72, 
    0x2, 0x2, 0x57a, 0x57b, 0x5, 0x120, 0x91, 0x2, 0x57b, 0x57d, 0x3, 0x2, 
    0x2, 0x2, 0x57c, 0x56c, 0x3, 0x2, 0x2, 0x2, 0x57c, 0x577, 0x3, 0x2, 
    0x2, 0x2, 0x57d, 0x125, 0x3, 0x2, 0x2, 0x2, 0x57e, 0x585, 0x5, 0x128, 
    0x95, 0x2, 0x57f, 0x585, 0x5, 0x12a, 0x96, 0x2, 0x580, 0x581, 0x5, 0x12a, 
    0x96, 0x2, 0x581, 0x582, 0x7, 0x5, 0x2, 0x2, 0x582, 0x583, 0x5, 0x128, 
    0x95, 0x2, 0x583, 0x585, 0x3, 0x2, 0x2, 0x2, 0x584, 0x57e, 0x3, 0x2, 
    0x2, 0x2, 0x584, 0x57f, 0x3, 0x2, 0x2, 0x2, 0x584, 0x580, 0x3, 0x2, 
    0x2, 0x2, 0x585, 0x127, 0x3, 0x2, 0x2, 0x2, 0x586, 0x587, 0x5, 0x12e, 
    0x98, 0x2, 0x587, 0x129, 0x3, 0x2, 0x2, 0x2, 0x588, 0x58d, 0x5, 0x12c, 
    0x97, 0x2, 0x589, 0x58a, 0x7, 0x5, 0x2, 0x2, 0x58a, 0x58c, 0x5, 0x12c, 
    0x97, 0x2, 0x58b, 0x589, 0x3, 0x2, 0x2, 0x2, 0x58c, 0x58f, 0x3, 0x2, 
    0x2, 0x2, 0x58d, 0x58b, 0x3, 0x2, 0x2, 0x2, 0x58d, 0x58e, 0x3, 0x2, 
    0x2, 0x2, 0x58e, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x58f, 0x58d, 0x3, 0x2, 
    0x2, 0x2, 0x590, 0x591, 0x5, 0x12e, 0x98, 0x2, 0x591, 0x592, 0x5, 0x130, 
    0x99, 0x2, 0x592, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x593, 0x598, 0x5, 0x46, 
    0x24, 0x2, 0x594, 0x595, 0x7, 0x5, 0x2, 0x2, 0x595, 0x597, 0x5, 0x46, 
    0x24, 0x2, 0x596, 0x594, 0x3, 0x2, 0x2, 0x2, 0x597, 0x59a, 0x3, 0x2, 
    0x2, 0x2, 0x598, 0x596, 0x3, 0x2, 0x2, 0x2, 0x598, 0x599, 0x3, 0x2, 
    0x2, 0x2, 0x599, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x59a, 0x598, 0x3, 0x2, 
    0x2, 0x2, 0x59b, 0x59c, 0x9, 0xe, 0x2, 0x2, 0x59c, 0x59d, 0x5, 0x132, 
    0x9a, 0x2, 0x59d, 0x131, 0x3, 0x2, 0x2, 0x2, 0x59e, 0x59f, 0x5, 0x90, 
    0x49, 0x2, 0x59f, 0x5a0, 0x5, 0x134, 0x9b, 0x2, 0x5a0, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x5a1, 0x5a2, 0x7, 0x1b, 0x2, 0x2, 0x5a2, 0x5a3, 0x5, 0x138, 
    0x9d, 0x2, 0x5a3, 0x5a4, 0x7, 0x1c, 0x2, 0x2, 0x5a4, 0x5a7, 0x3, 0x2, 
    0x2, 0x2, 0x5a5, 0x5a7, 0x5, 0x138, 0x9d, 0x2, 0x5a6, 0x5a1, 0x3, 0x2, 
    0x2, 0x2, 0x5a6, 0x5a5, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x5a8, 0x5a9, 0x7, 0x1b, 0x2, 0x2, 0x5a9, 0x5ac, 0x5, 0x3e, 
    0x20, 0x2, 0x5aa, 0x5ab, 0x7, 0x1d, 0x2, 0x2, 0x5ab, 0x5ad, 0x5, 0x144, 
    0xa3, 0x2, 0x5ac, 0x5aa, 0x3, 0x2, 0x2, 0x2, 0x5ac, 0x5ad, 0x3, 0x2, 
    0x2, 0x2, 0x5ad, 0x5ae, 0x3, 0x2, 0x2, 0x2, 0x5ae, 0x5af, 0x7, 0x1c, 
    0x2, 0x2, 0x5af, 0x5b7, 0x3, 0x2, 0x2, 0x2, 0x5b0, 0x5b1, 0x5, 0x90, 
    0x49, 0x2, 0x5b1, 0x5b4, 0x5, 0x3e, 0x20, 0x2, 0x5b2, 0x5b3, 0x7, 0x1d, 
    0x2, 0x2, 0x5b3, 0x5b5, 0x5, 0x144, 0xa3, 0x2, 0x5b4, 0x5b2, 0x3, 0x2, 
    0x2, 0x2, 0x5b4, 0x5b5, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b7, 0x3, 0x2, 
    0x2, 0x2, 0x5b6, 0x5a8, 0x3, 0x2, 0x2, 0x2, 0x5b6, 0x5b0, 0x3, 0x2, 
    0x2, 0x2, 0x5b7, 0x137, 0x3, 0x2, 0x2, 0x2, 0x5b8, 0x5bb, 0x5, 0x52, 
    0x2a, 0x2, 0x5b9, 0x5ba, 0x7, 0x24, 0x2, 0x2, 0x5ba, 0x5bc, 0x5, 0x144, 
    0xa3, 0x2, 0x5bb, 0x5b9, 0x3, 0x2, 0x2, 0x2, 0x5bb, 0x5bc, 0x3, 0x2, 
    0x2, 0x2, 0x5bc, 0x5c3, 0x3, 0x2, 0x2, 0x2, 0x5bd, 0x5c0, 0x5, 0x3e, 
    0x20, 0x2, 0x5be, 0x5bf, 0x7, 0x1d, 0x2, 0x2, 0x5bf, 0x5c1, 0x5, 0x144, 
    0xa3, 0x2, 0x5c0, 0x5be, 0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c1, 0x3, 0x2, 
    0x2, 0x2, 0x5c1, 0x5c3, 0x3, 0x2, 0x2, 0x2, 0x5c2, 0x5b8, 0x3, 0x2, 
    0x2, 0x2, 0x5c2, 0x5bd, 0x3, 0x2, 0x2, 0x2, 0x5c3, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x5c4, 0x5c9, 0x5, 0x132, 0x9a, 0x2, 0x5c5, 0x5c6, 0x7, 0x5, 
    0x2, 0x2, 0x5c6, 0x5c8, 0x5, 0x132, 0x9a, 0x2, 0x5c7, 0x5c5, 0x3, 0x2, 
    0x2, 0x2, 0x5c8, 0x5cb, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0x5c7, 0x3, 0x2, 
    0x2, 0x2, 0x5c9, 0x5ca, 0x3, 0x2, 0x2, 0x2, 0x5ca, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x5cb, 0x5c9, 0x3, 0x2, 0x2, 0x2, 0x5cc, 0x5ce, 0x8, 0x9f, 
    0x1, 0x2, 0x5cd, 0x5cf, 0x5, 0x140, 0xa1, 0x2, 0x5ce, 0x5cd, 0x3, 0x2, 
    0x2, 0x2, 0x5ce, 0x5cf, 0x3, 0x2, 0x2, 0x2, 0x5cf, 0x5d9, 0x3, 0x2, 
    0x2, 0x2, 0x5d0, 0x5d2, 0x5, 0x6e, 0x38, 0x2, 0x5d1, 0x5d0, 0x3, 0x2, 
    0x2, 0x2, 0x5d2, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d3, 0x5d1, 0x3, 0x2, 
    0x2, 0x2, 0x5d3, 0x5d4, 0x3, 0x2, 0x2, 0x2, 0x5d4, 0x5d5, 0x3, 0x2, 
    0x2, 0x2, 0x5d5, 0x5d6, 0x5, 0x140, 0xa1, 0x2, 0x5d6, 0x5d8, 0x3, 0x2, 
    0x2, 0x2, 0x5d7, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5db, 0x3, 0x2, 
    0x2, 0x2, 0x5d9, 0x5d7, 0x3, 0x2, 0x2, 0x2, 0x5d9, 0x5da, 0x3, 0x2, 
    0x2, 0x2, 0x5da, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5db, 0x5d9, 0x3, 0x2, 
    0x2, 0x2, 0x5dc, 0x5de, 0x5, 0x6e, 0x38, 0x2, 0x5dd, 0x5dc, 0x3, 0x2, 
    0x2, 0x2, 0x5de, 0x5df, 0x3, 0x2, 0x2, 0x2, 0x5df, 0x5dd, 0x3, 0x2, 
    0x2, 0x2, 0x5df, 0x5e0, 0x3, 0x2, 0x2, 0x2, 0x5e0, 0x5e2, 0x3, 0x2, 
    0x2, 0x2, 0x5e1, 0x5e3, 0x5, 0x140, 0xa1, 0x2, 0x5e2, 0x5e1, 0x3, 0x2, 
    0x2, 0x2, 0x5e2, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0x5e6, 0x3, 0x2, 
    0x2, 0x2, 0x5e4, 0x5e6, 0x5, 0x13e, 0xa0, 0x2, 0x5e5, 0x5cc, 0x3, 0x2, 
    0x2, 0x2, 0x5e5, 0x5e4, 0x3, 0x2, 0x2, 0x2, 0x5e6, 0x5ec, 0x3, 0x2, 
    0x2, 0x2, 0x5e7, 0x5e8, 0xc, 0x4, 0x2, 0x2, 0x5e8, 0x5e9, 0x7, 0x77, 
    0x2, 0x2, 0x5e9, 0x5eb, 0x5, 0x132, 0x9a, 0x2, 0x5ea, 0x5e7, 0x3, 0x2, 
    0x2, 0x2, 0x5eb, 0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5ec, 0x5ea, 0x3, 0x2, 
    0x2, 0x2, 0x5ec, 0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5ed, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x5ee, 0x5ec, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5f0, 0x7, 0x1b, 
    0x2, 0x2, 0x5f0, 0x5f1, 0x5, 0x13c, 0x9f, 0x2, 0x5f1, 0x5f2, 0x7, 0x1c, 
    0x2, 0x2, 0x5f2, 0x62d, 0x3, 0x2, 0x2, 0x2, 0x5f3, 0x5f4, 0x5, 0x70, 
    0x39, 0x2, 0x5f4, 0x5f5, 0x5, 0x144, 0xa3, 0x2, 0x5f5, 0x5f6, 0x5, 0x72, 
    0x3a, 0x2, 0x5f6, 0x62d, 0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5f8, 0x5, 0xb8, 
    0x5d, 0x2, 0x5f8, 0x5fa, 0x7, 0x1b, 0x2, 0x2, 0x5f9, 0x5fb, 0x5, 0x144, 
    0xa3, 0x2, 0x5fa, 0x5f9, 0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5fb, 0x3, 0x2, 
    0x2, 0x2, 0x5fb, 0x5fc, 0x3, 0x2, 0x2, 0x2, 0x5fc, 0x5fd, 0x7, 0x1c, 
    0x2, 0x2, 0x5fd, 0x62d, 0x3, 0x2, 0x2, 0x2, 0x5fe, 0x5ff, 0x5, 0x3e, 
    0x20, 0x2, 0x5ff, 0x600, 0x7, 0x1e, 0x2, 0x2, 0x600, 0x601, 0x5, 0x144, 
    0xa3, 0x2, 0x601, 0x602, 0x7, 0x1f, 0x2, 0x2, 0x602, 0x62d, 0x3, 0x2, 
    0x2, 0x2, 0x603, 0x604, 0x7, 0x78, 0x2, 0x2, 0x604, 0x605, 0x5, 0x3e, 
    0x20, 0x2, 0x605, 0x606, 0x7, 0x24, 0x2, 0x2, 0x606, 0x607, 0x5, 0x13c, 
    0x9f, 0x2, 0x607, 0x62d, 0x3, 0x2, 0x2, 0x2, 0x608, 0x62d, 0x5, 0x46, 
    0x24, 0x2, 0x609, 0x60a, 0x7, 0x31, 0x2, 0x2, 0x60a, 0x60e, 0x5, 0x13c, 
    0x9f, 0x2, 0x60b, 0x60d, 0x5, 0x146, 0xa4, 0x2, 0x60c, 0x60b, 0x3, 0x2, 
    0x2, 0x2, 0x60d, 0x610, 0x3, 0x2, 0x2, 0x2, 0x60e, 0x60c, 0x3, 0x2, 
    0x2, 0x2, 0x60e, 0x60f, 0x3, 0x2, 0x2, 0x2, 0x60f, 0x611, 0x3, 0x2, 
    0x2, 0x2, 0x610, 0x60e, 0x3, 0x2, 0x2, 0x2, 0x611, 0x612, 0x7, 0x27, 
    0x2, 0x2, 0x612, 0x613, 0x5, 0x11e, 0x90, 0x2, 0x613, 0x614, 0x7, 0x33, 
    0x2, 0x2, 0x614, 0x62d, 0x3, 0x2, 0x2, 0x2, 0x615, 0x616, 0x7, 0x78, 
    0x2, 0x2, 0x616, 0x617, 0x7, 0x25, 0x2, 0x2, 0x617, 0x618, 0x7, 0x24, 
    0x2, 0x2, 0x618, 0x619, 0x7, 0x79, 0x2, 0x2, 0x619, 0x61d, 0x5, 0x13c, 
    0x9f, 0x2, 0x61a, 0x61c, 0x5, 0x146, 0xa4, 0x2, 0x61b, 0x61a, 0x3, 0x2, 
    0x2, 0x2, 0x61c, 0x61f, 0x3, 0x2, 0x2, 0x2, 0x61d, 0x61b, 0x3, 0x2, 
    0x2, 0x2, 0x61d, 0x61e, 0x3, 0x2, 0x2, 0x2, 0x61e, 0x62d, 0x3, 0x2, 
    0x2, 0x2, 0x61f, 0x61d, 0x3, 0x2, 0x2, 0x2, 0x620, 0x62d, 0x7, 0x91, 
    0x2, 0x2, 0x621, 0x622, 0x7, 0x78, 0x2, 0x2, 0x622, 0x623, 0x5, 0x4a, 
    0x26, 0x2, 0x623, 0x624, 0x7, 0x24, 0x2, 0x2, 0x624, 0x625, 0x5, 0x13c, 
    0x9f, 0x2, 0x625, 0x62d, 0x3, 0x2, 0x2, 0x2, 0x626, 0x627, 0x7, 0x78, 
    0x2, 0x2, 0x627, 0x62d, 0x5, 0x4a, 0x26, 0x2, 0x628, 0x629, 0x7, 0x78, 
    0x2, 0x2, 0x629, 0x62d, 0x5, 0x132, 0x9a, 0x2, 0x62a, 0x62d, 0x5, 0x14c, 
    0xa7, 0x2, 0x62b, 0x62d, 0x7, 0x7a, 0x2, 0x2, 0x62c, 0x5ef, 0x3, 0x2, 
    0x2, 0x2, 0x62c, 0x5f3, 0x3, 0x2, 0x2, 0x2, 0x62c, 0x5f7, 0x3, 0x2, 
    0x2, 0x2, 0x62c, 0x5fe, 0x3, 0x2, 0x2, 0x2, 0x62c, 0x603, 0x3, 0x2, 
    0x2, 0x2, 0x62c, 0x608, 0x3, 0x2, 0x2, 0x2, 0x62c, 0x609, 0x3, 0x2, 
    0x2, 0x2, 0x62c, 0x615, 0x3, 0x2, 0x2, 0x2, 0x62c, 0x620, 0x3, 0x2, 
    0x2, 0x2, 0x62c, 0x621, 0x3, 0x2, 0x2, 0x2, 0x62c, 0x626, 0x3, 0x2, 
    0x2, 0x2, 0x62c, 0x628, 0x3, 0x2, 0x2, 0x2, 0x62c, 0x62a, 0x3, 0x2, 
    0x2, 0x2, 0x62c, 0x62b, 0x3, 0x2, 0x2, 0x2, 0x62d, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x62e, 0x634, 0x5, 0x13e, 0xa0, 0x2, 0x62f, 0x630, 0x7, 0x1b, 
    0x2, 0x2, 0x630, 0x631, 0x5, 0x144, 0xa3, 0x2, 0x631, 0x632, 0x7, 0x1c, 
    0x2, 0x2, 0x632, 0x634, 0x3, 0x2, 0x2, 0x2, 0x633, 0x62e, 0x3, 0x2, 
    0x2, 0x2, 0x633, 0x62f, 0x3, 0x2, 0x2, 0x2, 0x634, 0x141, 0x3, 0x2, 
    0x2, 0x2, 0x635, 0x63b, 0x5, 0x144, 0xa3, 0x2, 0x636, 0x637, 0x7, 0x1b, 
    0x2, 0x2, 0x637, 0x638, 0x5, 0x144, 0xa3, 0x2, 0x638, 0x639, 0x7, 0x1c, 
    0x2, 0x2, 0x639, 0x63b, 0x3, 0x2, 0x2, 0x2, 0x63a, 0x635, 0x3, 0x2, 
    0x2, 0x2, 0x63a, 0x636, 0x3, 0x2, 0x2, 0x2, 0x63b, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x63c, 0x641, 0x5, 0x13c, 0x9f, 0x2, 0x63d, 0x63e, 0x7, 0x5, 
    0x2, 0x2, 0x63e, 0x640, 0x5, 0x13c, 0x9f, 0x2, 0x63f, 0x63d, 0x3, 0x2, 
    0x2, 0x2, 0x640, 0x643, 0x3, 0x2, 0x2, 0x2, 0x641, 0x63f, 0x3, 0x2, 
    0x2, 0x2, 0x641, 0x642, 0x3, 0x2, 0x2, 0x2, 0x642, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x643, 0x641, 0x3, 0x2, 0x2, 0x2, 0x644, 0x645, 0x7, 0x7b, 
    0x2, 0x2, 0x645, 0x64a, 0x5, 0x148, 0xa5, 0x2, 0x646, 0x647, 0x7, 0x5, 
    0x2, 0x2, 0x647, 0x649, 0x5, 0x148, 0xa5, 0x2, 0x648, 0x646, 0x3, 0x2, 
    0x2, 0x2, 0x649, 0x64c, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x648, 0x3, 0x2, 
    0x2, 0x2, 0x64a, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x64b, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x64c, 0x64a, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x652, 0x5, 0x14a, 
    0xa6, 0x2, 0x64e, 0x64f, 0x7, 0x5, 0x2, 0x2, 0x64f, 0x651, 0x5, 0x14a, 
    0xa6, 0x2, 0x650, 0x64e, 0x3, 0x2, 0x2, 0x2, 0x651, 0x654, 0x3, 0x2, 
    0x2, 0x2, 0x652, 0x650, 0x3, 0x2, 0x2, 0x2, 0x652, 0x653, 0x3, 0x2, 
    0x2, 0x2, 0x653, 0x657, 0x3, 0x2, 0x2, 0x2, 0x654, 0x652, 0x3, 0x2, 
    0x2, 0x2, 0x655, 0x656, 0x9, 0xf, 0x2, 0x2, 0x656, 0x658, 0x5, 0x132, 
    0x9a, 0x2, 0x657, 0x655, 0x3, 0x2, 0x2, 0x2, 0x657, 0x658, 0x3, 0x2, 
    0x2, 0x2, 0x658, 0x149, 0x3, 0x2, 0x2, 0x2, 0x659, 0x65a, 0x7, 0x90, 
    0x2, 0x2, 0x65a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x65c, 0x9, 0x10, 
    0x2, 0x2, 0x65c, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x155, 0x15b, 0x163, 
    0x170, 0x17d, 0x187, 0x18d, 0x197, 0x19f, 0x1ad, 0x1bf, 0x1c1, 0x1cd, 
    0x1cf, 0x1d7, 0x1d9, 0x1e1, 0x1e9, 0x1ef, 0x1fa, 0x201, 0x208, 0x20d, 
    0x219, 0x223, 0x22b, 0x237, 0x244, 0x248, 0x250, 0x255, 0x25b, 0x267, 
    0x26d, 0x271, 0x279, 0x27f, 0x281, 0x288, 0x28d, 0x299, 0x29d, 0x2a4, 
    0x2a8, 0x2ac, 0x2b2, 0x2c3, 0x2cf, 0x2d6, 0x2da, 0x2de, 0x2fc, 0x313, 
    0x318, 0x324, 0x328, 0x32b, 0x33e, 0x352, 0x355, 0x36a, 0x371, 0x38a, 
    0x38d, 0x39a, 0x3a3, 0x3aa, 0x3af, 0x3ba, 0x3bf, 0x3c8, 0x3cd, 0x3d8, 
    0x3ee, 0x3f5, 0x3fc, 0x400, 0x408, 0x40a, 0x40f, 0x414, 0x41e, 0x423, 
    0x42c, 0x432, 0x438, 0x43f, 0x44d, 0x454, 0x457, 0x460, 0x468, 0x472, 
    0x475, 0x479, 0x47f, 0x495, 0x49a, 0x49e, 0x4a4, 0x4b0, 0x4b7, 0x4c0, 
    0x4c4, 0x4cc, 0x4d4, 0x4db, 0x4e0, 0x4e4, 0x4ef, 0x4f5, 0x4f9, 0x50d, 
    0x513, 0x524, 0x53c, 0x53e, 0x542, 0x546, 0x54a, 0x54e, 0x555, 0x55b, 
    0x564, 0x56a, 0x570, 0x575, 0x57c, 0x584, 0x58d, 0x598, 0x5a6, 0x5ac, 
    0x5b4, 0x5b6, 0x5bb, 0x5c0, 0x5c2, 0x5c9, 0x5ce, 0x5d3, 0x5d9, 0x5df, 
    0x5e2, 0x5e5, 0x5ec, 0x5fa, 0x60e, 0x61d, 0x62c, 0x633, 0x63a, 0x641, 
    0x64a, 0x652, 0x657, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MizarParser::Initializer MizarParser::_init;

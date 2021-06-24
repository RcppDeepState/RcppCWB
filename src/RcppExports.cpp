// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// _cl_attribute_size
int _cl_attribute_size(SEXP corpus, SEXP attribute, SEXP attribute_type, SEXP registry);
RcppExport SEXP _RcppCWB__cl_attribute_size(SEXP corpusSEXP, SEXP attributeSEXP, SEXP attribute_typeSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type attribute(attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type attribute_type(attribute_typeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_attribute_size(corpus, attribute, attribute_type, registry));
    return rcpp_result_gen;
END_RCPP
}
// _cl_lexicon_size
int _cl_lexicon_size(SEXP corpus, SEXP p_attribute, SEXP registry);
RcppExport SEXP _RcppCWB__cl_lexicon_size(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_lexicon_size(corpus, p_attribute, registry));
    return rcpp_result_gen;
END_RCPP
}
// _cl_cpos2struc
Rcpp::IntegerVector _cl_cpos2struc(SEXP corpus, SEXP s_attribute, Rcpp::IntegerVector cpos, SEXP registry);
RcppExport SEXP _RcppCWB__cl_cpos2struc(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP cposSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type cpos(cposSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_cpos2struc(corpus, s_attribute, cpos, registry));
    return rcpp_result_gen;
END_RCPP
}
// _cl_cpos2str
Rcpp::StringVector _cl_cpos2str(SEXP corpus, SEXP p_attribute, SEXP registry, Rcpp::IntegerVector cpos);
RcppExport SEXP _RcppCWB__cl_cpos2str(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP, SEXP cposSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type cpos(cposSEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_cpos2str(corpus, p_attribute, registry, cpos));
    return rcpp_result_gen;
END_RCPP
}
// _cl_cpos2id
Rcpp::IntegerVector _cl_cpos2id(SEXP corpus, SEXP p_attribute, SEXP registry, Rcpp::IntegerVector cpos);
RcppExport SEXP _RcppCWB__cl_cpos2id(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP, SEXP cposSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type cpos(cposSEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_cpos2id(corpus, p_attribute, registry, cpos));
    return rcpp_result_gen;
END_RCPP
}
// _cl_struc2cpos
Rcpp::IntegerVector _cl_struc2cpos(SEXP corpus, SEXP s_attribute, SEXP registry, int struc);
RcppExport SEXP _RcppCWB__cl_struc2cpos(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP registrySEXP, SEXP strucSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< int >::type struc(strucSEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_struc2cpos(corpus, s_attribute, registry, struc));
    return rcpp_result_gen;
END_RCPP
}
// _cl_id2str
Rcpp::StringVector _cl_id2str(SEXP corpus, SEXP p_attribute, SEXP registry, Rcpp::IntegerVector id);
RcppExport SEXP _RcppCWB__cl_id2str(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_id2str(corpus, p_attribute, registry, id));
    return rcpp_result_gen;
END_RCPP
}
// _cl_struc2str
Rcpp::StringVector _cl_struc2str(SEXP corpus, SEXP s_attribute, Rcpp::IntegerVector struc, SEXP registry);
RcppExport SEXP _RcppCWB__cl_struc2str(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP strucSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type struc(strucSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_struc2str(corpus, s_attribute, struc, registry));
    return rcpp_result_gen;
END_RCPP
}
// _cl_regex2id
Rcpp::IntegerVector _cl_regex2id(SEXP corpus, SEXP p_attribute, SEXP regex, SEXP registry);
RcppExport SEXP _RcppCWB__cl_regex2id(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP regexSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type regex(regexSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_regex2id(corpus, p_attribute, regex, registry));
    return rcpp_result_gen;
END_RCPP
}
// _cl_str2id
Rcpp::IntegerVector _cl_str2id(SEXP corpus, SEXP p_attribute, Rcpp::StringVector str, SEXP registry);
RcppExport SEXP _RcppCWB__cl_str2id(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP strSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type str(strSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_str2id(corpus, p_attribute, str, registry));
    return rcpp_result_gen;
END_RCPP
}
// _cl_id2freq
Rcpp::IntegerVector _cl_id2freq(SEXP corpus, SEXP p_attribute, Rcpp::IntegerVector id, SEXP registry);
RcppExport SEXP _RcppCWB__cl_id2freq(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP idSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type id(idSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_id2freq(corpus, p_attribute, id, registry));
    return rcpp_result_gen;
END_RCPP
}
// _cl_id2cpos
Rcpp::IntegerVector _cl_id2cpos(SEXP corpus, SEXP p_attribute, SEXP id, SEXP registry);
RcppExport SEXP _RcppCWB__cl_id2cpos(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP idSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type id(idSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_id2cpos(corpus, p_attribute, id, registry));
    return rcpp_result_gen;
END_RCPP
}
// _cl_cpos2lbound
Rcpp::IntegerVector _cl_cpos2lbound(SEXP corpus, SEXP s_attribute, Rcpp::IntegerVector cpos, SEXP registry);
RcppExport SEXP _RcppCWB__cl_cpos2lbound(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP cposSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type cpos(cposSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_cpos2lbound(corpus, s_attribute, cpos, registry));
    return rcpp_result_gen;
END_RCPP
}
// _cl_cpos2rbound
Rcpp::IntegerVector _cl_cpos2rbound(SEXP corpus, SEXP s_attribute, Rcpp::IntegerVector cpos, SEXP registry);
RcppExport SEXP _RcppCWB__cl_cpos2rbound(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP cposSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type cpos(cposSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_cpos2rbound(corpus, s_attribute, cpos, registry));
    return rcpp_result_gen;
END_RCPP
}
// _cl_delete_corpus
int _cl_delete_corpus(SEXP corpus, SEXP registry);
RcppExport SEXP _RcppCWB__cl_delete_corpus(SEXP corpusSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_delete_corpus(corpus, registry));
    return rcpp_result_gen;
END_RCPP
}
// _cl_charset_name
Rcpp::StringVector _cl_charset_name(SEXP corpus, SEXP registry);
RcppExport SEXP _RcppCWB__cl_charset_name(SEXP corpusSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_charset_name(corpus, registry));
    return rcpp_result_gen;
END_RCPP
}
// init_cqp
void init_cqp();
RcppExport SEXP _RcppCWB_init_cqp() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    init_cqp();
    return R_NilValue;
END_RCPP
}
// cqp_get_registry
Rcpp::StringVector cqp_get_registry();
RcppExport SEXP _RcppCWB_cqp_get_registry() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cqp_get_registry());
    return rcpp_result_gen;
END_RCPP
}
// cqp_get_status
int cqp_get_status();
RcppExport SEXP _RcppCWB_cqp_get_status() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cqp_get_status());
    return rcpp_result_gen;
END_RCPP
}
// cqp_set_registry
SEXP cqp_set_registry(SEXP registry_dir);
RcppExport SEXP _RcppCWB_cqp_set_registry(SEXP registry_dirSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type registry_dir(registry_dirSEXP);
    rcpp_result_gen = Rcpp::wrap(cqp_set_registry(registry_dir));
    return rcpp_result_gen;
END_RCPP
}
// cqp_list_corpora
Rcpp::StringVector cqp_list_corpora();
RcppExport SEXP _RcppCWB_cqp_list_corpora() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cqp_list_corpora());
    return rcpp_result_gen;
END_RCPP
}
// cqp_query
SEXP cqp_query(SEXP corpus, SEXP subcorpus, SEXP query);
RcppExport SEXP _RcppCWB_cqp_query(SEXP corpusSEXP, SEXP subcorpusSEXP, SEXP querySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type subcorpus(subcorpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type query(querySEXP);
    rcpp_result_gen = Rcpp::wrap(cqp_query(corpus, subcorpus, query));
    return rcpp_result_gen;
END_RCPP
}
// cqp_subcorpus_size
int cqp_subcorpus_size(SEXP scorpus);
RcppExport SEXP _RcppCWB_cqp_subcorpus_size(SEXP scorpusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type scorpus(scorpusSEXP);
    rcpp_result_gen = Rcpp::wrap(cqp_subcorpus_size(scorpus));
    return rcpp_result_gen;
END_RCPP
}
// cqp_list_subcorpora
Rcpp::StringVector cqp_list_subcorpora(SEXP inCorpus);
RcppExport SEXP _RcppCWB_cqp_list_subcorpora(SEXP inCorpusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inCorpus(inCorpusSEXP);
    rcpp_result_gen = Rcpp::wrap(cqp_list_subcorpora(inCorpus));
    return rcpp_result_gen;
END_RCPP
}
// cqp_dump_subcorpus
Rcpp::IntegerMatrix cqp_dump_subcorpus(SEXP inSubcorpus);
RcppExport SEXP _RcppCWB_cqp_dump_subcorpus(SEXP inSubcorpusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inSubcorpus(inSubcorpusSEXP);
    rcpp_result_gen = Rcpp::wrap(cqp_dump_subcorpus(inSubcorpus));
    return rcpp_result_gen;
END_RCPP
}
// cqp_drop_subcorpus
SEXP cqp_drop_subcorpus(SEXP inSubcorpus);
RcppExport SEXP _RcppCWB_cqp_drop_subcorpus(SEXP inSubcorpusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inSubcorpus(inSubcorpusSEXP);
    rcpp_result_gen = Rcpp::wrap(cqp_drop_subcorpus(inSubcorpus));
    return rcpp_result_gen;
END_RCPP
}
// check_corpus
int check_corpus(SEXP corpus);
RcppExport SEXP _RcppCWB_check_corpus(SEXP corpusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    rcpp_result_gen = Rcpp::wrap(check_corpus(corpus));
    return rcpp_result_gen;
END_RCPP
}
// _cl_struc_values
int _cl_struc_values(SEXP corpus, SEXP s_attribute, SEXP registry);
RcppExport SEXP _RcppCWB__cl_struc_values(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(_cl_struc_values(corpus, s_attribute, registry));
    return rcpp_result_gen;
END_RCPP
}
// decode_s_attribute
Rcpp::StringVector decode_s_attribute(SEXP corpus, SEXP s_attribute, SEXP registry);
RcppExport SEXP _RcppCWB_decode_s_attribute(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(decode_s_attribute(corpus, s_attribute, registry));
    return rcpp_result_gen;
END_RCPP
}
// get_count_vector
Rcpp::IntegerVector get_count_vector(SEXP corpus, SEXP p_attribute, SEXP registry);
RcppExport SEXP _RcppCWB_get_count_vector(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(get_count_vector(corpus, p_attribute, registry));
    return rcpp_result_gen;
END_RCPP
}
// get_region_matrix
Rcpp::IntegerMatrix get_region_matrix(SEXP corpus, SEXP s_attribute, SEXP strucs, SEXP registry);
RcppExport SEXP _RcppCWB_get_region_matrix(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP strucsSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type strucs(strucsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(get_region_matrix(corpus, s_attribute, strucs, registry));
    return rcpp_result_gen;
END_RCPP
}
// get_cbow_matrix
Rcpp::IntegerMatrix get_cbow_matrix(SEXP corpus, SEXP p_attribute, SEXP registry, SEXP matrix, SEXP window);
RcppExport SEXP _RcppCWB_get_cbow_matrix(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP, SEXP matrixSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< SEXP >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< SEXP >::type window(windowSEXP);
    rcpp_result_gen = Rcpp::wrap(get_cbow_matrix(corpus, p_attribute, registry, matrix, window));
    return rcpp_result_gen;
END_RCPP
}
// region_matrix_to_ids
Rcpp::IntegerVector region_matrix_to_ids(SEXP corpus, SEXP p_attribute, SEXP registry, SEXP matrix);
RcppExport SEXP _RcppCWB_region_matrix_to_ids(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP, SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< SEXP >::type matrix(matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(region_matrix_to_ids(corpus, p_attribute, registry, matrix));
    return rcpp_result_gen;
END_RCPP
}
// ids_to_count_matrix
Rcpp::IntegerMatrix ids_to_count_matrix(Rcpp::IntegerVector ids);
RcppExport SEXP _RcppCWB_ids_to_count_matrix(SEXP idsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ids(idsSEXP);
    rcpp_result_gen = Rcpp::wrap(ids_to_count_matrix(ids));
    return rcpp_result_gen;
END_RCPP
}
// region_matrix_to_count_matrix
Rcpp::IntegerVector region_matrix_to_count_matrix(SEXP corpus, SEXP p_attribute, SEXP registry, SEXP matrix);
RcppExport SEXP _RcppCWB_region_matrix_to_count_matrix(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP, SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< SEXP >::type matrix(matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(region_matrix_to_count_matrix(corpus, p_attribute, registry, matrix));
    return rcpp_result_gen;
END_RCPP
}
// cwb_makeall
int cwb_makeall(SEXP x, SEXP registry_dir, SEXP p_attribute);
RcppExport SEXP _RcppCWB_cwb_makeall(SEXP xSEXP, SEXP registry_dirSEXP, SEXP p_attributeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry_dir(registry_dirSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    rcpp_result_gen = Rcpp::wrap(cwb_makeall(x, registry_dir, p_attribute));
    return rcpp_result_gen;
END_RCPP
}
// cwb_huffcode
int cwb_huffcode(SEXP x, SEXP registry_dir, SEXP p_attribute);
RcppExport SEXP _RcppCWB_cwb_huffcode(SEXP xSEXP, SEXP registry_dirSEXP, SEXP p_attributeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry_dir(registry_dirSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    rcpp_result_gen = Rcpp::wrap(cwb_huffcode(x, registry_dir, p_attribute));
    return rcpp_result_gen;
END_RCPP
}
// cwb_compress_rdx
int cwb_compress_rdx(SEXP x, SEXP registry_dir, SEXP p_attribute);
RcppExport SEXP _RcppCWB_cwb_compress_rdx(SEXP xSEXP, SEXP registry_dirSEXP, SEXP p_attributeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry_dir(registry_dirSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    rcpp_result_gen = Rcpp::wrap(cwb_compress_rdx(x, registry_dir, p_attribute));
    return rcpp_result_gen;
END_RCPP
}
// cwb_encode
int cwb_encode(SEXP regfile, SEXP data_dir, SEXP vrt_dir, Rcpp::StringVector p_attributes, Rcpp::StringVector s_attributes_anno, Rcpp::StringVector s_attributes_noanno);
RcppExport SEXP _RcppCWB_cwb_encode(SEXP regfileSEXP, SEXP data_dirSEXP, SEXP vrt_dirSEXP, SEXP p_attributesSEXP, SEXP s_attributes_annoSEXP, SEXP s_attributes_noannoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type regfile(regfileSEXP);
    Rcpp::traits::input_parameter< SEXP >::type data_dir(data_dirSEXP);
    Rcpp::traits::input_parameter< SEXP >::type vrt_dir(vrt_dirSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type p_attributes(p_attributesSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type s_attributes_anno(s_attributes_annoSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type s_attributes_noanno(s_attributes_noannoSEXP);
    rcpp_result_gen = Rcpp::wrap(cwb_encode(regfile, data_dir, vrt_dir, p_attributes, s_attributes_anno, s_attributes_noanno));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppCWB__cl_attribute_size", (DL_FUNC) &_RcppCWB__cl_attribute_size, 4},
    {"_RcppCWB__cl_lexicon_size", (DL_FUNC) &_RcppCWB__cl_lexicon_size, 3},
    {"_RcppCWB__cl_cpos2struc", (DL_FUNC) &_RcppCWB__cl_cpos2struc, 4},
    {"_RcppCWB__cl_cpos2str", (DL_FUNC) &_RcppCWB__cl_cpos2str, 4},
    {"_RcppCWB__cl_cpos2id", (DL_FUNC) &_RcppCWB__cl_cpos2id, 4},
    {"_RcppCWB__cl_struc2cpos", (DL_FUNC) &_RcppCWB__cl_struc2cpos, 4},
    {"_RcppCWB__cl_id2str", (DL_FUNC) &_RcppCWB__cl_id2str, 4},
    {"_RcppCWB__cl_struc2str", (DL_FUNC) &_RcppCWB__cl_struc2str, 4},
    {"_RcppCWB__cl_regex2id", (DL_FUNC) &_RcppCWB__cl_regex2id, 4},
    {"_RcppCWB__cl_str2id", (DL_FUNC) &_RcppCWB__cl_str2id, 4},
    {"_RcppCWB__cl_id2freq", (DL_FUNC) &_RcppCWB__cl_id2freq, 4},
    {"_RcppCWB__cl_id2cpos", (DL_FUNC) &_RcppCWB__cl_id2cpos, 4},
    {"_RcppCWB__cl_cpos2lbound", (DL_FUNC) &_RcppCWB__cl_cpos2lbound, 4},
    {"_RcppCWB__cl_cpos2rbound", (DL_FUNC) &_RcppCWB__cl_cpos2rbound, 4},
    {"_RcppCWB__cl_delete_corpus", (DL_FUNC) &_RcppCWB__cl_delete_corpus, 2},
    {"_RcppCWB__cl_charset_name", (DL_FUNC) &_RcppCWB__cl_charset_name, 2},
    {"_RcppCWB_init_cqp", (DL_FUNC) &_RcppCWB_init_cqp, 0},
    {"_RcppCWB_cqp_get_registry", (DL_FUNC) &_RcppCWB_cqp_get_registry, 0},
    {"_RcppCWB_cqp_get_status", (DL_FUNC) &_RcppCWB_cqp_get_status, 0},
    {"_RcppCWB_cqp_set_registry", (DL_FUNC) &_RcppCWB_cqp_set_registry, 1},
    {"_RcppCWB_cqp_list_corpora", (DL_FUNC) &_RcppCWB_cqp_list_corpora, 0},
    {"_RcppCWB_cqp_query", (DL_FUNC) &_RcppCWB_cqp_query, 3},
    {"_RcppCWB_cqp_subcorpus_size", (DL_FUNC) &_RcppCWB_cqp_subcorpus_size, 1},
    {"_RcppCWB_cqp_list_subcorpora", (DL_FUNC) &_RcppCWB_cqp_list_subcorpora, 1},
    {"_RcppCWB_cqp_dump_subcorpus", (DL_FUNC) &_RcppCWB_cqp_dump_subcorpus, 1},
    {"_RcppCWB_cqp_drop_subcorpus", (DL_FUNC) &_RcppCWB_cqp_drop_subcorpus, 1},
    {"_RcppCWB_check_corpus", (DL_FUNC) &_RcppCWB_check_corpus, 1},
    {"_RcppCWB__cl_struc_values", (DL_FUNC) &_RcppCWB__cl_struc_values, 3},
    {"_RcppCWB_decode_s_attribute", (DL_FUNC) &_RcppCWB_decode_s_attribute, 3},
    {"_RcppCWB_get_count_vector", (DL_FUNC) &_RcppCWB_get_count_vector, 3},
    {"_RcppCWB_get_region_matrix", (DL_FUNC) &_RcppCWB_get_region_matrix, 4},
    {"_RcppCWB_get_cbow_matrix", (DL_FUNC) &_RcppCWB_get_cbow_matrix, 5},
    {"_RcppCWB_region_matrix_to_ids", (DL_FUNC) &_RcppCWB_region_matrix_to_ids, 4},
    {"_RcppCWB_ids_to_count_matrix", (DL_FUNC) &_RcppCWB_ids_to_count_matrix, 1},
    {"_RcppCWB_region_matrix_to_count_matrix", (DL_FUNC) &_RcppCWB_region_matrix_to_count_matrix, 4},
    {"_RcppCWB_cwb_makeall", (DL_FUNC) &_RcppCWB_cwb_makeall, 3},
    {"_RcppCWB_cwb_huffcode", (DL_FUNC) &_RcppCWB_cwb_huffcode, 3},
    {"_RcppCWB_cwb_compress_rdx", (DL_FUNC) &_RcppCWB_cwb_compress_rdx, 3},
    {"_RcppCWB_cwb_encode", (DL_FUNC) &_RcppCWB_cwb_encode, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppCWB(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

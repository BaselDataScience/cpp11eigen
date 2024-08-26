// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// 01_ols.cpp
doubles_matrix<> ols_mat(const doubles_matrix<>& y, const doubles_matrix<>& x);
extern "C" SEXP _cpp11eigentest_ols_mat(SEXP y, SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(ols_mat(cpp11::as_cpp<cpp11::decay_t<const doubles_matrix<>&>>(y), cpp11::as_cpp<cpp11::decay_t<const doubles_matrix<>&>>(x)));
  END_CPP11
}
// 01_ols.cpp
doubles ols_vec(const doubles_matrix<>& y, const doubles_matrix<>& x);
extern "C" SEXP _cpp11eigentest_ols_vec(SEXP y, SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(ols_vec(cpp11::as_cpp<cpp11::decay_t<const doubles_matrix<>&>>(y), cpp11::as_cpp<cpp11::decay_t<const doubles_matrix<>&>>(x)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_cpp11eigentest_ols_mat", (DL_FUNC) &_cpp11eigentest_ols_mat, 2},
    {"_cpp11eigentest_ols_vec", (DL_FUNC) &_cpp11eigentest_ols_vec, 2},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_cpp11eigentest(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}

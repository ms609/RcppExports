#define USE_RINTERNALS

#include <Rinternals.h>
#include <stdlib.h> /* for NULL */

#include "c_functions.h"

extern SEXP _ExportTest_hello_world();
extern SEXP _ExportTest_RcppExport_registerCCallable();

static const R_CMethodDef cMethods[] = {
  {"foo", (DL_FUNC) &foo, 1, foo_t},
  {NULL, NULL, 0, NULL}
};

static const R_CallMethodDef callMethods[] = {
  {"_ExportTest_hello_world", (DL_FUNC) &_ExportTest_hello_world, 0},
  {"_ExportTest_RcppExport_registerCCallable", (DL_FUNC) &_ExportTest_RcppExport_registerCCallable, 0},
  {NULL, NULL, 0}
};

void R_init_ExportTest(DllInfo *dll) {
  R_registerRoutines(dll, cMethods, callMethods, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}

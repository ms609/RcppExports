#' @useDynLib ExportTest, .registration = TRUE
#' @importFrom Rcpp evalCpp
#' @exportPattern "^[[:alpha:]]+"
.onUnload <- function (libpath) {
  library.dynam.unload("ExportTest", libpath)
}

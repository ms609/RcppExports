#' @useDynLib ExportTest, .registration = TRUE
.onUnload <- function (libpath) {
  library.dynam.unload("ExportTest", libpath)
}

#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::interfaces(r, cpp)]]


// [[Rcpp::export]]
void hello_world() {
  Rcout << "Hello, world!\n";
}

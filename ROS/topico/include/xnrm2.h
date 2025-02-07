//
// Student License - for use by students to meet course requirements and
// perform academic research at degree granting institutions only.  Not
// for government, commercial, or other organizational use.
//
// xnrm2.h
//
// Code generation for function 'xnrm2'
//

#ifndef XNRM2_H
#define XNRM2_H

// Include files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
namespace coder {
namespace internal {
namespace blas {
double xnrm2(int n, const double x_data[], int ix0);

double xnrm2(int n, const double x[3]);

} // namespace blas
} // namespace internal
} // namespace coder

#endif
// End of code generation (xnrm2.h)

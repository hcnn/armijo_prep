#ifndef ARMIJO_PREP_H
#define ARMIJO_PREP_H

#include <stddef.h>
#include <math.h>
#include "multiply_dot/multiply_dot.h"

double armijo_prep(double toldir, double gamma, const double* g, const double* r, size_t n);

#endif /* ARMIJO_PREP_H */

#include "armijo_prep.h"

double armijo_prep(double toldir, double gamma,
    const double* g, const double* r, size_t n)
{
    return fmax(-multiply_dot(g, r, n), toldir) * gamma;
    //return -1.0 * fmin(multiply_dot(g, r, n), -toldir) * gamma;
}

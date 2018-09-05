#include <stdio.h>  // printf
#include "armijo_prep.h"

int main()
{
    double toldir = 1e-4;
    double gamma = 1e-4;
    double gr, ggr;
    size_t n = 5;
    double r[] = {.1, -.2, .05, -.02, .01};

    printf("\nExample that would not be a problem anyway\n");
    double g1[] = {.1, .2, -.05, .02, -.01};
    gr = multiply_dot(g1, r, n);
    ggr = armijo_prep(toldir, gamma, g1, r, n);
    printf("%10s: %12.8f\n%10s: %12.8f\n", "q*r", gr, "prep", ggr);

    printf("\nUse toldir if gradient does not descent\n");
    double g2[] = {10.1, .2, -.05, .02, -.01};
    gr = multiply_dot(g2, r, n);
    ggr = armijo_prep(toldir, gamma, g2, r, n);
    printf("%10s: %12.8f\n%10s: %12.8f\n", "q*r", gr, "prep", ggr);

    printf("\nThe effect if no toldir is used\n");
    gr = multiply_dot(g2, r, n);
    ggr = -gr * gamma;
    printf("%10s: %12.8f\n%10s: %12.8f\n", "q*r", gr, "prep", ggr);
}

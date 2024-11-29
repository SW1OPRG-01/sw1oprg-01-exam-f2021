#include "Coulomb.h"

const double k = 8.98877e9;

double beregnKraft(double q1, double q2, double r) {
  if(r == 0) {
    return 0;
  }
  return k * q1 * q2 / (r * r);
}
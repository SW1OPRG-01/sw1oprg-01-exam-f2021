#include <iostream>
#include "Coulomb.h"

using namespace std;

int main(int argc, char **argv) {
  cout << "Opgave3" << endl;
  cout << beregnKraft(1, 1, 1) << endl;
  cout << beregnKraft(0, 1, 1) << endl;
  cout << beregnKraft(1.6022e-19, 1.6022e-19, .01) << endl;
  cout << beregnKraft(1, 1, 0) << endl;
  return 0;
}
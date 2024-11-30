#include "Opgave.h"

int main(int argc, char **argv) {
  Opgave o1 = Opgave();
  Opgave o2 = Opgave("Exam", 5, 18, 12, 2024);
  
  o1.print();
  o2.print();

  Opgave o3 = Opgave("Racerkøreren", 4, 2, 2, 1996);
  Opgave o4 = Opgave("Meget vigtigt opgave!", 6, 1, 31, 2001);
  Opgave o5 = Opgave("Arbejderens Kampdag", 5, 1, 31, 2001);
  Opgave o6 = Opgave("Bageren", 2, 11, 11, 1965);
  
  Opgave opgaver[] = {o1, o2, o3, o4, o5, o6 };

  for(int i = 0; i < sizeof(opgaver) / sizeof(Opgave); i++) {
    Opgave opgave = opgaver[i];
    if(opgave.getPrioritet() >= 4) {
      opgave.print();
    }
  } 

  return 0;
}
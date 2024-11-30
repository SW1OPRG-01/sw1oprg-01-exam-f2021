#include "Opgave.h"
#include <iostream>

Opgave::Opgave(): opgave_("To do"), prioritet_(1), deadline_(Dato()) { }

Opgave::Opgave(std::string opgave, int prioritet, int dag, int maaned, int aar) : deadline_(Dato(dag, maaned, aar)) {
  setOpgave(opgave);
  setPrioritet(prioritet);
}

void Opgave::setOpgave(std::string opgave) {
  opgave_ = opgave;
}

std::string Opgave::getOpgave() const {
  return opgave_;
}

void Opgave::setPrioritet(int prioritet) {
  if(prioritet > 5 || prioritet < 1) {
    prioritet_ = 1;
  } else {
    prioritet_ = prioritet;
  }
}

int Opgave::getPrioritet() const {
  return prioritet_;
}

void Opgave::setDeadline(int dag, int maaned, int aar) {
  deadline_ = Dato(dag, maaned, aar);
}

void Opgave::print() const {
  std::cout << "Opgave:\t\t " << opgave_ << std::endl; 
  std::cout << "Prioritet:\t " << prioritet_ << std::endl;
  std::cout << "Deadline:\t "; 
  deadline_.print();
  std::cout << std::endl;
}

#include <string>
#include "Dato.h"

class Opgave {
  public:
    Opgave();
    Opgave(std::string opgave, int prioritet, int dag, int maaned, int aar);
    void setOpgave(std::string opgave);
    std::string getOpgave() const;
    void setPrioritet(int prioritet);
    int getPrioritet() const;
    void setDeadline(int dag, int maaned, int aar);
    void print() const;
  private:
    std::string opgave_;
    int prioritet_;
    Dato deadline_;
};
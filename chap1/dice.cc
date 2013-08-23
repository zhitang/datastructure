#include <iostream>

using namespace std;

const unsigned int numberOfDices = 2;
class Dice {
private:
  int diceTotal;
  int diceList[numberOfDices];
public:
  Dice();
  void toss();
  int total() const;
  void displayToss() const;
};



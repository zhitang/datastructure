#include <iostream>
#include <iomanip>
#include "random.h"

using namespace std;

int tossCoins(int numberCoins) {
  static RandomNumber coinToss;
  int i, tosses = 0;
  for (i = 0; i < numberCoins; i++) {
    tosses += coinToss.iRandom(2);
  }
  return tosses;
}

int main() {
  const int NCOINS = 10;
  const long NTOSSES = 50000;
  long i, heads[NCOINS + 1];
  int j, position;
  for (j = 0; j <= NCOINS; j++) {
    heads[j] = 0;
  }
  for (i = 0; i < NTOSSES; i++) {
    heads[tossCoins(NCOINS)]++;
  }

  for (i = 0; i < NCOINS + 1; i++) {
    position = int(float(heads[i])/float(NTOSSES) * 72);
    cout << setw(6) << i << " ";
    for (j = 0; j < position - 1; j++) cout << " ";
    cout << "*" << endl;
  }
}

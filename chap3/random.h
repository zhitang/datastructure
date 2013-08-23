#include <ctime>

typedef unsigned long ulong;
typedef unsigned short ushort;

const ulong maxShort = 65536L;
const ulong multiplier = 1194211693L;
const ulong adder = 12345L;

class RandomNumber {
private:
  ulong randSeed;
public:
  RandomNumber(ulong s = 0);
  ushort iRandom(ulong n); //generate random integer between 0 and n-1
  double fRandom(); //generate random number between 0 and 1
};

RandomNumber::RandomNumber(ulong s) {
  if (s == 0) randSeed = time(0);
  else randSeed = s;
}

ushort RandomNumber::iRandom(ulong n) {
  randSeed = multiplier * randSeed + adder;
  return (ushort) ((randSeed >> 16) % n);
}

double RandomNumber::fRandom() {
  return iRandom(maxShort) / (double)(maxShort);
}



#include <iostream>
#include <fstream>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

struct keyWord {
  char key[20];
  int count;
};

keyWord keyWordTable[] = {
  {"else", 0},
  {"for", 0},
  {"if", 0},
  {"include", 0},
  {"while", 0}
};

int seqSearch(keyWord * tab, int n, char * word) {
  for (int i = 0; i < n; i++, tab++) {
    if (strcmp(word, tab->key) == 0) return i;
  }
  return -1;
}

int getWord(ifstream & fin, char w[]) {
  char c;
  int i = 0;
  while (fin.get(c) && !isalpha(c))
    ;
  if (fin.eof()) return 0;
  w[i++] = c;
  while (fin.get(c) && (isalpha(c) || isdigit(c))) {
    w[i++] = c;
  }
  w[i] = '\0';
  return 1;
}

int main() {
  const int MAXWORD = 50;
  const int NKEYWORDS = sizeof(keyWordTable) / sizeof(keyWord);
  int n;
  char word[MAXWORD], c;
  ifstream fin;
  fin.open("keyword_counts.cc", ios::in);
  if (!fin) {
    cerr << "could not open source file." << endl;
    exit(1);
  }
  while (getWord(fin, word)) {
    if ((n = seqSearch(keyWordTable, NKEYWORDS, word)) != -1) {
      keyWordTable[n].count++;
    }
  }
  for (n = 0; n < NKEYWORDS; n++) {
    if (keyWordTable[n].count > 0) {
      cout << keyWordTable[n].count;
      cout << " " << keyWordTable[n].key << endl;
    }
  }
  fin.close();
}

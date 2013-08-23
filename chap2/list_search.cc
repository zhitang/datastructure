#include <iostream>

using namespace std;

const int numberOfElements = 10;

int seqSearch(int list[], int start, int n, int key) {
  for (int i = start; i < n; i++) {
    if(list[i] == key) {
      return i;
    }
  }
  return -1;
}

int main() {
  int A[numberOfElements];
  int key, count = 0, pos;
  cout << "enter a list of " << numberOfElements << " integers: ";
  for (pos = 0; pos < numberOfElements; pos++) {
    cin >> A[pos];
  }
  cout << "enter a key to search: ";
  cin >> key;
  pos = 0;
  while ((pos = seqSearch(A, pos, numberOfElements, key)) != -1) {
    count++;
    pos++;
  }
  cout << key << " occurs " << count << " time(s) in the list." << endl;
}

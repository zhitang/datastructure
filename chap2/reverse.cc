#include <iostream>
#include <string.h>

using namespace std;

void reverseName(char * name, char * newName) {
  char * pch;
  pch = strchr(name, ' ');
  *pch = 0;
  strcpy(newName, pch + 1);
  strcat(newName, ",");
  strcat(newName, name);
  *pch = ' ';
}

int main() {
  char name[32], newName[32];
  int i;
  for(i = 0; i < 3; i++) {
    cin.getline(name,32,'\n');
    reverseName(name, newName);
    cout << "reversed name:" << newName << endl << endl;
  }
}

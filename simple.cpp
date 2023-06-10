#include <iostream>
using namespace std;

void headerFile(); //moved function to bottom

int main(){
  headerFile();
  cout << "Hello again--working on Github with VS Code";
  return 0;
}

void headerFile(){
  system("clear");
  cout << "\n\n\n\n\n";
  cout << "\t========\n" << endl;
  cout << "\tWelcome!\n";
  cout << "\t========\n" << endl;
}

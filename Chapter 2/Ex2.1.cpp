#include<iostream>
#include<string>

using namespace std;

int main(){
  string name, addr;
  cout << "Enter your name: " ;
  getline(cin, name);
  cout << "\nEnter your address: " ;
  getline(cin, addr);
  cout << "\nHi, "
      << name << ", your address is " << addr << endl;
}

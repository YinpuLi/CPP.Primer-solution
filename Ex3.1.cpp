#include<iostream>
using namespace std;

const int ft2inch = 12;


void convert(int height, int ft, int inch){
   ft = height / ft2inch;
   inch = height % ft2inch;
}

int main(){
  int height, ft, inch;
  
  cout << "Enter your height(int, in inches): ";
  int height;
  cin >> height;

  convert(height, ft, inch);
  cout << "Your height is " << ft << " feet and " << inch << " inches." << endl;
  return 0;
}

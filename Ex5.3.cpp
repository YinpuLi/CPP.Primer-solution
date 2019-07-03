#include<iostream>

using namespace std;

int main(){
  double num; double sum = 0;
  do{
    cout << "Enter a number(0 to stop): ";
    cin >> num;
    sum += num;
    cout << "The cumulative sum of the entries to date is " << sum << endl;
    
  } while(num != 0);
  
  
  return 0;
}

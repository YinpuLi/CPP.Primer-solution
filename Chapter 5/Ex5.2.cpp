#include<iostream>

using namespace std;

long double factorial(int num){
  long double res = 1;
  if (num == 0 || num == 1){
    return res;
  }
  return factorial(num-1) * num;
}

void displaySeries(int num){
  for (int i = 0; i <= num; i ++){
    cout << i << "! = " << factorial(i) << endl;
  }
}

int main(){
  long double res;
  res = factorial(100);
  cout << "100! = " << res << endl;
  
  displaySeries(100);
  
  return 0;
}

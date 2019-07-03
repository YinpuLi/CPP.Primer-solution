#include<iostream>
#include<array>
using namespace std;

long double* factorial(int num){
  long double * arr = new long double[num + 1];
  arr[0] = 1; 
  for (int i = 1; i <= num + 1; i ++){
    arr[i] = i * arr[i-1];
  }
  return arr;
}

void displaySeries(long double arr[], int size){
  for (int i = 0; i <= size; i ++){
    cout << i << "! = " << arr[i] << endl;
  }
}

int main(){

  long double *arr;
  arr = factorial(100);
  displaySeries(arr, 100);
  
  return 0;
}

#include <iostream>
#include <string>
using namespace std;

const string Month[] = {
  "Jan", "Feb", "Mar", "Apr",
  "May", "Jun", "Jul", "Aug",
  "Sep", "Oct", "Nov", "Dec"
};

int sumArray(int arr[], int size){
  int sum = 0;
  for (int i = 0; i <= size - 1 ; i ++){
    sum += arr[i];
  }
  return sum;
}

int main(){
  int Sales[12];
  for (int i = 0; i <= 12 - 1; i ++){

    cout << "Enter the monthly sales in " + Month[i] << ": " ;
    cin >> Sales[i];
  }
  int sum = sumArray(Sales, 12);
  cout << "\nThe total sales of the year is " << sum << endl;

  return 0;
}

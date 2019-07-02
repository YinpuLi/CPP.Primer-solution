#include<iostream>
#include<cmath>
using namespace std;

const int ft2inch = 12;
const double inch2meters = 0.0254;
const double pd2kg = 2.2;

double convert_height(int ft, int inch){
  double height;
  height = ft * ft2inch + inch;
  height *= inch2meters;
  return height;
}

double convert_weight(double weight){
  double new_weight = weight/ pd2kg;
  return new_weight;
}

double BMI(int ft, int inch, double weight){
  double bmi;
  double height = convert_height(ft, inch);
  double new_wt = convert_weight(weight);

  bmi = new_wt / height / height;

  return bmi;
}



int main(){
  int ft, inch;
  double weight;
  cout << "Enter your height in feet and inches, "
    << "\nFeet: ";
  cin >> ft;
  cout << "\nInches: ";
  cin >> inch;

  cout << "\nEnter your weight in pounds: ";
  cin >> weight;

  double bmi = BMI(ft, inch, weight);

  cout << "\nYour BMI is " << bmi << "." << endl;

  return 0;
}

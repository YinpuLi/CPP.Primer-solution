#include <iostream>
using namespace std;

const double original = 100;
const double simple = 0.1;
const double compound = 0.05;

double InterestCalc(double original,const double rate){
  double interest;
  interest = original * rate;
  return interest;
}

double DaphneTotal(double original, int years){
  double total = original;
  for (int i = 1; i <= years; i ++){
    total += InterestCalc(original, simple);
  }
  return total;
}

double CleoTotal(double original, int years){
  double total = original;
  for (int i = 1; i <= years; i++){
    total += InterestCalc(total, compound);
  }
  return total;
}


int main(){
  int years = 1; double d = original, c = original;
  do {
    d = DaphneTotal(original, years);
    c = CleoTotal(original, years);
    cout << "In the " << years << "th year, " << '\n'
      << "Daphne's investment is " << d << '\n'
      << "Cleo's investment is " << c
      << endl;
    years ++;
  } while (c <= d);
  cout << "After " << years << " years"
    << "the value of Cleo’s investment to exceed the value of Daphne’s investment."
    << '\n'
    << "Daphne's investment is " << d << '\n'
    << "Cleo's investment is " << c << endl;
  return 0;
}

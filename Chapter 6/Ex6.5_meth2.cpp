#include<iostream>

using namespace std;

int main(){
    double income; double taxable = 0.0; double tax = 0.0;
    cout << "Enter your income: " ;
    while(cin >> income && income >= 0){
        if(income > 35000.0){
            taxable = income  - 35000.0;
            tax += (taxable * 0.2);
            income  = 35000.0;
        }
        if (income > 15000.0){
            taxable = income - 20000.0;
            tax += (taxable * 0.15);
            income  = 15000.0;
        }
        if(income > 5000.0){
            taxable = income - 5000.0;
            tax += (taxable * 0.1);
        }
        cout << "You own " << tax << " tvarp as tax" << '\n'
            << "Enter your next income: ";
    }
    cout << "Bye!" << endl;


    return 0;
}

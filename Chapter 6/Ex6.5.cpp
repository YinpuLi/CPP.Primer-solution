#include<iostream>

using namespace std;

int main(){
    double income;
    cout << "Enter your income: ";
    while(cin >> income && income >= 0){
        if(income <= 5000.0){
            cout << "You own " << income * 0.0 << " tvarps." << endl;
        } else if(income <= 15000.0){
            cout << "You own " << (income - 5000.0) * 0.1 << " tvarps." << endl;
        } else if(income <= 35000.0){
            cout << "You own " << 0.0 + 1000.0 + (income - 15000.0) * 0.15 << " tvarps." << endl;
        } else {
            cout << "You own " << 1000.0 + 3000.0 + (income - 35000.0) * 0.2 << " tvarps." << endl;
        }
        cout << "Enter your income: " ;

    }
    cout << "Thank you for using the software!" << endl;
    return 0;
}

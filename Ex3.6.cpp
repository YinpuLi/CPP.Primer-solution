#include<iostream>

using namespace std;

double fraction(double m, double g){
    double p = m / g;
    return p;
}


int main(){
    double m, g;
    cout << "Enter the miles you drive: ";
    cin >> m;
    cout << "\nEnter the gallons of gasoline you have used: ";
    cin >> g;
    
    cout << "\nYour car has gotten " << fraction(m, g) << " miles per gallon." << endl;


    return 0;
}

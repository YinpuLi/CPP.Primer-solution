#include<iostream>

using namespace std;

float fraction(double w, double u){
    float p;
    p = u/w;
    p *= 100;
    return p;
}

int main(){
    double w, u;
    cout << "Enter the world's population: ";
    cin >> w;
    cout << "\nEnter the population of U.S. : ";
    cin >> u;

    float p;
    p = fraction(w, u);

    cout << "\nThe population of the US is " << p << "% of the world population." << endl;


    return 0;
}

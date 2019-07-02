#include<iostream>

using namespace std;

double fraction(long long w, long long u){
    double p;
    p = u/w;
    return p*100;
}

int main(){
    long long w, u;
    cout << "Enter the world's population: ";
    cin >> w;
    cout << "\nEnter the population of U.S. : ";
    cin >> u;
    
    double p;
    p = fraction(w, u);
    
    cout << "\nThe population of the US is " << p << "% of the world population." << endl;
    

    return 0;
}

#include<iostream>

using namespace std;

const double km100_to_m = 62.14;
const double g2l = 3.875;

void convert(double gc){
    gc = 1 / (gc / (km100_to_m * g2l));
    cout << "\nThe US style: " << gc << "miles per gallon." << endl;
}

int main(){
    double gc;
    cout << "Enter the gas consumption(in L/100 km): ";
    cin >> gc;
    convert(gc);
    return 0;
}

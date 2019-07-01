//2-5.cpp   //convert Celsius to Fahrenheit
#include<iostream>
double CtoF(double);   //function prototype
int main()
{
    using namespace std;
    int Ctem;
    cout << "Please enter a Celsius value: ";
    cin >> Ctem;
    double Ftem=CtoF(Ctem);
    cout << Ctem
         << " degrees Celsius is "
         << Ftem
         << " degrees Fahrenheit"
         << endl;
    return 0;
}

double CtoF(double s)
{
    return 1.8*s+32.0;
}

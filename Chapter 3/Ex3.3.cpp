#include<iostream>
using namespace std;

const int s2m = 60;
const int m2d = 60;

void get_degree(double degree, double min, double sec){
    min += (sec/s2m);
    degree += (min/m2d);

    double temp = 0.0;
    temp += degree;
    
    cout << endl;
    cout << degree << " degrees, " << min << " minutes, "
        << sec << " seconds = " << temp << " degrees." << endl;
}


int main(){
    double d, m, s;
    cout << "Enter a latitute in degrees, minutes and seconds: "
        << '\n'
        << "First, enter the degrees: ";
    cin >> d;
    cout << "\nNext, enter the minutes of arc: ";
    cin >> m;
    cout << "\nFinally, enter the seconds of arc:";
    cin >> s;
    get_degree(d, m, s);
    return 0;
}

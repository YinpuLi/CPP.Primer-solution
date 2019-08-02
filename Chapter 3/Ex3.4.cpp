#include<iostream>

using namespace std;

const int d2h = 24;
const int h2m = 60;
const int m2s = 60;

void displayTime(long long sec){
    long long min, hour, day, temp;
    day = sec/(m2s * h2m * d2h);
    temp = sec%(m2s * h2m * d2h);

    hour = temp/(m2s * h2m);
    temp %= (m2s * h2m);

    min = temp / m2s;
    temp %= m2s;

    cout << endl;
    cout << sec << " seconds = " << day << " days, "
        << hour << " hours, " << min << " minutes, "
        << temp << " seconds." << endl;
}



int main(){
    cout << "Enter the number of seconds: ";
    long long sec;

    cin >> sec;

    displayTime(sec);

    return 0;
}

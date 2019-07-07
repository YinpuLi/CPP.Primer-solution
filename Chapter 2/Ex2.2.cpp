#include<iostream>
using namespace std;

double to_yards(double distance);

int main(){
        cout << "Enter a distance in furlongs: " ;
        double distance, dis_converted;
        cin >> distance;
        dis_converted = to_yards(distance);
        cout << "\nThe converted distance is " << dis_converted << " yards." << endl;
}


double to_yards(double distance){
        double temp = 220.0 * distance;
        return temp;
}

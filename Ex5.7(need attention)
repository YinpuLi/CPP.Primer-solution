#include <iostream>
#include <string>

using namespace std;

struct car {
    string make;
    int yearBuilt;
};

int main(int argc, char ** argv) {
    int numCars = 0;

    cout << "How many cars do you wish to catalog? ";
    (cin >> numCars).get();

    car *catalog = new car[numCars];

    for (int i = 0; i < numCars; i++) {
        cout << "Car #" << (i + 1) << ":\n";
        cout << "Please enter the make: ";

        getline(cin, catalog[i].make);

        cout << "Please enter the year made: ";
        (cin >> catalog[i].yearBuilt).get();
    }

    cout << "Here is your collection:\n";

    for (int i = 0; i < numCars; i++) {
        cout << catalog[i].yearBuilt << " " + catalog[i].make + "\n";
    }

    delete [] catalog;

    return 0;
}

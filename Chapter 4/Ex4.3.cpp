#include <iostream>
using namespace std;

const int size = 100;

void combine(char fn[], int size1, char ln[], int size2){
    cout << "Here's the information in a single string: " << ln << ", " << fn << endl;

}


int main(){
    char fn[size], ln[size];
    cout << "Enter your first name: ";
    cin.getline(fn, size);
    cout << "Enter your last name: ";
    cin.getline(ln, size);

    combine(fn, size, ln, size);
    return 0;
}

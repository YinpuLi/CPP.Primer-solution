/*The first version uses cstring, this version use char */
#include<iostream>

using namespace std;

const int size = 100; // capacity of the char array

int main(){
    char fn[size], ln[size], grade; int age;
    cout << "What is your first name? ";
    cin.getline(fn, size, '\n');
    cout << "What is your last name? ";
    cin.getline(ln, size, '\n');
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    grade ++; // increment a char variable

    cout << "\nName: " << fn << ", " << ln
        << "\nGrade: " << grade
        << "\nAge: " << age << endl;

    return 0;
}

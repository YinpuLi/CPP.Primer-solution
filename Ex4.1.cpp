#include <iostream>
#include <string>
using namespace std;

void displayInfo(string fn, string ln, int age, string grade){
    string g;
    if (grade == "A"){
        g = "B";
    } else if (grade == "B"){
        g = "C";
    } else {
        g = "D";
    }
    cout << "Name: " << ln + fn << '\n'
        << "Grade: " << g <<'\n'
        << "Age: " << age << endl;
}

int main(){
    string fn, ln, grade;
    int age;
    cout << "What is your first name? ";
    getline(cin, fn, '\n');
    cout << "What is your last name? ";
    getline(cin, ln, '\n');
    cout << "What letter grade do you deserve? ";
    getline(cin, grade, '\n');
    cout << "What is your age? ";
    cin >> age;

    displayInfo(fn, ln, age, grade);
    return 0;
}

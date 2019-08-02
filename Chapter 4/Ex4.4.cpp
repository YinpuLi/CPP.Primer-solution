#include <iostream>
#include <string>
using namespace std;

string combine(string a, string b){
    string c = a + ", " + b;
    return c;
}

int main(){
    string fn, ln;
    cout << "Enter your first name: ";
    getline(cin, fn);
    cout << "Enter your last name: ";
    getline(cin, ln);
    string c = combine(ln, fn);
    cout << "Here’s the information in a single string: " << c;
    
    
    return 0;
}

/* Rewrite Listing 4.4, using string instead of char*/

# include<iostream>
# include<string>
using namespace std;

int main(){
    string name, dessert;

    cout << "Enter your name:\n";
    getline(cin, name); // reads through newline
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}

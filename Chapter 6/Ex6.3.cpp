#include<iostream>
#include<cctype>
#include<vector>
using namespace std;

int main(){
    cout << "Please enter one of the following choices:" << '\n'
        << "c) carnivore" << '\t' << "p) pianist" << '\n'
        << "t) tree"  << '\t' << "g) game" << endl;
        
    char choice;
    /* while(cin >> x) means keep reading values from cin into x, and as long as a value can be read, continue looping,
        as soon as a value is read that is not a char, or as soon as cin is closed/while-loop condition is closed, the loop
        terminates. 
        This means the loop will only execute while all the contitions are valid.    
    */
    while(cin >> choice && choice != 'c' && choice != 'p' && choice != 't' && choice != 'g'){
        cout << "Please enter a c, p, t, or g : " ;
    }
    switch(choice) {
        case 'c':{
            cout << "A tiger is a carnivore" << endl;
            break;
        }
        case 'p':{
            cout << "John is a pianist." << endl;
            break;
        }
        case 't':{
            cout << "A maple is a tree" ; break;
        }
        case 'g' : cout << "Monopoly is a game." ; break;
    
    
    }

    return 0;
}

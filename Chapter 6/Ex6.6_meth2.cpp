#include<iostream>

using namespace std;

struct Cont{
    string name;
    double amount;
};


int main(){
    int num;

    cout << "Enter the number of contributors: ";
    cin >> num;

    Cont *donors = new Cont[num];
    for(unsigned int i = 0; i <= num - 1; i++){
        cout << "Enter the name of the contributor #"
            << i + 1 <<": ";
        cin.ignore();
        getline(cin, donors[i].name);
        cout << "Enter the amount of money of the contribution of contributor #: "
            << i + 1 << ": ";
        cin >> donors[i].amount;
    }


    cout << "==== Grand Patrons ====" << endl;

    for(unsigned int i = 0; i <= num - 1; i++){
        if(donors[i].amount >= 10000.0){
            cout << donors[i].name << '\t' << donors[i].amount << endl;
        }
    }
    cout << "==== Headed Patron ====" << endl;
    for(unsigned int i = 0; i <= num - 1; i++){
        if(donors[i].amount < 10000.0){
            cout << donors[i].name << '\t' << donors[i].amount << endl;
        }
    }

    return 0;
}


/* method 2 uses the dynamic allocated array, instead of vector in meth 1*/

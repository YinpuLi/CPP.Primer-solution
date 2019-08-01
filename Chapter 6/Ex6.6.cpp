#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Cont{
    string name;
    double amount;
};

void Classify(vector<Cont> &vec){
    vector<Cont> Grand {};
    vector<Cont> Headed {};
    for(unsigned int i = 0; i <= vec.size()-1; i++){
        if(vec[i].amount >= 10000.0){
             Grand.push_back(vec[i]);
        } else{
            Headed.push_back(vec[i]);
        }

    }
    cout << "The Grand Patrons: " << endl;
    if(Grand.size()==0) {
        cout << "none" << endl;
    }
    else{
        for(unsigned int i = 0; i <= Grand.size()-1; i++){
            cout << Grand[i].name << '\t' << Grand[i].amount << endl;
        }
    }

    cout << "The headed Patrons: " << endl;
    if(Headed.size()==0) {
        cout << "none" << endl;
    }
    else{
        for(unsigned int i = 0; i <= Headed.size()-1; i++){
            cout << Headed[i].name << '\t' << Headed[i].amount << endl;
        }
    }


}

int main(){
    int num;

    cout << "Enter the number of contributors: ";
    cin >> num;
    vector<Cont> vec {};
    for(unsigned int i = 0; i <= num - 1; i++){
        Cont temp;
        cout << "Enter the name of the contributor #"
            << i + 1 <<": ";
        cin.ignore(); // this line is important
        getline(cin, temp.name); // getline the string, allowing the space
        cout << "Enter the amount of money of the contribution of contributor #: "
            << i + 1 << ": ";
        cin >> temp.amount;
        vec.push_back(temp);
    }
    Classify(vec);


    return 0;
}

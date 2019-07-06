#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout << "Enter the words (stop, type the word done): " << endl;
    int count = 0;
    char entered[20];
    cin.getline(entered, 20);

    while (strcmp(entered, "done") != 0){
        count  ++;
        cin.getline(entered, 20);
    }
    cout << "You entered a total of " << count << " words." << endl;
    return 0;
}

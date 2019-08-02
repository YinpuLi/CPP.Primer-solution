#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout << "Enter the words (stop, type the word done): " << endl;
    int count = 0;
    char entered[20] = "";
    cin >> entered;

    while (strcmp(entered, "done") != 0){
       count  ++;
       cin >> entered;
    }
    cout << "You entered a total of " << count << " words." << endl;
    return 0;
}

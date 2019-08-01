#include <iostream>

const int strsize = 255;

int main() {
    using namespace std;

    struct bop {
        char fullname[strsize]; // real name
        char title[strsize]; // job title
        char bopname[strsize]; // secret BOP name
        int preference; // 0 = fullname, 1 = title, 2 = bopname
    };

    bop members[] = {
            {"User 1", "Title 1", "Bop 1", 0},
            {"User 2", "Title 2", "Bop 2", 1},
            {"User 3", "Title 3", "Bop 3", 2}
    };

    char selection;
    int arrayLength = sizeof(members) / sizeof(bop);

    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name    b. display by title" << endl;
    cout << "c. display by bopname d. display by preference" << endl;
    cout << "q. quit" << endl;
    cout << "Enter your choice:";

    while (cin >> selection && selection != 'q') {
        for (int i = 0; i < arrayLength; i++) {
            switch(selection) {
            case 'a':
                cout << members[i].fullname << endl;

                break;

            case 'b':
                cout << members[i].title << endl;

                break;

            case 'c':
                cout << members[i].bopname << endl;

                break;

            case 'd':
                switch(members[i].preference) {
                case 0:
                    cout << members[i].fullname << endl;

                    break;

                case 1:
                    cout << members[i].title << endl;

                    break;

                case 2:
                    cout << members[i].bopname << endl;

                    break;
                }

                break;
            }
        }

        cout << "Next choice:";
    }

    cout << "Bye!";

    return 0;
}

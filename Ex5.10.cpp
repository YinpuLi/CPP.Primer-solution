/*Write a program using nested loops that asks the user to enter a value for the
number of rows to display. It should then display that many rows of asterisks, with
one asterisk in the first row, two in the second row, and so on. For each row, the
asterisks are preceded by the number of periods needed to make all the rows
display a total number of characters equal to the number of rows.A sample run
would look like this:
Enter number of rows: 5
....*
...**
..***
.****
******/


#include <iostream>

using namespace std;

/* print num numbers of space in front of the star */
void printSpace(int num){
    for(int i = 0; i<= num - 1; i ++){
        cout << ' ';
    }
}
void printStar(int num){
    for(int i = 0; i <= num - 1; i ++){
        cout <<"*";

    }

}
int main(){
    cout << "Enter the number of rows: ";
    int rows;
    cin >> rows;
    for (int i = 0; i <= rows - 1; i ++){
        printSpace(4 - i);
        printStar(i + 1);
        cout << endl;
    }
    return 0;
}

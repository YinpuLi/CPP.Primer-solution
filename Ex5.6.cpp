#include <iostream>
#include <string>
using namespace std;

const int months = 12;
const int years  = 3;
const string Month[] = {
  "Jan", "Feb", "Mar", "Apr",
  "May", "Jun", "Jul", "Aug",
  "Sep", "Oct", "Nov", "Dec"
};

int sumVec(int *arr, int size){
    int sum = 0;
    for (int i = 0; i <= size - 1; i ++){
        sum += arr[i];
    }
    return sum;
}

void printArray(int *arr, int size){
    for (int i = 0; i <= size - 1; i ++){
        cout << arr[i] << ' ' ;
    }
}


/* returning a 2-d array */
int **ReadArray(int year, int month){
    int ** arr = 0;
    arr = new int *[year];
    for (int y = 0; y <= year -1; y ++){
        arr[y] = new int[month];
        for (int m = 0; m <= month - 1; m++){
            cout << "Enter the monthly sales in " << Month[m]
            << " of " << y + 1 << "th year: " ;
            cin >> arr[y][m];
        }
    }

    return arr;
}

int* SumByRow(int **arr, int year){
    int *RowSum = new int[year];
    for (int i = 0; i <= year - 1; i ++){
        RowSum[i] = sumVec(arr[i], months);
    }
    return RowSum;
}

int main(){
    int** arr = ReadArray(years, months);
    int* yearSum = SumByRow(arr, years);
    cout << "\nThe yearly sales are :" << endl;
    printArray(yearSum, years);
    cout << "\nThe total sale of " << years << " years is " << sumVec(yearSum, years);
    return 0;
}

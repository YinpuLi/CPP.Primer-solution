#include<iostream>
using namespace std;

int getSum(int num1, int num2){
    int small, large;
    if (num1 <= num2){
        small = num1; 
        large = num2;
    } else {
        small = num2;
        large = num1;
    }
    
    int sum = 0;
    for (int i = small; i <= large; i ++){
        sum += i;
    }
    cout << "The sum of all the integers from " 
        << small << " through " << large 
        << " is " << sum << endl;
    return sum;
}

int main(){
    int num1, num2;
    cout << "Enter the first number: " ;
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    int sum = getSum(num1, num2);
        
    return 0;
}   

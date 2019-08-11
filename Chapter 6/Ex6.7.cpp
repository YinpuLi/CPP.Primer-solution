/*
Write a program that reads input a word at a time until a lone q is entered.The
program should then report the number of words that began with vowels, the number
that began with consonants, and the number that fit neither of those categories.
One approach is to use isalpha() to discriminate between words beginning with
letters and those that don’t and then use an if or switch statement to further
identify those passing the isalpha() test that begin with vowels.A sample run might
look like this:

Enter words (q to quit):
The 12 awesome oxen ambled
quietly across 15 meters of lawn. q
5 words beginning with vowels
4 words beginning with consonants
2 others
 */


#include <iostream>
#include <string>
const char VOW[10] {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};

using namespace std;

bool isVow(string str){
    bool flag = 0;
    for(int i = 0; i<= 10-1; i++){
        if(str[0] == VOW[i]){
            flag = 1;
            return flag;
        }    
    }
    return flag;    
}


int main(){
    cout << "Enter words ( q to quit): " << endl;
    string str;
    int vow = 0; int con = 0; int other = 0;
    
    while (cin >> str && str.compare("q") != 0){
        if(!isalpha(str[0])){
            other ++;
        } else if(isVow(str)){
            vow ++;
        } else {
            con ++;
        }
    }
    
    cout << vow << " words beginning with vowels" << '\n'
        << con << " words beginning with consonants" << '\n'
        << other << " others " << endl;

    return 0;
}

#include <iostream>
using namespace std;
 
// check if given string is a palindrome or not

bool palindrom(string str){
    int low = 0;
    int high = str.length() - 1;
 
    while (low < high){
        // if mismatch happens
        if (str[low] != str[high])
            return false;
 
        low++;
        high--;
    }
 
    return true;
}
 
int main(){
    string str;
    cin >> str;
 
    if (palindrom(str))
        cout << "palindrom";
    else
        cout << "not palindrom";
 
    return 0;
}
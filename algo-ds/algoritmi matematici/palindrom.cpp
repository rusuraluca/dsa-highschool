#include <iostream>

using namespace std;

int palindrom(int n){
    int digit, rev=0;
    do{
        digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    } while (n != 0);

    return rev;
} 

int main(){
    int n;
    cin >> n;
    if(n == palindrom(n)) cout << "palindrom";
    else cout << "nu e palindrom";

    return 0;
}

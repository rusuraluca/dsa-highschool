#include <iostream>
using namespace std;

//verifica daca n este un nr palindrom
int palindrom(int n){
    int inv=0, cn=n;
    while(cn){
        inv = inv*10 + cn%10;
        cn/=10;    
    }
    if(inv == n) return 1;
    else return 0;
}

int main(){
    int n;
    cin >> n;
    if(palindrom(n)) cout << "Da";
    else cout << "Nu";
}
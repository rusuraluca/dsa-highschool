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

//afiseaza nr d-palindrom din intervalul a si b
void dpalindrom(int a, int b){
    int cx, nr, p;
    for(int x=a; x<=b; x++){
        cx = x/100; 
        nr = 0; 
        p = 1;
        
        while(cx >= 100){
            nr = nr + (cx % 10) * p;
            cx /= 10;
            p *= 10;
        }
        
        if(palindrom(nr)==1)
            cout << x << " ";
    }
}

int main(){
    int a=100000, b=200000;
    dpalindrom(a, b);
}
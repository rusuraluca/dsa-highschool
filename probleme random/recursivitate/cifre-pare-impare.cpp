#include <iostream>

using namespace std;

/*
Scrieti o functie recursiva cu numele cifre care primeste prin parametrul n un numar natual si furnizeaza:
- prin parametrul p numarul format cu cifrele pare ale lui n,
- prin parametrul i numarul format cu cifrele impare ale lui n.
Exemplu:
In urma apelului cifre(4536597,p,i); variabila p va fi egala cu 46, iar i cu 53597.
*/

void cifre(int n, int &p, int &i){
    if(n<=9){ 
        if(n%2==0) { 
            p=n; 
            i=0; 
        } else { 
            p=0; 
            i=n; 
        }
    }else{
        cifre(n/10, p, i);
        if(n%2==0) 
            p = p*10 + n%10;
        else 
            i = i*10 + n%10;
    }
}

int main(){
    int n, p, i;
    cin >> n;
    cifre(n, p, i);
    cout << p << " " << i;
}
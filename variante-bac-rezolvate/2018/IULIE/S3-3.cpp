#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

/*
Subprogramul resturi are patru parametri, n, x, y și r, prin care primeşte câte un număr natural din intervalul [1,109], r<x<y
<n. Subprogramul returnează numărul de valori naturale din intervalul [1,n] pentru care atât restul împărțirii la
x, cât și restul împărțirii la y, sunt egale cu r.
Scrieţi definiţia completă a subprogramului.

Exemplu: pentru n=200, x=5, y=14 și r=2, subprogramul returnează numărul 3 (pentru numerele 2, 72 și 142 atât restul împărțirii la 5, cât și restul împărțirii la 14, este 2).
*/

int resturi(unsigned int n, unsigned int x, unsigned int y, unsigned int r){
    int contor = 0;
    for(int i = 1; i <= n; i++){
        if((i % x == r) && (i % y == r))
            contor++;
    }
    return contor;
}

int main(){
    int x, y, n, r;
    cin >> n >> x >> y;
    cout << resturi(n, x, y, r)
}
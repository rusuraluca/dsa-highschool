#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

/*
Din fisierul concatenari.in se citeste un cuvant s avand maxim 10 litere. Apoi se citeste un numar natural nenul n cu cel mult o cifra si apoi se citesc n cifre. Modificati sirul s in functiile de numerele citite dupa n, astfel:
- daca numarul x citit este par, atunci la s se vor adauga primele x litere in ordinea din sir
- daca numarul x citit este impar, atunci la s se vor adauga primele x litere in ordinea inversa din sir.
Afisati in fisierul concatenari.out sirul obtinut din s la finalul modificarilor.
Restrictie: Numere citire nu depasesc lungimea cuvantului s.
Exemplu:
concatenari.in
alina
3
4 3 2
concatenari.out
alinaalinilaal
Explicatie:
Se fac 3 concatenari. Prima data se adauga "alin", apoi "ila" si apoi "al";
*/

int main(){
    char s[256];
    int n, x;
    cin >> s;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        cin>>x;
        if(x % 2 == 0) strncat(s, s, x);
        else
            for(int j = x-1; j >= 0; j--)
                strncat(s, s+j, 1);
    }
    cout << s;
    return 0;
}
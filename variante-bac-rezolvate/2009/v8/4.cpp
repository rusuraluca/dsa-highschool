/*
Se consideră definite următoarele subprograme:
- p1 care primeşte prin intermediul parametrului n un număr natural cu cel mult 8 cifre şi
returnează suma cifrelor numărului primit prin parametrul n
Exemplu: dacă n este egal cu 1234 valoarea returnată de subprogram va fi 10.

-p2 care primeşte prin intermediul parametrului n un număr natural cu cel mult 8 cifre,
elimină ultima cifră a acestui număr şi returnează noul număr obţinut.
Exemplu: dacă n este egal cu 1234 valoarea returnată de subprogram va fi 123.

a) Scrieţi numai antetul subprogramelor p1 şi p2. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n cu cel
mult 8 cifre şi determină, prin apeluri utile ale subprogramelor p1 şi p2, numărul de cifre
egale cu 0 din scrierea lui n. Programul va afişa pe ecran numărul obţinut.
Exemplu: dacă n este 102030, programul va afişa valoarea 3. (6p.) 
*/

#include <iostream>

using namespace std;

int p1(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

int p2(int &n){
    return n/10;
}

int main(){
    int n, k=0;
    cin >> n;

    while(n){
        if(p1(n) == p1(p2(n))) k++;
        n/=10;
    }

    cout << k;

    return 0;
}

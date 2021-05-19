/*
Se consideră definite două subprograme:
- Subprogramul s1, cu 3 parametri, care primeşte prin intermediul parametrului a un tablou
unidimensional cu exact 100 de elemente, numerotate de la 0 la 99, numere întregi de cel
mult 4 cifre fiecare, iar prin intermediul parametrilor p şi q (0≤p<q<100) poziţiile a două
elemente ale tabloului. Subprogramul furnizează prin intermediul parametrului p poziţia
primului element par (dacă există), şi prin intermediul parametrului q poziţia ultimului
element impar (dacă există), din secvenţa ap,ap+1, ..., aq. Dacă această secvenţă nu
conţine niciun element par subprogramul va furniza prin intermediul lui p valoarea -1, iar
dacă nu conţine niciun element impar, va furniza prin intermediul lui q valoarea -1.
- Subprogramul s2, cu doi parametri, a şi b, două numere întregi cu cel mult 4 cifre fiecare;
subprogramul interschimbă valorile a două variabile transmise prin intermediul parametrilor
a şi b.
a) Scrieţi numai antetul subprogramului s2. (4p.)
b) Scrieţi definiţia completă a subprogramului s1. (6p.)
c) Scrieţi un program C/C++ care:
- citeşte de la tastatură un număr natural nenul n (0≤n<100), apoi cele n elemente ale unui
şir a. Fiecare dintre aceste elemente este un număr întreg cu cel mult 4 cifre şi cel puţin un
element al şirului este par;
- determină rearanjarea elementelor şirului astfel încât toate valorile pare să fie plasate la
sfârşitul şirului a, folosind apeluri utile ale subprogramelor s1 şi s2;
- scrie elementele şirului rezultat în urma acestei transformări pe o singură linie a fişierului
text BAC.TXT, separate prin câte un spaţiu.
Exemplu: pentru n=5 şi a=(2,3,4,7,5) fişierul ar putea avea conţinutul:
7 5 3 4 2. 
*/


#include <iostream>

using namespace std;

void s1(int a[100], int &p, int &q){
    p=q=-1;

    for(int i=p; i<=q; i++)
        if(a[i]%2==0){
            p=i; 
            break;
        }

    for(int i=q; i>=p; i--)
        if(a[i]%2!=0){
            q=i; 
            break;
        }
}

void s2(int &a, int &b){ 
    //swap(a, b);
    int aux = a;
    a=b;
    b=aux;
}

int main(){
    int a[100], n, auxPar, auxImpar;
    cin >> n;

    for(int i=0; i<n; i++) 
        cin >> a[i];

    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++){
            auxPar=i, auxImpar=j;
            s1(a, auxPar, auxImpar);
            s2(a[auxPar], a[auxImpar]);
    }

    for(int i=0; i<n; i++) 
        cout << a[i] << " ";

    return 0;
}

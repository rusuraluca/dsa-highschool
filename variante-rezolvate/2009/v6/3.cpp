/*
Se consideră definite următoarele subprograme:
- s1, cu doi parametri: a, b două numere întregi cu cel mult 4 cifre fiecare; subprogramul
interschimbă valorile a două variabile transmise prin intermediul parametrilor a şi b.
- s2, cu trei parametri: a, un tablou unidimensional cu exact 100 de elemente, numere
întregi cu cel mult 4 cifre fiecare, p, un număr natural (p≤100), q, un număr natural
(q≤100). Subprogramul caută primul element divizibil cu 5 în secvenţa ap,ap+1, ..., aq,
şi returnează poziţia acestuia, dacă există un astfel de element, sau valoarea -1 în caz
contrar.
a) Scrieţi numai antetul subprogramului s1.
b) Scrieţi definiţia completă a subprogramului s2. 
c) Scrieţi programul C/C++ care citeşte de la tastatură o valoare naturală n (0<n≤100) şi
apoi un tablou unidimensional a, cu n elemente, numere întregi cu cel mult 4 cifre fiecare.
Programul determină, folosind apeluri utile ale subprogramului s2, primul element divizibil
cu 5 (dacă există) şi ultimul element divizibil cu 5 (dacă există) al tabloului a, interschimbă
valorile elementelor găsite, folosind apelul subprogramului s1, şi apoi scrie pe prima linie a
fişierului text BAC.TXT elementele tabloului a, astfel transformat, separate prin câte un
spaţiu, sau valoarea 0 dacă tabloul conţine mai puţin de două elemente divizibile cu 5.
Exemplu: pentru n=7 şi tabloul a=(6,10,4,15,2,5,8), programul va scrie în fişier:
6 5 4 15 2 10 8
*/


#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("BAC.TXT");

void s1(int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}

int s2(int a[100], int p, int q){
    for(int i=p; i<=q; i++)
        if(a[i]%5==0) return i;

    return -1;
}

int main(){

    int a[100], n, i1=0, i2=0;

    cin >> n;

    for(int i=1; i<=n; i++) 
        cin>>a[i];

    i1 = s2(a, 1, n);

    for(int i=1; i<=n; i++)
        if(a[i] % 5 == 0) i2 = s2(a, i, n);

    if(i1 == -1 || i2 == -1) fout << 0;
    
    else{
        s1(a[i1], a[i2]);
        for(int i=1; i<=n; i++) 
            fout << a[i] << " ";
    }

    return 0;
}
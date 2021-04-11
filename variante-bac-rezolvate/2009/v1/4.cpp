/*
Subprogramul sub, cu trei parametri, primeşte prin intermediul parametrilor:
– v un tablou unidimensional cu cel mult 100 de componente ce memorează numere
întregi de cel mult 4 cifre fiecare;
– n un număr natural nenul mai mic sau egal cu 100 ce reprezintă numărul efectiv de
componente ale tabloului primit prin intermediul parametrului v;
– a un număr întreg cu cel mult 4 cifre.
Subprogramul sub returnează numărul componentelor tabloului primit prin intermediul
parametrului v ale căror valori sunt egale cu valoarea parametrului a.
Exemplu: pentru valorile n=5, v=(1,21,9,21,403), a=21 ale parametrilor, în urma
apelului, subprogramului sub va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului sub. (4p.)
b) Scrieţi un program C/C++ care să citească de la tastatură un număr natural nenul n
(n≤100) şi n numere întregi, fiecare având cel mult 4 cifre, şi care, folosind apeluri utile ale
subprogramului sub, să afişeze pe ecran mesajul DA dacă oricare două dintre cele n
numere citite sunt distincte două câte două, sau mesajul NU în caz contrar.
Exemplu: pentru n=6 şi cele n numere citite de la tastatură: 47 183 69 8 134 -56
se va afişa pe ecran mesajul DA (6p.)
*/

#include <iostream>

using namespace std;

int sub(int v[100], int n, int a){
    int k=0;

    for(int i=1; i<=n; i++)
        if(v[i]==a) k++;

    return k;
}

int main(){
    bool distincte=1;
    int v[100], n, a;

    cin>>n;

    for(int i=1; i<=n; i++) 
        cin>>v[i];

    for(int i=1; i<=n; i++)
        if(sub(v, i, v[i]) == 0){
            distincte=0;
            break;
        }
    if(dis==0) cout<<"NU";
    else cout<<"DA";

    return 0;
}

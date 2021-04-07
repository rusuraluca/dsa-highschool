/*
Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel mult
100 de numere întregi, fiecare număr având cel mult 4 cifre. Scrieţi un program C/C++ care
citeşte numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în
ordine crescătoare, toate numerele naturale nenule din fişier. Dacă nu există astfel de
numere se va afişa pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul NR.TXT conţine numerele: -3 -10 0 7 -5 7 51 -800 6 3798,
atunci pe ecran se va afişa: 6 7 7 51 3798
*/

#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("NR.TXT");

int main(){

    int x, a[105], n=0, aux=0;
    bool exista = 0;

    while(fin >> x){
        if(x>0){
            n++;
            a[n] = x;
            exista = 1;
        }    
    }

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }

    if(exista == 0) cout << "NU EXISTA";
    else {
        for(int i=1; i<=n; i++) 
            cout << a[i] << " ";
    }    

    return 0;
}

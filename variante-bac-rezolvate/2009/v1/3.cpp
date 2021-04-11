/*
Fişierul text bac.txt conţine, pe o singură linie, cel mult 1000 de numere naturale nenule
cu cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu. Scrieţi un program
C/C++ care citeşte de la tastatură un număr natural nenul n (n≤999) şi numerele din fişierul
bac.txt şi care afişează pe ecran, separate prin câte un spaţiu, toate numerele din fişier
care sunt divizibile cu n. Dacă fişierul nu conţine niciun astfel de număr, atunci se va afişa
pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul bac.txt conţine numerele: 3 100 40 70 25 5 80 6 3798,
pentru n=10 atunci pe ecran se va afişa: 100 40 70 80
*/

#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main(){
    int n, x;
    cin >> n;
    
    bool exista=0;
    while(fin >> x){
        if(x % n == 0) {
            exista = 1;
            cout << x << " ";
        }    
    }
    if(exista == 0) cout << "NU EXISTA";
        
    return 0;
}

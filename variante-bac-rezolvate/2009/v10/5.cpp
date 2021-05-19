/*
Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale n şi p
(2≤n≤15, 1≤p≤15) şi construieşte în memorie un tablou bidimensional cu n linii şi p
coloane. Tabloul va fi construit astfel încât parcurgând matricea de la prima linie către ultima
şi fiecare linie de la stânga la dreapta să se obţină şirul primelor n*p pătrate perfecte pare
ordonat strict crescător. Tabloul astfel construit va fi afişat pe ecran, fiecare linie a tabloului
pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii.
Exemplu: pentru n=2, p=3 programul va afişa
tabloul alăturat: (10p.)
 0 4 16
 36 64 100
*/


#include <iostream>
#include <math.h>

using namespace std;

bool pp(int n){
    if((int)sqrt(n)==sqrt(n) && n*n%2==0) return true;
    else return false;
}

int main(){

    int n, p, k=0, a[20][20];

    cin>>n>>p;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=p; j++){
            while(!pp(k)) k++;
            a[i][j]=k;
            cout << k <<" ";
            k++;
        }
        cout << endl;
    }
    return 0;
}

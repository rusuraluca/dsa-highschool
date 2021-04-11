/*
Scrieţi un program C/C++ care citeşte de la tastatură numere naturale din intervalul [2,102]: m, n şi
elementele unui tablou bidimensional cu m linii şi n coloane. Programul afișează pe ecran, pentru fiecare
linie a sa, cea mai mare dintre valorile strict mai mici decât 21 memorate în aceasta, sau mesajul
nu exista, dacă nu există nicio astfel de valoare pe linia respectivă. Numerele, respectiv mesajele,
sunt afișate pe linii separate ale ecranului, în ordinea liniilor corespunzătoare din tablou.
Exemplu: pentru m=3, n=5 și tabloul
6 16 21 4 90
92 26 36 95 80
5 2 9 7 3
se afişează pe ecran
16
nu exista
9
*/

#include <iostream>
using namespace std;

int main(){
    int m, n, t[105][105];
    cin >> m >> n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin >> t[i][j];
        }
    }

    for(int i=1; i<=m; i++){
        int maxx = 0;
        bool ok = 0;
        for(int j=1; j<=n; j++){
            if(t[i][j] > maxx && t[i][j] < 21){
                maxx = t[i][j];
                ok = 1;
            }
        }
        if(ok == 1) cout << maxx << '\n';
        else cout << "nu exista" << '\n';
    }

    return 0;
}

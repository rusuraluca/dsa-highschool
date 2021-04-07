/*
Simetrie1
Fie un sir de n numere naturale. Sa se afiseze perechile de valori, egal departate de valoarea/valorile din mijlocul sirului, care inmultite dau o valoare maxima.

Date de intrare
Fişierul de intrare simetrie1.in va contine pe prima linie valoarea n iar pe a doua linie cele n valori ale sirului

Date de ieşire
În fişierul de ieşire simetrie1.out se vor afisa perechile de valori, fiecare pereche pe cate o linie, în ordinea poziţiei primului element din pereche. Cu alte cuvinte se vor afişa mai întîi perechile mai depărtate de centru, apoi cele mai apropiate.

Restricţii
1 ≤ n ≤ 10000
Valorile din sir vor avea cel mult 4 cifre, numere ne-negative
Exemplu
simetrie1.in	
5
1 3 2 3 9
simetrie1.out
1 9
3 3
*/
 
#include <fstream>
 
using namespace std;
 
ifstream cin("simetrie1.in");
ofstream cout("simetrie1.out");

int main(){
    int n, maxim, a[10000], x[10000], k, y[10000];
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
   
    maxim = 0;

    for(int i = 1; i <= n/2; ++i){
        if(maxim < a[i] * a[n-i+1]){
            k = 0;
            x[++k] = a[i];
            y[k] = a[n-i+1];
            maxim = a[i] * a[n-i+1];
        }
        else if(maxim == a[i] * a[n-i+1]){
            x[++k] = a[i];
            y[k] = a[n-i+1];
        }
    }
    
    for(int i = 1; i <= k; ++i)
        cout << x[i] << ' ' << y[i] << '\n';
    return 0;
}
/*
#2807
Scrieți un program care citește de la tastatură două numere naturale din intervalul [2,50], n și m, 
și elementele unui tablou bidimensional cu n linii și m coloane, numere naturale distincte din intervalul [0,10^4].

Programul interschimbă valoarea minimă din ultima coloană a tabloului cu valoarea minimă din prima coloană a tabloului, 
apoi afișează pe ecran tabloul modificat, câte o linie a tabloului pe câte o linie a ecranului, elementele fiecărei linii fiind separate prin câte un spațiu.

Intrare
4 3

7 5 19
3 8 4
23 6 1
10 2 9

Ieșire
7 5 19
1 8 4
23 6 3
10 2 9 
*/

#include <iostream>
using namespace std;

int n, m ,a[51][51] , i1, j1, i2, j2, min1 = 10000, min2 = 10000;

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j) 
            cin >> a[i][j];
    
    for(int i = 1; i <= n; ++i){
        if(a[i][1] < min1) {
            min1 = a[i][1];
            i1 = i;
            j1 = 1;
        }
        if(a[i][m] < min2) {
            min2 = a[i][m];
            i2 = i;
            j2 = m;
        }    
    }
    
    int temp = a[i1][j1];
    a[i1][j1] = a[i2][j2];
    a[i2][j2] = temp;
    
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j) 
            cout << a[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}

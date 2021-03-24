/*
#206
Scrieţi un program care citeşte de la tastatură două numere naturale nenule n şi m 
şi care construieşte în memorie şi apoi afişează 
o matrice A cu n linii (numerotate de la 1 la n) şi m coloane (numerotate de la 1 la m) 
cu proprietatea că fiecare element A[i][j] memorează cea mai mică dintre valorile indicilor i şi j ( 1≤i≤n, 1≤j≤m ).
*/

#include <iostream>
using namespace std;

int main(){
    int m, n, a[22][22];
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
                if(i<=j)
                    a[i][j] = i;
                else 
                    a[i][j] = j;
        }
    }    
                    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}

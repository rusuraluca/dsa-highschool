/*
Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale nenule n şi m
(2≤m≤10, 2≤n≤10) şi care construieşte în memorie şi apoi afişează o matrice A cu n linii
(numerotate de la 1 la n) şi m coloane (numerotate de la 1 la m) cu proprietatea că fiecare
element Aij memorează cea mai mică dintre valorile indicilor i şi j (1≤i≤n, 1≤j≤m).
Matricea se va afişa pe ecran, câte o linie a matricei pe câte o linie a ecranului, elementele
fiecărei linii fiind separate prin câte un spaţiu.
5.
Exemplu: pentru n=4 şi m=5 se va afişa matricea alăturată.
 1 1 1 1 1
 1 2 2 2 2
 1 2 3 3 3
 1 2 3 4 4
*/

#include <iostream>

using namespace std;

int main(){
    int n, m, A[15][15];
    
    cin >> n >> m;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            
            //A[i][j]=min(i, j)
            
            if(j <= i) A[i][j] = j;
            else A[i][j] = i;
        }
    }    
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << A[i][j] << " ";
        }    
        cout << '\n';
    }    
        
    return 0;
}

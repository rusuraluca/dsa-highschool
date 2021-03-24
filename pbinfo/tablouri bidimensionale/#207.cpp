/*
#207
Scrieţi un program care citeşte de la tastatură un număr natural n 
şi construieşte în memorie o matrice cu n linii şi n coloane 
ale cărei elemente vor primi valori după cum urmează:

- elementele aflate pe diagonala principală a matricei vor primi valoarea 0
- elementele de pe prima coloană, cu excepţia celui aflat pe diagonala principală vor primi valoarea n
- elementele de pe a doua coloană, cu excepţia celui aflat pe diagonala principală vor primi valoarea n-1
...
- elementele de pe ultima coloană, cu excepţia celui aflat pe diagonala principală vor primi valoarea 1*/

#include <iostream>
using namespace std;

int main(){
    int n, a[101][101];
    cin >> n;
    
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            // n n-1 ... 1 0
            a[i][j] = n - j + 1;
       
    // diagonala principală        
    for(int i = 1; i <= n; ++i) 
        a[i][i]=0;
    
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j)
            cout << a[i][j] << " ";
        cout << '\n';
    }
    return 0;
}

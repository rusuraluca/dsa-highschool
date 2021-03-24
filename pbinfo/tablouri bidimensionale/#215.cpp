/*
#215
Scrieţi un program care citeşte de la tastatură un număr natural n cu exact 5 cifre 
şi construieşte în memorie o matrice cu 6 linii şi 6 coloane 
ale cărei elemente vor primi valori după cum urmează:

- elementele aflate pe diagonala principală sunt toate nule;
- elementele de pe linia 1, aflate deasupra diagonalei principale precum şi elementele de pe coloana 1, aflate sub diagonala principală au toate valoarea egală cu cifra unităţilor lui n;
- elementele de pe linia 2, aflate deasupra diagonalei principale precum şi elementele de pe coloana 2, aflate sub diagonala principală au toate valoarea egală cu cifra zecilor lui n;
…
- elementele de pe linia 6, aflate deasupra diagonalei principale precum şi elementele de pe coloana 6, aflate sub diagonala principală au toate valoarea egală cu cifra zecilor de mii a lui n;

Intrare
28731

Ieșire
0 1 1 1 1 1
1 0 3 3 3 3
1 3 0 7 7 7
1 3 7 0 8 8
1 3 7 8 0 2
1 3 7 8 2 0
*/

#include <iostream>
using namespace std;

int main(){
    int n, ind = 0;
    cin >> n;
    int a[100][100];
    
    while(n){
        a[6][++ind] = n % 10;
        n /= 10;
    }
    
    for(int i = ind; i >= 1; --i){
        for(int j = 0; j < i; ++j){
            a[i][j] = a[i+1][j];
        }
        for(int j = i+1; j <= 6; ++j){
            a[i][j] = a[i+1][i];
        }
    }
    
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
    
    return 0;
}

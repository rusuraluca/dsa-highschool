/*
#214
Scrieţi un program care citeşte de la tastatură un număr natural nenul n cu cel mult 9 cifre 
şi construieşte un tablou bidimensional pătratic cu dimensiunea egală cu numărul de cifre ale lui n, 
completată cu cifrele lui n.
Elementele de pe prima coloană vor fi egale cu cifra unităţilor lui n, 
elementele de pe a doua coloană vor fi egale cu cifra zecilor, etc.

Intrare
1359

Ieșire
9 5 3 1
9 5 3 1
9 5 3 1
9 5 3 1
*/

#include <iostream>
using namespace std;

int main(){
    int n, a[11];
    cin >> n;
    
    int ind = 0;
    
    while(n != 0) {
        a[++ind] = n % 10;
        n = n / 10;
    }
    
    for(int i = 1; i <= ind; ++i) {
        for(int j = 1; j <= ind; ++j)
            cout << a[j] << " ";
        cout << '\n';
    }
}

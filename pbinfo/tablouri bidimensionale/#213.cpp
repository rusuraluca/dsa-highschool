/*
#213
Scrieţi un program care citeşte de la tastatură un număr natural nenul n 
construieşte un tablou bidimensional de dimensiune n în care fiecare element 
este egal cu ultima cifră a produsului indicilor.

Intrare
4

Ieșire
1 2 3 4
2 4 6 8
3 6 9 2
4 8 2 6
*/

#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    for(int i = 1; i <= n; ++i){
       for(int j = 1; j <= n; ++j){
           k = i * j;
           cout << k % 10 << " ";
       }
       cout << '\n';
    }
    return 0;
}

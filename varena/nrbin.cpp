/*
Câte numere binare există între 1 şi N? 
Un număr este considerat binar dacă reprezentarea lui în baza 10 este formată doar din cifre de 1 şi / sau de 0.

Date de intrare
Fişierul de intrare nrbin.in conţine numărul natural N.

Date de ieşire
Fişierul de ieşire nrbin.out conţine un singur număr natural, 
reprezentând numărul de numere binare din intervalul [1, N].

Restricţii
1 ≤ N ≤ 1.000.000.000
*/

#include <fstream>

using namespace std;

ifstream cin("nrbin.in");
ofstream cout("nrbin.out");

//transformare din baza 10 in baza 2
int nrbin(int z){
    int d = 0, k = 1;
    while(z != 0){
        d += (z % 2) * k;
        k *= 10;
        z /= 2;
    }
    
    return d;
}

int n;

int main(){
    cin >> n;
    
    //retin nr de nr binare
    int k = 0;
    
    /*
    (1)2 = (1)10
    (10)2 = (2)10
    (11)2 = (3)10
    (100)2 = (4)10
    ...
    (1000000000)2 = (512)10
    */
    
    for(int i = 1; i <= 513; i++){
        
        //cand e mai mare ca n afisam nr
        if(nrbin(i) > n){
            cout << k;
            return 0;
        }
        //altfel crestem nr
        else k++;
    }

    return 0;

}

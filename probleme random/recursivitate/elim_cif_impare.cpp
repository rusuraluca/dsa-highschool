#include <iostream>

using namespace std;

/*
Scrieti o functie recursiva care primeste ca paramentru un numar natural n 
si returneaza numarul obtinut din n prin eliminarea cifrelor impare.
Exemplu: daca n=234435, functia returna 244.
*/

int elim_cif_impare(int A[], int n){
    if(n==0) return 0;
    else if(n%2==1) return elim_cif_impare(n/10);
         else return elim_cif_impare(n/10)*10 + n%10;
}

int main(){

}
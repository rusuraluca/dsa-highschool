#include <iostream>

using namespace std;

/*
Sa se scrie o functie recursiva care calculeaza si returneaza diferenta dintre 
suma elementelor pare si cea a celor impare dintr-un vector 
A primit ca parametru impreuna cu n reprezentand numarul lui de elemente.
Elementele tabloului sunt indexate de la 1.
Exemplu:
Daca functia primeste tabloul A={4,5,6,3,2,9} cu n=6, atunci va returna -5 adica (4+6+2)-(5+3+9).
*/

int dif_sum(int A[], int n){
    if(n==0) return 0;
    else if(A[n]%2==0) return dif(A,n-1) + A[n];
         else return dif(A,n-1) - A[n];
}

int main(){

}
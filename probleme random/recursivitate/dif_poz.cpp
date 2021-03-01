#include <iostream>

using namespace std;

/*
Sa se scrie o functie recursiva care calculeaza si returneaza diferenta dintre suma elementelor 
de pe pozitii pare si cea a celor aflate pe pozitii impare dintr-un vector.
A primit ca parametru impreuna cu n reprezentand numarul lui de elemente.
Elementele tabloului sunt indexate de la 1.
Exemplu:
Daca functia primeste tabloul A={4,5,6,3,2,9} cu n=6, atunci va returna 5 adica (5+3+9)-(4+6+2).
*/

int dif_poz(int A[], int n){
    if(n==0) return 0;
    else if(n%2==0) return dif_poz(A,n-1) + A[n];
         else return dif_poz(A,n-1) - A[n];
}

int main(){

}
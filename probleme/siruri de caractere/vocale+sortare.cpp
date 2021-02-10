#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

/*
Din fisierul text. in se citeste un text format din cel mult 255 de caractere litere mici si mari, spatii si semnele de punctuatie ,.:;?!. Ordonati cuvintele din text in ordine descrescatoara a numarului de vocale pe care le contin, iar daca au numar egal de vocale, atunci descrescator dupa lungime. Afisati cuvintele pe linii separate in fisierul text.out.
Exemplu:
text.in
Daca satelitii nu sunt activi, GPS-ul nu functioneaza! Ai vazut cate cuvinte MARCATE sunt?
text.out
functioneaza
satelitii
cuvinte
MARCATE
activi
vazut
Daca
cate
Ai
GPS-ul
sunt
sunt
nu
nu
*/

int nrvoc(char s[]){
    int c = 0;
    for(int i=0; i<strlen(s); i++)
        if(strchr("AEIOUaeiou",s[i])) c++;
    return c;
}

void inter(char a[], char b[]){
    char aux[21];
    strcpy(aux,a);
    strcpy(a,b);
    strcpy(b,aux);
}

void ordonare(char s[][21], int n){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if( nrvoc(s[i]) < nrvoc(s[j]) || nrvoc(s[i]) == nrvoc(s[j]) && strlen(s[i]) < strlen(s[j]) )
                inter(s[i],s[j]);
}

int main(){
    char s[256], a[101][21], *p, sep[]=" .,;:?!";
    int n=0;
    cin.getline(s,256);
    
    // separam propozitia in cuvinte si le punem intr-un vector, unde a[i] = cuvantul de pe pozitia i
    p = strtok(s,sep);
    
    while(p){
        strcpy(a[++n], p); 
        p = strtok(NULL,sep); 
    }
    
    ordonare(a,n);
    
    for(int i=1;i<=n;i++)
        cout << a[i] << endl;
    return 0;
}
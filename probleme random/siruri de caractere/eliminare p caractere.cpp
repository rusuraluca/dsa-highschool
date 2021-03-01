#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

/*
Se citeste un cuvant s format din cel mult 100 de litere mici. Se citeste un numar natural p (p<=100). 
Afisati cuvintele obtinute prin eliminarea unei secvente de p litere din s.
Exemplu: s="adina", si p=3, rezulta cuvintele:
na aa ad
*/

int main(){
    char s[101];
    int p;
    cin >> s >> p;
    for(int i=0;i<=strlen(s)-p;i++){
        char t[101], aux[101];
        strcpy(t,s);
        strcpy(aux, s + i + p);
        strcpy(t+i, aux);
        cout<< t << " ";
    }
    return 0;
}
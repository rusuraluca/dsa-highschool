#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

/*
Din fisierul text.in se citeste de pe primul rand un text s cu cel mult 200 de caractere format din spatii, litere mici, litere mari, cifre si simbolurile [ ] ( ) { } , . ! ? ;. 
Dublati fiecare cuvant format din numar par de litere mici si afisati textul obtinut. Separatorii sunt orice caracter inafara de litere si cifre.
Exemplu:
text.in
if(strcmp(s[i],s[j])) {char aux[1000000]; 234689 STRCPY(aux,s[i]); strcpy(s[i],s[j]); strcpy(s[j],aux);}
text.out
ifif(strcmpstrcmp(s[i],s[j])) {charchar aux[1000000]; 234689 STRCPY(aux,s[i]); strcpystrcpy(s[i],s[j]); strcpystrcpy(s[j],aux);}
*/

int litera_mica(char c){
    return c >= 'a' && c <= 'z';
}

int separator(char c){
    char sep[]=" .,!?;[]{}()";
    return strchr(sep,c)!=0;
}

int main(){
    char s[201];
    int n, x;
    cin.getline(s, 201);
    
    for(int i=0; i<=strlen(s); i++){
        if( litera_mica(s[i]) && separator(s[i-1]) || i==0){
            int j=i;
            //cal nr de litere mici
            while(j < strlen(s) && litera_mica(s[j])) 
                j++;
            
            //dublare
            if(separator(s[j]))
                if( (j-i) % 2 == 0 ){
                    char aux[401];
                    strcpy(aux, s+i);
                    strcpy(s+j, aux);
                    i = j + (j - i);
                }
            i = j;
        }
    }
    cout << s;
    return 0;
}
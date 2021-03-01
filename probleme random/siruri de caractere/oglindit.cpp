#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

/*
Din fisierul text.in se citeste un text aflat pe mai multe linii si care este format din litere ale alfabetului englez, caractere spatiu si NewLine.
In fisierul text.out se va afisa textul initial in care toate cuvintele de lungime maxima vor fi inlocuite cu inversul (oglinditul) lor. Restul cuvintelor si aranjarea lor pe linii vor ramane neschimbate.
Numarul total de caractere din fisier este cel mult 5000.
Exemplu:
text.in
Eu am gandit la fel ca tine
Dar am gresit codul
text.out
Eu am tidnag la fel ca tine
Dar am tiserg codul
*/

int main(){
    char s[5001];
    int lmax=0;
    
    cin.get(s,5001,EOF);
    
    for(int i=0; s[i]; i++)
        if(s[i]!=' ' && s[i]!='\n'){
            int j=i;
            while(s[j] && s[j]!=' ' && s[j]!='\n')
                j++;
            if(j-i > lmax) 
                lmax = j-i;
        }
        
    for(int i=0; s[i]; i++)
        if(s[i]!=' ' && s[i]!='\n'){
            int j = i;
            while(s[j] && s[j]!=' ' && s[j]!='\n')
                j++;
            if(j-i==lmax){
                for(int x=i, y=j-1; x<y; x++,y--)
                    swap(s[x], s[y]);
            }
        }
    cout << s;
    return 0;
  
}

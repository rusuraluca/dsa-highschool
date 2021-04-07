/*
Se consideră un text cu maximum 255 de caractere, format din litere mici ale alfabetului
englez şi spaţii. Textul conţine cel puţin o consoană. Scrieţi un program C/C++ care citeşte
de la tastatură textul şi afişează pe ecran numai ultima consoană care apare în text.
Exemplu: dacă de la tastatură se introduce textul mare frig saci
pe ecran se va afişa: c (10p.)
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[255];

    cin.getline(s, 255);

    for(int i=strlen(s)-1; i>=0; i--)
        if(!strchr(" aeiou", s[i])){
            cout << s[i];
            break;
        }

    return 0;
}
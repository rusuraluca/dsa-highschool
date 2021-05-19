#include <iostream>
#include <cstring>
#include <string.h>
#include <cctype>

using namespace std;

int main(){
    char s[75];
    cin.get(s,75);
    cout << s;
    cout << endl;
    
    for(int i=0; i<strlen(s); i++){
        if(s[i] == ' ' && s[i]!='\n'){
            char aux[75];
            strcpy(aux, s+i+1);
            strcpy(s+i, aux);
            i--;
        }
    }
    
    cout << s;

    return 0;  
}

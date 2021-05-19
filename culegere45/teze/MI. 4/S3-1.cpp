#include <iostream>
#include <cstring>

using namespace std;

int i;
char s[201], aux[201];

int main(){
    cin.getline(s, 101);
    
    for(int i=0; i<strlen(s)-1; i++){
        if(s[i] == s[i+1]){
            strcpy(aux, s+i+1);
            s[i+1]='#';
            strcpy(s+i+2, aux);
            i++;
        }
    }
    
    cout << s;
    
    return 0;
}

/*
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[101];
    int i,n;
    cin.getline(s,100);
    i=0;
    int j;
    while(i<strlen(s)-1) {
        if(s[i]==s[i+1]) {
            //mutam elementele la dreapta
            //cu o pozitie incepand de la i+1
            s[strlen(s)+1]=NULL;
            for(j=strlen(s);j>i;j--)
              s[j]=s[j-1];
            s[i+1]='*';
            i++;
        }
        i++;
    }
    cout<<s;
}
*/

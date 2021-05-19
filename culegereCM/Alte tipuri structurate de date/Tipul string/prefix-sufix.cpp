#include <iostream>
#include <cstring>
using namespace std;

char s[11];

int main(){
    cin.get(s,11);
    cout << s;
    for(int k=strlen(s)-1; k >= 0; k--){
        cout << endl;
        for(int i=0; i<=k-1; i++)
            cout << s[i];
    }
    cout << s;
    for(int j=0; j <= strlen(s)-1; j++){
        cout << endl;
        for(int i=j+1; i<strlen(s); i++)
            cout << s[i];   
    }
}

#include <iostream>
#include <cstring>
#include <string.h>
#include <cctype>

using namespace std;

char s[75], el;

int main(){
    cin.get(s,75);
    cout << s;
    cout << endl;
    for(int i=0; i<strlen(s); i+=2){
        if(islower(s[i]))
            s[i] = toupper(s[i]);
    }
    cout << s;
    
    return 0;  
}

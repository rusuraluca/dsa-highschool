#include <iostream>
#include <cstring>
#include <string.h>
#include <cctype>

using namespace std;

char s[11], el;

int main(){
    cin.get(s,11);
    cout << s;
    cout << endl;
    strupr(s);
    cout << s;
    cout << endl;
    strlwr(s);
    cout << s;
    cout << endl;
    
    return 0;  
}

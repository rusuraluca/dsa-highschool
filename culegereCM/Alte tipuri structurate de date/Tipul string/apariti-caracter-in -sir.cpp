#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main (){
    char c, s[75];
    int cnt=0;
    cin.get(s, 75);
    cin.get();
    cin >> c;
    for(int i=0; i<strlen(s); i++){
        if(s[i] == c || s[i] == toupper(c))
            cnt++;
    }
    cout << cnt;
    
    return 0;
}

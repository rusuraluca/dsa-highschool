#include <cstring>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char s[105];
    cin.get(s,105);
    
    int cnt = 0;
    
    for(int i=0; i<strlen(s);){
        if('0'<=s[i] && s[i]<='9'){
            bool virgula = false;
            while(('0' <= s[i] && s[i] <= '9') || s[i] == ','){
                if(s[i] == ',')
                    virgula = true;
                i++;
            }
            if(!virgula)
                cnt++;
        }
        else i++;
    }

    cout << cnt;
}
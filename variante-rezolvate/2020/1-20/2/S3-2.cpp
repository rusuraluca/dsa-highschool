#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char s[105], *cuv;
    cuv = new char [100];
    cin.get(s,100);

    cuv = strtok(s," ");
    
    while(cuv){
        if(!strstr(cuv,"-")){
            cout << cuv;
            cout << " ";
        }
        cuv = strtok(NULL," ");
    }
    return 0;
}
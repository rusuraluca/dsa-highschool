#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[101];
    cin.get(a,100);
    
    int k=0;
    for(int i=0; i<strlen(a); i++)
        if (a[i] == a[i+1]){
            strcpy(a+i, a+i+1);
        }
    cout << a;
    
    return 0;
}
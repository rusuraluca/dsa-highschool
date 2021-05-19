#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[101],v[]="aeiouAEIOU";
    cin.get(a,100);
    
    int k=0;
    for(int i=0; i<strlen(a); i++)
        if (islower(a[i]) && strchr(v,a[i])){
            a[i] = toupper(a[i]);
        }
    cout << a;
    
    return 0;
}
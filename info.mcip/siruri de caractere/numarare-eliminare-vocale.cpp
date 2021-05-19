#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[101],v[]="aeiouAEIOU";
    cin.get(a,100);
    
    int k=0;
    for(int i=0; i<strlen(a); i++)
        if (strchr(v,a[i])){
            k++;
            strcpy(a+i, a+i+1);
        }
    cout << k << " " << a;
    
    return 0;
}
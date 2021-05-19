#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[101], aux;
    cin.get(a,100);
    
    aux = a[0];
    for(int i=0; i<strlen(a)-1; i++) 
        a[i] = a[i+1];
    a[strlen(a)-1] = aux;
    
    cout << a;
    
    return 0;
}
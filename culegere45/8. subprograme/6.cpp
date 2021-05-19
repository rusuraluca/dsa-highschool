#include <iostream>

using namespace std;

int x[105], n, y, p[105], np;

int cmmdc(int a, int b){
    if(b == 0) return a; 
    return cmmdc(b, a%b); 
}

int prime(int n, int y, int x[], int p[], int &np){
    int c;
    np = 0;
    for(int i=1; i<=n; i++){
        if(cmmdc(x[i], y) == 1){
            np++;
            p[np] = x[i];
        }
    }
}

int main(){
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> x[i];
    cin >> y;
    
    prime(n, y, x, p, np);
    
    cout << np << " ";
    for(int i=1; i<=np; i++)
        cout << p[i] << " ";

    return 0;
}

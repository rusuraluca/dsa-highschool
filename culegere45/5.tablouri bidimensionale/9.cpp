#include <iostream>

using namespace std;

int main() { 
    int n, a[105][105];
    cin >> n;
    
    int x, i ,j;
    
    //indexare de la 0
    x = 1;
    for (i=0; i<(n/2)+(n%2); i++) {
        //parcurgem de la stanga la dreapta
        for (j=i; j<n-i; j++) {
            a[i][j] = x++;
        }
        //parcurgem de sus in jos
        for (j=1+i; j<n-i; j++) {
            a[j][n-i-1] = x++;
        }
        //parcurgem de la dreapta la stanga
        for (j=n-i-2; j>=i; j--) {
            a[n-i-1][j] = x++;
        }
        //parcurgem de jos in sus
        for (j=n-i-2; j>=i+1; j--) {
            a[j][i] = x++;
        }
    }  
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
   
    //indexare de la 1
    x = 1;
    for (i=1; i<=(n+1)/2; i++) {
        //parcurgem de la stanga la dreapta
        for (j=i; j<=n+1-i; j++) {
            a[i][j] = x++;
        }
        //parcurgem de sus in jos
        for (j=i+1; j<=n+1-i; j++) {
            a[j][n+1-i] = x++;
        }
        //parcurgem de la dreapta la stanga
        for (j=n-i; j>=i; j--) {
            a[n+1-i][j] = x++;
        }
        //parcurgem de jos in sus
        for (j=n-i; j>i; j--) {
            a[j][i] = x++;
        }
    }  
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
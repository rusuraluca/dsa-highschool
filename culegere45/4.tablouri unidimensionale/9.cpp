#include <fstream>

using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

int main() { 
    int n, m, v1[100], v2[100];
    cin >> m >> n;
    for(int i=1; i<=m; i++) 
        cin >> v1[i];
    for(int j=1; j<=n; j++) 
        cin >> v2[j];
    
    int i = m;
    int j = n;
    while(i >= 1 && j >= 1){
        if(v1[i] % 2 != 0 && v1[i] >= v2[j]){
            cout << v1[i] << " ";
            i--;
        }
        else if(v2[j] % 2 != 0 && v2[j] > v1[i]){
            cout << v2[j] << " ";
            j--;
        }
        else {
            if(v1[i] % 2 == 0) i--;
            if(v2[j] % 2 == 0) j--;
        }    
    }
    
    if(i >= 1){
        for(int k=i; k>=1; k--)
            if(v1[k] % 2 != 0)
                cout << v1[k] << " ";
    }
    
    if(j >= 1){
        for(int k=j; k>=1; k--)
            if(v2[k] % 2 != 0)
                cout << v2[k] << " ";
    }
   
    return 0;
}
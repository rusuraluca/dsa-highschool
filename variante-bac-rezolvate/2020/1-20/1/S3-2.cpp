#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, k, a[105][105];
    cin >> n >> k;
    for(int l=1; l<=n; l++){
        for(int c=l; c<=l+k; c++){
            for(int s=1; s<=k; s++){
                a[c][s]=c;
                cout << a[c][s] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
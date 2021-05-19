#include <iostream>

using namespace std;

void egale(int n, int x[], int y[], int &eg){
    int i=1, j=1;
    eg=0;
    while(i<=n && j<=n){
        if(x[i]<y[j]){
            i++;
        }else if(x[i]==y[j]){
            eg++;
            i++;
            j++;
        }else 
            j++;
    }
}

int main(){
    int n, x[105], y[105], eg;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> x[i];
    for(int i=1; i<=n; i++)
        cin >> y[i];
        
    egale(n, x, y, eg);
    
    cout << eg;
    return 0;
}

#include <iostream>

using namespace std;

void erathostene(int n){
    bool prim[n+1];
    
    for(int i=3; i<=n; i++)
        prim[i]=true;
    
    for(int i=2; i*i<=n; i++){
        if(prim[i]==true)
            for(int j=i*i; j<=n; j+=i)
                prim[j]=false;
    }
    
    for(int i=2; i<=n; i++)
        if(prim[i]==true)
            cout << i << " ";
}

int main(){
    int n; 
    cin >> n;
    erathostene(n);
    return 0;
}

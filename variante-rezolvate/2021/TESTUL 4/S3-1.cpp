#include <iostream>
#include <fstream>

using namespace std;

int joc(int n){
    int k = 1;
    for(int d=2 ; d*d <= n; d++)
        if(n % d == 0){
            k++;
            if(d*d <= n) 
                k++;
        }
    return k;
}


int main(){
    int n;  
    cin >> n;
    cout << joc(n);
    
    return 0;
}
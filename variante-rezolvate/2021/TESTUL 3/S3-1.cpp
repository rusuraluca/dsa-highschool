#include <iostream>
#include <fstream>

using namespace std;

//returneaza suma divizorilor pozitivi a lui n care nu sunt primi
int suma(int n){
    int s = 1;
    for(int i=2; i<=n; i++){
        if(n % i == 0){
            int k = 0;
            for(int d=2; d*d<=i; d++){
                if(i % d == 0){
                    k++;
                }
            }
            if(k != 0){
                s+=i;
            }
        }
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    cout << suma(n);
    return 0;
}
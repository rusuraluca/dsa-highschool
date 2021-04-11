#include <iostream>
#include <fstream>
#include <algorithm>

ifstream fin("bac.in");

using namespace std;

int main(){
    int x, a[105];
    int k=1;
    while(fin >> x){
        if(x % 10 == 0 && x / 10 % 10 == 2){
            a[k]=x;
            k++;
        }
    }

    // O(n^2) -> bubble sort
    for (int i=1; i<=k-1; i++){
            for (int j=i+1; j<=k; j++){
                    if (a[i] < a[j]){
                        int aux = a[i];
                        a[i] = a[j];
                        a[j] = aux;
                    }
            }
    }
    
    cout << a[1] << " " << a[2] << " " << a[3];
    return 0;
}
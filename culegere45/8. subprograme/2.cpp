#include <iostream>
using namespace std;

//verifica daca n reprezinta un nr in baza b
int baza(int n, int b){
    while(n){
        if(n % 10 >= b)
            return 0;
        n/=10;    
    }
    return 1;
}

int main(){
    int n, b;
    cin >> n >> b;
    cout << baza(n, b);
}
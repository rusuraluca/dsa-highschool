#include <fstream>
using namespace std;
 
ifstream cin("semipalindrom.in");
ofstream cout("semipalindrom.out");
 
int main(){
    int n;
    cin >> n;
    
    // retin intr-un vector cifrele numarului
    int v[10];
    int c = 0;
    while(n){
        c++;
        v[c] = n % 10;
        n /= 10;
    }
    
    // verfic daca cifrele din prima jumatate sunt egale cu cifrele din a doua jumatate
    int sp = 0;
    
    if(c % 2 == 0){
        for(int i = c; i >= c/2; i--){
            if(v[i] == v[i-c/2]) {
                sp = sp*10 + v[i];
            }
        }   
    }else{
        for(int i = c; i > c/2; i--){
            if(v[i] == v[i-(c/2+1)]){
                sp = sp*10 + v[i];
            }    
        }  
    }
    
    if(sp<10) cout << v[c];
    else cout << sp;
 
    return 0;
}
#include <iostream>
#include <fstream>

using namespace std;

ifstream in("numere.in");

int main() { 
    int x, m1, m2, m3;
    
    m1=m2=m3=1000000000;
    while(in >> x){
        if(x % 3 == 0){
            if(x < m1){
                m3=m2, m2=m1, m1=x;    
            }else if(x < m2){
                m3=m2, m2=x;
            }else if(x < m2){
                m3=x;
            }
        }
    }
    
    cout << m1 << " " << m2 << " " << m3;
 
    return 0;
}
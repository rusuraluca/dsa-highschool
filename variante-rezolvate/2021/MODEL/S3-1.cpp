#include <iostream>

using namespace std;

int x, y;

void prime(int n, int& x, int& y){
    int maxx=0, maxx2=0;
    for(int i=1;i<n;i++) {
        bool prim=true;
        for(int d=2; d*d<=i; d++){
            if(i%d==0) {
                prim=false;
                break;
            }
        }
        if(prim==true && i>maxx)
            maxx=i;
    }
    y=maxx;
    
    for(int i=1;i<maxx;i++) {
        bool prim=true;
        for(int d=2; d*d<=i; d++){
            if(i%d==0) {
                prim=false;
                break;
            }
        }
        if(prim==true && i>maxx2)
            maxx2=i;
    }
    x=maxx2;
}

int main(){
    prime(49, x, y); 
    cout << x << " " << y;
    return 0;
}
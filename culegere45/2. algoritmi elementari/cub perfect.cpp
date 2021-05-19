#include<iostream.h>
#include<math.h>

void main() { 
    int n;
    cin >> n;
    float x = pow(n,1/3.0);
    
    if(x == floor(x)) 
        cout<<"da";
    else 
        cout<<"nu";
}
#include <iostream>
#include <iostream>

using namespace std;

int  main (){
    int v[10], i, n, c, nr=0;
    
    for(i=0;i<=9;i++)
    	 v[i]=0;
    	 
    cin >> n;
    
    while(n!=0) {
        c = n % 10;
        v[c]++;
    	n = n / 10;
    }
    
    for(i=0;i<=9;i++)
        if(v[i] > 0) nr++;
        
    cout << nr;
    
    return 0;
}
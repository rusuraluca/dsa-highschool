#include <iostream>
#include <iostream>

using namespace std;

int  main (){ 
	char sir[80], *p;
	cin >> sir;
	p = sir;
	int nr_cifre = 0;
	
	for(;*p;p++){
    	if (!isdigit(*p)) continue;
    	nr_cifre++;
    }
    
    cout << nr_cifre;
    return 0;
}
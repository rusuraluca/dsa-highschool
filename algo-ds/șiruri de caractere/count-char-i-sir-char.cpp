#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char s[35];
	cin >> s;
	char c;
	cin >> c;
	int j=0;
	for(int i = 1; i <= strlen(s); i++)
		if(s[i-1] == c) 
		    j++;
	
	cout << j;
	return 0;
}
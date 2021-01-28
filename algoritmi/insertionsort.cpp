#include <iostream>
#include <vector>
using namespace std;

//Average performance: О(n^2)

void insertionsort(int a[], int n) {
   
    int j, temp;
	for (int i = 0; i < n; i++) {
		j = i;
 		while (j > 0 && a[j - 1] > a[j]) {
 			temp = a[j];
 			a[j] = a[j - 1];
 			a[j - 1] = temp;
 			j--;
 		}
	}
}


int main() {
	int n, a[105];
	
	cin >> n
	
	for (int i = 0; i < n; i++){
	    cin >> a[i] >> " ";
 	}

	insertionsort(a, n);
	
	for (int i = 0; i < n; i++){
 		cout << a[i] << " ";
 	}
	return 0;
}
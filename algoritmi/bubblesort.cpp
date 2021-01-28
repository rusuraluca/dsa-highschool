#include <iostream>
#include <algorithm>
using namespace std;

int bubblesort(int n, int a[]){
    
    bool swap_check = true;
    for (int i = 0; (i < n) && (swap_check); i++) {
        swap_check = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap_check = true;
                swap(a[j], a[j + 1]);  
            }
        }
    }
    
}

int main() {
    int n;
    cin >> n;
  	int a[105];
    for (int i = 0; i < n; i++) {
      	cin >> a[i];
    }
    
    bubblesort(n, a);
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
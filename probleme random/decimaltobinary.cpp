#include <iostream>
using namespace std;
 
// decimal to binary

int find(int decimal_number){
    if (decimal_number == 0) 
        return 0; 
    else
        return (decimal_number % 2 + 10 * find(decimal_number / 2));
}
 
int main(){
    int decimal_number = 10;
    cout << find(decimal_number);
    return 0;
}
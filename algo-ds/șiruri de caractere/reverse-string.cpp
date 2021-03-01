#include <iostream>
using namespace std;
 
// print reverse of given string

void reverse(string str) {  
    if(str.size() == 0) { 
        return; 
    } 
    reverse(str.substr(1)); 
    cout << str[0]; 
}  
  
int main() {  
    string a = "ralucaeceamaismechera";  
    reverse(a);  
    return 0;  
} 
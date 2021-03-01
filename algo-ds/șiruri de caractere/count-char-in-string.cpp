#include <iostream>
#include <string>

//we have an string of n characters and we want to find the number of times a letter 'x' appears

using namespace std;

int count(string str, char c) {
    int n = str.length();
 
  // case for empty string
  if (n == 0) {
    return 0;
  }
  
  // case if first character is the char 'x'.
  if (str.at(0) == c) {
    return count(str.substr(1, n), c) + 1;
  }
  
  // case if first character is not the char 'x'.
  else {
    return count(str.substr(1, n), c);
  }
}

int main(){
    string str;
    char c;
    cin >> str;
    cin >> c;
    cout << count(str,c);
}

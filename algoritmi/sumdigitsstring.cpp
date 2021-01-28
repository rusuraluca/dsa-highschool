#include <iostream>
#include <string>

using namespace std;

int sum(string str) {
  int n = str.length();
  // if string is empty
  if (n == 0) {
    return 0;
  }
  // if string is not empty
  else {
    // convert ASCII to number
    int num = str.at(0) - '0';
    return num + sum(str.substr(1, n));
  }
}

int main(){
    string str;
    cin >> str;
    cout << sum(str);
}

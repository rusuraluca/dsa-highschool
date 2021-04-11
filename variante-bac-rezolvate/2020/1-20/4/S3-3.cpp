#include <cstring>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main(){
    int y, x;
    
    int cnt = 1;
    fin >> y;
    while(fin >> x){
        if(x == y){
            cnt++;
            y = x;
        }else if(x != y && cnt == 2){
            cout << y << " ";
            y = x;
            cnt = 1;         
        }else if(x != y){
            y = x;
            cnt = 1;  
        }
    }
    
    if(cnt == 2){
        cout << y << " ";        
    }
    return 0;
}
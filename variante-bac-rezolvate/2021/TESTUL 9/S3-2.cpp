#include<iostream>
#include<cstring>

using namespace std;
int main(){
    char s[101], *p, voc[]="aeiou";
    
    int k=0, c, i;
    
    cin.getline(s,101);
    
    p=strtok(s," ");
    
    while(p!=NULL){
        
        c=0;
        
        for(int i=0; i<=4; i++)
            if(strchr(p,voc[i]) != NULL)
                c++;
                
        if(c==1){
            k++;
            cout << p << endl;
        }
        
        p=strtok(NULL, " ");
    }
    
    if(k==0) cout << "nu exista";
  
    return 0;
}
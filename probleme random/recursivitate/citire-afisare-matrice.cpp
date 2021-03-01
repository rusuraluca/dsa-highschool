#include <iostream>

using namespace std;

/*
Citirea si afisarea unei matrici folosind functii recursive.
*/

void citire(int A[][101], int n, int m, int i, int j){
    if(i<=n){
        cin>>A[i][j];
        if(j<m) citire(A,n,m,i,j+1);
        else citire(A,n,m,i+1,1);
    }
}

void afisare(int A[][101], int n, int m, int i, int j){
    if(i<=n){
        cout<<A[i][j]<<" ";
        if(j<m) afisare(A,n,m,i,j+1);
        else{
            cout<<endl;
            afisare(A,n,m,i+1,1);
        }
    }
}

int main(){
    int A[101][101],n,m;
    cin>>n>>m;
    citire(A,n,m,1,1);
    afisare(A,n,m,1,1);
    return 0;
}
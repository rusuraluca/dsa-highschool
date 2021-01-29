/*
Considerandu-se o tabla de sah de dimansiune NXN, sa se determine toate modalitatile de
amplasare a n regine pe tabla de sah astfel incat sa nu se atace doua cate doua(doua
regine se ataca daca se afla pe aceeasi linie, coloana, sau diagonala). Implementare recursiva.
*/

#include <iostream>
#include <cmath>
#define nmax 20

using namespace std;

int n; /*dimensiunea (ordinul) tablei de şah */
int nr;
int x[nmax];

int valid(int k)
{
    /*testează condiţiile de continuare */
    int p;
    for(p=1;p<=k-1;p++)
        if((x[k]==x[p]) | (fabs(k-p) == fabs(x[k]-x[p])))
            return 0;
    return 1;
}

void back_recursiv(int k)
{
    int i,j,p;
    for(j=1;j<=n;j++)
    {
        x[k]=j;
        if(valid(k)==1)
        if(k<n)
            back_recursiv(k+1);
        else
            {
                /*tipărirea soluţiei */
	            nr++;
	            cout<<"solutia "<<nr<<endl;
                for(i=1;i<=n;i++)
                {
                    for(p=1;p<=n;p++)
                        if(x[i]==p)
                            cout<<"D"<<" ";
                        else
                            cout<<"*"<<" ";
                    cout<<endl;
                }
                cout<<endl;
            }
    }
}

int main(void)
{
    cout<<"n=";
    cin>>n;
    nr=0;
    back_recursiv(1);
}

/*
Considerandu-se o tabla de sah de dimansiune NXN, sa se determine toate modalitatile de
amplasare a n regine pe tabla de sah astfel incat sa nu se atace doua cate doua(doua
regine se ataca daca se afla pe aceeasi linie, coloana, sau diagonala). Implementare iterativa.
*/

#include <iostream>
#include <cmath>

using namespace std;

int x[50],k,valid,n,m,nr;

void posibil(int k,int &valid)
{
    valid=1;
    for(int i=1;i<=k-1;i++)
		if(fabs(x[i]-x[k])==fabs(i-k)||(x[i]==x[k]))
            valid=0; /*doua dame nu se pot afla pe aceiasi linie (k), aceiasi coloana (x[k]) sau aceiasi diagonala*/
}

int solutie(int k)
{
    if(k==n)
        return 1;
    else
        return 0;
}

void afisare(int k)
{
    nr++;
    cout<<"solutia "<<nr<<endl;
    for(int i=1;i<=k;i++)
    {
        for (int j=1;j<=k;j++)
            if (x[i]==j)
                cout<<"D"<<" ";
            else
                cout<<"*"<<" ";
        cout<<endl;
    }
    cout<<endl;
}

void back()
{
    k=1;
    x[k]=0;
    while(k>0)
    {
		valid=0;
		while(!valid && x[k]<n)
		{
            x[k]=x[k]+1;
            posibil(k,valid);
		}
		if(!valid)
            k--;
        else
            if(solutie(k))
                afisare(k);
            else
			{
                k++;
                x[k]=0;
			}
    }
}

int main()
{
    cout<<"n=";
    cin>>n;
    nr=0;
    back();
    return 0;
}

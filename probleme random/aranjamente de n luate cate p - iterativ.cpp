/*
Se citesc n şi p. Să se genereze toate aranjamentele de n luate câte p. Implementare iterativa.
*/

#include<iostream>
#include<cmath>

using namespace std;

int st[20],n,k,p;

void init()
{
    st[k]=0;
}

int succesor()
{
    if (st[k]<n)
    {
        st[k]++;
        return 1;
    }
    else
        return 0;
}

int valid()
{
    for(int i=1;i<k;i++)
        if(st[i]==st[k])
            return 0;
    return 1;
}

int sol()
{
    return (k==p);
}

void tipar()
{
    for(int i=1;i<=p;i++)
        cout<<st[i];
    cout<<endl;
}

void bkt()
{
    int as;k=1;
    init();
    while(k>0)
    {
        do
        {
        }
        while ((as=succesor()) && !valid());
        if (as)
            if (sol())
                tipar();
            else
            {
                k++;init();
            }
        else
            k--;
    }
}

int main()
{
    cout<<"n=";
    cin>>n;
    cout<<"p=";
    cin>>p;
    bkt();
    return 0;
}

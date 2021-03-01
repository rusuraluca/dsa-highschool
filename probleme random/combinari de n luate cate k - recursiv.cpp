/*
Se citesc n şi k. Să se genereze toate combinarile de n luate câte k. Implementare recursiva.
*/

#include<iostream>

using namespace std;

int st[20],n,k;

void init()
{
    int i;
    cout<<"n=";
    cin>>n;
    cout<<"k=";
    cin>>k;
    st[0]=0;
}

void tipar(int p)
{
    int j;
    for(j=1;j<=p;j++)
        cout<<st[j]<<" ";
    cout<<endl;
}

int solutie(int p)
{
    return (p==k);
}

void bkt(int p)
{
    int val;
    for (val=st[p-1]+1;val<=n;val++)
    {
        st[p]=val;
        if(solutie(p))
            tipar(p);
        else
            bkt(p+1);
    }
}

int main()
{
    init();
    bkt(1);
    return 0;
}

#include<iostream>

using namespace std;

int main ()
{
    int v [] = {24, 12, 15, 15, 8, 19}, n = 6;//tastati aici sirul de valor si lungimea sa
    int s[6], prec[6], best[6];//daca lucrati cu o multime mai mare modificati si aici corespunzator lungimea vectorilor
    int i,j;
    for(i=0; i < n;i++)
    {
        best[i]=0;
        prec[i]=-1;
    }
    best[0]=1;
    for(i=1; i < n;i++)
    {
        int max = 0;
        for(j=0;j < i; j++)
        {
            if(v[j] < v[i] && max <=v[j])
            {
                max = v[j];
                best[i]=1+best[j];
                prec[i]=j;
            }
            if(v[j]==v[i])
                best[j]=best[i];
        }
    if(best[i]==0)
        best[i]=1;
    }
    int maxbest =0;
    for(i=0; i < n; i++)
        if(best[i] > maxbest)
            maxbest = best[i];
    j=0;
    for(i=n-1; i>=0;i--)
    if(best[i]==maxbest)
    {
        s[j++]=v[i];
        if(prec[i]>=0)
            s[j++]=v[prec[i]];
        i = prec [i];
        maxbest=maxbest - 2;
    }
    for(i=j-1;i>=0;i--)
        cout<<s[i]<<" ";
    cout<<endl;
    return 0;
}

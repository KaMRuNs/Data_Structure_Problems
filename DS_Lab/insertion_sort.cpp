#include<bits/stdc++.h>
using namespace std;

int k[10]={2,1,8,3,9,7,5,4,10,5}, m,n=10,loc;
void min(int x)
{
    m=k[x];
    loc=x;
    for(int j=x+1; j<n; j++)
    {
        if(m>k[j])
        {
            m=k[j];
            loc=j;
        }
    }
}

int main()
{
    for(int i=0; i<n; i++)
    {
        min(i);
        int temp = k[i];
        k[i] = k[loc];
        k[loc]= temp;
    }
    for(int a=0; a<n; a++)
    {
        cout<<k[a]<<" ";
    }
}

#include<iostream>
using namespace std;

int ackerman(int m,int n);

int main()
{
    int m, n;
    cin>>m;
    cin>>n;
    cout<<ackerman(m,n);
}
int ackerman(int m,int n)
{
    if(m==0)
    {
        return n+1;
    }
    else if(m!=0 && n==0)
    {
        return ackerman(m-1, 1);
    }
    else if(m!=0 && n!=0)
    {
        return ackerman(m-1,ackerman(m,n-1));
    }
}

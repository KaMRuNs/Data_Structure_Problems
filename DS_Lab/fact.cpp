#include<bits/stdc++.h>
using namespace std;

double fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<" is :"<<fact(n);
}

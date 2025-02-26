#include<iostream>
using namespace std;

int i=0;
void hanoi(int n, char a, char b, char c)
{
    if(n!=0){
        hanoi(n-1,a,c,b);
        cout<<"remove disk "<<n<<" from "<<a <<" to "<<c<<endl;
        hanoi(n-1,b,a,c);
        i++;
    }
}
int main(){
    int n;
    cin>>n;
    char a='A'; char b='B'; char c='C';
    hanoi(n,a,b,c);
    cout<<"number of moves: "<<i;
}

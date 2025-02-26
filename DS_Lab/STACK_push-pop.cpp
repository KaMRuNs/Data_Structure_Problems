#include<bits/stdc++.h>
#define max 5
using namespace std;
int stck[max];

int push(int &top, int data);
int pop(int &top, int &data);

int main()
{
    int choice,reply,data,top=-1;
    while(1)
    {

    cout<<"Enter choice: "<<endl;
    cout<<"1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    cout<<"3.Exit"<<endl;
    cin>>choice;


    switch(choice)
    {
    case 1:
        int item;
        cout<<"Enter item to push: ";
        cin>>item;
        reply=push(top, data);
        if(reply==-1)
        {
            cout<<"Overflow";
        }
        else{
            cout<<item<<"pushed successfully"<<endl;
        }
        break;
    case 2:
        reply=pop(top, data);
        if(reply==-1)
        {
            cout<<"Underflow";
        }
        else{
            cout<<"popped successfully"<<endl;
        }
        break;
    case 3:
        return 0;
    }
    }
}
int push(int &top, int data)
{
    if(top==max-1){
        return -1;
    }
    else{
        top+=1;
        stck[top]=data;
        return 1;
    }
}
int pop(int &top, int &data)
{
    if(top==-1){
        return -1;
    }
    else{
        data=stck[top];
        top-=1;
        return 1;
    }
}

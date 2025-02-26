#include<bits/stdc++.h>
#define max 5
using namespace std;

int q[max];
void QIns(int x);
void Qdel();
int f=-1,r=-1;

int main()
{
    while(1)
    {
    int choice;
    cout<<"Enter choice: ";
    cin>>choice;


        switch(choice)
    {
    case 1:
        int item;
        cout<<"Enter item to insert: ";
        cin>>item;
        QIns(item);
        break;
    case 2:
        Qdel();
        break;
    case 3:
        return 0;
    }
    }
}
void QIns(int x)
{
   if((f==r+1) || (f==0 && r==max-1))
   {
       cout<<"Overflow";
   }
   else{
        if(f==-1)
                {
                    f=r=0;
                }
   else{
    q[r]=x;
    r= (r+1)%max;
   }

   cout<<"Inserted item: "<<x<<endl;
   cout<<"front="<<f<<"rear="<<r<<endl;
   }

}
void Qdel()
{
    int item;
    if(f==-1)
    {
        cout<<"Underflow";
    }
    else{
        item = q[f];
        if(f==r)
        {
            f=r=-1;
        }
        else{
            f=(f+1)%max;

        }
        cout<<"Deleted item: "<<item<<endl;
    cout<<"front="<<f<<"rear="<<r<<endl;
    }

}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5,i,j=0;
    cout<<"enter the number :"<<endl;
    cin>>i;
    for(int x=0;x<=n;x++)
    {  
    if(i%2==0)
    {
    cout<<i<<"even number"<<endl;
    i++;
    }
    else
    {
        cout<<i<<"Is Odd Number"<<endl;
        i++;
    }
    }
    return 0;
}
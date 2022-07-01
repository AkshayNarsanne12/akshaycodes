#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5,i,j=0;
    cout<<"enter the number :"<<endl;
    cin>>i;

    do{
        if(i%2==0)
        {
            cout<<i<<"even number"<<endl;
            i++;
            j++;
        }
        else
        {
            cout<<i<<"Is Odd Number"<<endl;
            i++;
            j++;
        }
            
    }while(i>0 && j< n);

    return 0;
}
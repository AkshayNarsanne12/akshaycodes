#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c,d,i;
    cout<<"enter the values a & byou want to insert : "<<endl;
    cin>>a>>b;
    cout<<"enter your choice 1.Add /n 2. Sub /n 3. Mult /n 4.div /n"<<endl;
    cin>>i;

    switch (i)
    {
    case 1:c=a+b;
        cout<<"The sum of a + b is :"<<c<<endl;
        break;
    case 2:c=a-b;
        cout<<"The sub of a - b is :"<<c<<endl;
        break;
    case 3:c=a*b;
        cout<<"The mul of a * b is :"<<c<<endl;
        break;
    case 4:c=a/b;
        cout<<"The div of a / b is :"<<c<<endl;
        break;
    
    default:
        cout<<"enter your choice "<<endl;
        break;
    }

    return 0;
}
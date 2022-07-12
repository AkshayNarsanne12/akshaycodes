#include<iostream>
using namespace std;

int main()
{
  int a,b;
  cin>>a>>b;
  if(a>b)
  {
    cout<<"a is max number "<<a<<endl;
  }
  else if(a == b)
  {
   cout<<"a and b are equal"<<endl;
  }
  else
  {
    cout<<"b is largest "<<endl;
  }
  
  return 0;
}
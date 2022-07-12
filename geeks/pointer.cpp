#include<iostream>
using namespace std;

void update(int &a,int &b)
{
  int temp;
  temp = a;
  a = a+b;
  b = temp-b;
  if(b<0)
    b = -(b);
}
int main()
{
  int a,b;
  cin>>a>>b;
  update(a,b);
  cout<<a<<endl;
  cout<<b<<endl;
  return 0;
}
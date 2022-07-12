#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int size = sizeof(a)/sizeof(a[0]);
  for(int i=size-1;i>=0;--i)
  {
    cout<<a[i]<<" ";
  }
}
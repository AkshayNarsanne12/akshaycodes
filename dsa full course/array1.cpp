#include<bits/stdc++.h>
using namespace std;

int main()
{
  int *a;
  int size,length;
  cout<<"enter the size of array :"<<endl;
  cin>>size;

  a = new int [size];

  for(int i=0;i<size;i++)
  {
    cin>>a[i];
  }
  length = sizeof(a)/sizeof(a[0]);
  cout<<"length is :"<<length<<endl;
  f or(int i=0;i<size;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
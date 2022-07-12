#include<bits/stdc++.h>
using namespace std;

int main()
{
  string a,b,c;
  cin>>a;
  cin>>b;
  cout<<a.size()<<" ";
  cout<<b.size()<<endl;
  for(int i=0;i<a.size();i++)
  {
    a[i] = tolower(a[i]);
  }
  // transform(a.begin(),a.end(),a.begin(), ::tolower);
  // cout<<a;
  transform(b.begin(),b.end(),b.begin(), ::tolower);
  // cout<<b<<endl;
  c=a+b;
  cout<<c<<endl;
  int temp;
  temp = a[0];
  a[0] = b[0];
  b[0] = temp;
  cout<<a<<" "<<b<<endl;
  return 0;
}
#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int s;
  cin>>s;
  int k;
  int **p = new int *[n];
  for(int i=0;i<n;i++)
  {
    cin>>k;
    p[i]= new int [k];
    for(int j=0;j<k;j++)
    {
      cin>>p[i][j];
    }
    for(int j=0;j<k;j++)
    {
      cout<<p[i][j]<<" ";
    }
    cout<<endl;
  }
  int **q = new int *[s];
  for(int i=0;i<s;i++)
  {
    p[i]= new int [2];
    for(int j=0;j<2;j++)
    {
      cin>>q[i][j];
    }
    for(int j=0;j<2;j++)
    {
      cout<<q[i][j]<<" ";
    }
    cout<<"akshay"<<q[i];
    cout<<endl;
  }

  // for(int i=0;i<s;i++)
  // {
  //   for(int j=0;j<2;j++)
  //   {
  //     if(q[i][j]==p[i][j])
  //     {
  //       cout<<p[i][j];
  //     }
  //   }
  // }
  return 0;
}
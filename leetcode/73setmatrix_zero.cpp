#include<iostream>
using namespace std;

int main()
{
  int a[3][3] = {{0,2,3},
                {4,4,6},
                {7,8,9}};
  
  cout<<"program begins"<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      if(a[i][j]==0)
      {
        // cout<<"it is zero"<<endl;
        a[i+1][j]=0;
        // a[i][j-1]=0;
      }
      // a[i][j+1]=0;
        // a[i][j-1]=0;
        // a[i+1][j]=0;
    }
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
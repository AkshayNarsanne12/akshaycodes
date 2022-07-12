#include<bits/stdc++.h>
using namespace std;

int main()
{
  // int a[3][4] = {{1,2,3,4},{2,4,6,8},{1,3,5,7}};

  // int *b[3];
  int **c;
  int n;
  cin>>n;
  
  // int i,j;

  // for(int i=0;i<3;i++)
  // {
  //   for(j=0;j<4;j++)
  //   {
  //     cout<<a[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  // b[0] = new int [4];
  // b[1] = new int [4];
  // b[2] = new int [4];

  c = new int *[n];
  for(int i=0;i<n;i++)
  {
    c[i] = new int [4];
    cin>>c[i];
  }
  for(int i=0;i<n;i++)
  {
    cout<<c[i]<<endl;
  }
  // c[0] = new int [4];
  // c[1] = new int [4];
  // c[2] = new int [4];
  return 0;
}
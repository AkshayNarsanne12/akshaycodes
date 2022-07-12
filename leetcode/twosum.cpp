#include<iostream>
using namespace std;

int main()
{
  int arr[]= {2,4,3,3};
  int size = sizeof(arr)/sizeof(arr[0]);
  int target;
  cout<<"enter the target :"<<endl;
  cin>>target;

  for(int i=0;i<size;i++)
  {
    int x;
    x=target-arr[i];
    for(int j=i+1;j<size;j++)
    {
      if(x == arr[j])
        cout<<i<<","<<j<<endl;
    }
  }
  return 0;
}
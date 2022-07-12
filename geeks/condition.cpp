#include<iostream>
using namespace std;

int check_number(int n)
{
  if(n>9)
  {
    for(int i=10;i<=n;i++)
    {
      if(i%2==0)
        cout<<"even"<<endl;
      else
        cout<<"odd"<<endl;
    }
  }
  switch (n)
  {
  case 1 :
    cout<<"one"<<endl;  
  case 2 :
    cout<<"two"<<endl;  
  case 3 :
    cout<<"three"<<endl;  
  case 4 :
    cout<<"four"<<endl;  
  case 5 :
    cout<<"five"<<endl;  
  case 6 :
    cout<<"six"<<endl;  
  case 7 :
    cout<<"seven"<<endl;  
  case 8 :
    cout<<"eight"<<endl;  
  case 9 :
    cout<<"nine"<<endl;
    break;
  }
  return 0;
}
int main()
{
  int a,b;
  cin>>a;
  cin>>b;
  if(a<9 && b>9)
  {
    check_number(a);
    check_number(b);
  }
  else
    for(int i=a;i<=b;i++)
    {
      switch (i)
      {
      case 1 :
        cout<<"one"<<endl;
        break;
      
      case 2 :
        cout<<"two"<<endl;
        break;
      
      case 3 :
        cout<<"three"<<endl;
        break;
      
      case 4 :
        cout<<"four"<<endl;
        break;
      
      case 5 :
        cout<<"five"<<endl;
        break;
      
      case 6 :
        cout<<"six"<<endl;
        break;
      
      case 7 :
        cout<<"seven"<<endl;
        break;
      
      case 8 :
        cout<<"eight"<<endl;
        break;
      
      case 9 :
        cout<<"nine"<<endl;
        break;
      }
    }

  return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
int li=0,n,k;
int arr[n];
       int hi=n-1;
       int mi=(li+hi)/2;
       while(li<=hi)
       {
           if(arr[mi]==k)
           {
               return mi;
           }
           else if(arr[mi]<k)
           {
               li=mi+1;
           }
           else
           {
               hi=mi-1;
           }
           mi=(li+hi)/2;
       }
       return -1;
}
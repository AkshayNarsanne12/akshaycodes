#include<iostream>
using namespace std;

void display(int *arr,int size)
{   
    cout<<"array is : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void append(int *arr,int &size)
{   
    int a;
    cout<<"enter the number to insert :"<<endl;
    cin>>a;
    arr[size]=a;
    size++;
}
int insertx(int *arr,int index,int x,int &size)
{
    for(int i=size;i>=index;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = x;
    size++;

}
int delete(int *arr,int x,int m)
{
    int x = 0;
    for(int i=m;size-1;i++)
    {
        arr[i]
    }
}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // display(arr,size);
    append(arr,n);
    // display(arr,n);


    cout<<"enter the index to insert :"<<endl;
    int m;
    cin>>m;
    cout<<"enter the value to insert :"<<endl;
    int x;
    cin>>x;
    cout<<"enter the index to delete :"<<endl;
    int y;
    cin>>x;

    insertx(arr,m,x,n);
    delete(arr,)
    display(arr,n);
    return 0;
}
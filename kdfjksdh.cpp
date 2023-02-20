#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    int arr2[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of the array are..."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int nn,pos;
    cout<<"Enter the value u want to input..."<<endl;
    cin>>pos;
    cout<<"Enter the position in which u want to insert value...."<<endl;
    cin>>nn;

    for(int i=0; i<n; i++)
    {
        arr2[i]=arr[i];
    }

    for(int i=n+1; i>=nn-1; i--)
    {
        arr2[i]=arr2[i-1];
    }
    arr2[nn-1]=pos;
    cout<<"Inserted array = ";
    for(int i=0; i<n+1; i++)
    {
        cout<<arr2[i]<<" ";
    }
}

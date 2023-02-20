//This is Arka's code.....
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size = ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Without inserted element = ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pos;
    cout<<"Which position want to enter value = ";
    cin>>pos;

    int value;
    cout<<"Enter value u want to insert = ";
    cin>>value;

    int arr2[n+1];
    for(int i=0; i<n; i++)
    {
        arr2[i]=arr[i];
    }
    cout<<"Before inserting anything = ";
    for(int i=0; i<n; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    for(int i=n+1; i>=pos-1; i--)
    {
        arr2[i]=arr2[i-1];
    }
    arr2[pos-1]=value;

    cout<<"After inserting value at position = ";
    for(int i=0; i<n+1; i++)
    {
        cout<<arr2[i]<<" ";
    }




}

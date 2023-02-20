#include<bits/stdc++.h>
using namespace std;
int main()
{

    string a;
    cin>>a;
    int c=0;
    for(int i=0; i<a.size(); i++)
    {
        for(int j=i+1; j<a.size(); j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
    }
    int x=a.size()-c;
    if(x==1)
    {
        cout<<"Done!"<<endl;
    }
    else
        cout<<x<<endl;
}

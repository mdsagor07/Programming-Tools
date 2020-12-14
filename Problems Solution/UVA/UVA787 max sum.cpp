#include<bits/stdc++.h>

using namespace std;

int maxsum(long long arr[100],int n)
{
    int mx=0,ed=0;

    for(int i=0;i<n;i++)
    {
        ed=ed+arr[i];
        if(ed>mx)mx=ed;
        else if(ed<0)ed=0;
    }
    return mx;
}

int main()
{
    long long arr[100];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)cin>>arr[i];

    int d = maxsum(arr,n);

    cout<<d<<endl;

    return 0;
}

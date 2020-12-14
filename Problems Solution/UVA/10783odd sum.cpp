#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,m;
    int a[100];

    cin>>t;
     int count=1;
    while(t--)
    {
        cin>>n>>m;
        int sum=0;
        if(n>m)
            swap(n,m);

        for(int i=n;i<=m; i++)
        {
            if(i%2!=0)
            {
                    sum=sum+i;
            }

        }
             cout<<"case "<<count<<":"<<sum<<endl;
             count++;
        }
        return 0;

    }





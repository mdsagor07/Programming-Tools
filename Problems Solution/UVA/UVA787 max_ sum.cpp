/// Bismillahhir rahmanir rahim

#include<bits/stdc++.h>

using namespace std;
int maxsum(int arr[],int n)
{

    int i;
    long mx=-999999;

    for(int j=0;j<i;i++){
        int sum=1;
    for(int j=i;j<i;j++){

        sum=sum * arr[j];
    }
    if(mx<sum)mx=sum;
    }
    return mx;

}



int main()
{
    int arr[200],n,i=0;

    while((cin>>n) && (n!=-999999))
    {
        arr[i++]=n;
    }
    cout<<maxsum(arr,n)<<endl;
  return 0;
}

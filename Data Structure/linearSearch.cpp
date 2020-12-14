#include <iostream>
using namespace std;
int searchc(int arr[],int m,int len)
    {
        for(int i=0;i<len;i++)
            if(arr[i]==m)return i;

        return -1;

    }

int main() {
    int arr[100];

    int n,m,p;
    cin>>n;

    //  store input from user to array
    for (int i = 0; i < n; ++i) {
        cin >> p;
        arr[i]=p;
    }

    int len=sizeof(arr)/sizeof(arr[0]);
    cin>>m;

    int res=searchc(arr,m,len);
    if(res!=-1)
        {cout<<res<<endl;
    }

}

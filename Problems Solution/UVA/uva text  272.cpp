#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[1000];
    bool open = true;
    while(gets(s))
    {
        int len=strlen(s);

        for(int i=0;i<len;i++)
        {
            if(s[i]=='"')
            {
                if(open)cout<<"``";
                else cout<<"''";
               open =!open;
            }
            else cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}

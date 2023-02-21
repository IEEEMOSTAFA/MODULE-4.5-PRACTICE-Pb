/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if(i%2==0 && i!=1)
        {
            if(s[i]=='z')
            {
                s[i]='a';
            }
            else
            {
                s[i]=s[i]+1;
            }
        }
    }
    cout<<s;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0 && i!=1)
        {
            if(s[i]=='z')
            {
                s[i]='a';
            }
            else
            {
                s[i]=s[i]+1;
            }
        }
    }
    cout<<s;
    return 0;
}

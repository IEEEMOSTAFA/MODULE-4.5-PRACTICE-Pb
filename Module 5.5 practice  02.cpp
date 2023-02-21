#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
         if(a[i]==0)
        {
            a[i]=1;
        }
        else if(a[i]%2==0)
        {
            sum*=a[i];
        }

    }
    cout<<sum;
    return 0;
}


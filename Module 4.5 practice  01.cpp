/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    cout<<sum;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   int n;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++)
    cin>>a[i];
   int sum=0;
   for(int i=0;i<n;i++)
    sum+=a[i];

   cout<<sum;
    return 0;
}

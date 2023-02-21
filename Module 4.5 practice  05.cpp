

#include<bits/stdc++.h>
using namespace std;
void getUnion(int a1[],int n,int a2[],int m)
{
  set<int>s;
  for(int i=0;i<n;i++)
  s.insert(a1[i]);
  for(int i=0;i<m;i++)
  s.insert(a2[i]);
  cout<<"Number of the element after union operation"<<endl<<s.size()<<endl;
  for(auto itr=s.begin();itr!=s.end();itr++)
    cout<<*itr<<" ";


}


int main()
{
    /*
    int n,m;
    cout<<"Enter the size of ist array"<<endl;
    cin>>n;
    vector<int>a1(n);
    cout<<"Enter the element of ist array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    cout<<"Enter the size of 2nd array"<<endl;
    cin>>m;
    vector<int>a2(m);
    cout<<"Enter the element of 2nd array"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>a2[i];
    }
      getUnion(a1[],n,a2[],m);

*/




      int a1[9] ={1,2,5,6,2,3,5,7,3};
      int a2[10]={2,4,5,6,8,9,4,6,5,4};
      getUnion(a1,9,a2,10);
}




























//class name cuboid;
#include<bits/stdc++.h>
using namespace std;
class cuboid
{
public:
    int l,w,h,v,a;

};
class volume:cuboid
{
public:
    volume:
        cubiod(int len,int width,int height)
        {
            l=len;
            w=width;
            h=height;
        }
        int vl=l*w*h;
        void print()
        {
            cout<<vl;

        }
};
int main()
{
    volume:
        cuboid s(1,3,4);
        return 0;
}

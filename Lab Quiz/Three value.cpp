#include<bits/stdc++.h>
using namespace std;
template<typename T>
T FindGreatest(T a,T b,T c)
{
    if(a>=b&&a>=c)
    {
        return a;
    }
    else if(b>=a&&b>=c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int int1=8,int2=10,int3=3;
    char char1='A',  char2='B', char3='C';
    float float1=3.71, float2=2.62, float3=5.3;
    int maxint=FindGreatest(int1,int2,int3);
    cout<<"Max integer:"<<maxint<<endl;
    char maxcher=FindGreatest(char1,char2,char3);
    cout<<"Max character:"<<maxcher<<endl;
    float maxfloat=FindGreatest(float1,float2,float3);
    cout<<"Maxfloat:"<<maxfloat<<endl;
}

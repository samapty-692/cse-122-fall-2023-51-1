#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    char c[150 ];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        gets(c);
        int q= strlen(c);
        if(q>10)
            cout<<c[0]<<q-2<<c[q-1]<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}

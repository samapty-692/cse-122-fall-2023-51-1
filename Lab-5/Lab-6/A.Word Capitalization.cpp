#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char a=toupper(s[0]);
    cout<<a;
    for(int i=1;i<s.size();i++)
    {
        cout<<s[i];
    }
    return 0;
}

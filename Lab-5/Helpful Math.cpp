#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,storage="";
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
  if(s[i]!='+')
    {
        storage+=s[i];
    }
}
sort(storage.begin(),storage.end());
cout<<storage[0];
for(int i=1;i<storage.size();i++)
{
    cout<<'+'<<storage[i];
}
cout<<endl;
return 0;
}


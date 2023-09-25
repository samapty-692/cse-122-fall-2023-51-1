#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,str2;
    cin>>str;
    int x=str.length();
    for(int i=0; i<x; i++)
    {
      if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='y'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'|| str[i]=='Y')
      {
          continue;
      }
      else
        {
            str2 +='.';
            str2 +=tolower(str[i]);
        }
    }
    cout<<str2<<endl;

}

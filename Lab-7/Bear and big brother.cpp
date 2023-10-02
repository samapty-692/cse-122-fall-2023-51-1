#include<bits/stdc++.h>
using namespace std;
int main()
{
  int limak,bob;
  cin>>limak>>bob;
  int year=0;
  while(limak<=bob)
  {
      limak=limak*3;
      bob=bob*2;
      year++;
  }
  cout<<year<<endl;
  return 0;
}


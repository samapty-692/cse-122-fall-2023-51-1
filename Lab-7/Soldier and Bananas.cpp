#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int cost=k*w*(w+1)/2;
    if(n>=cost)
        cout<<"0"<<endl;
    else
        cout<<cost-n<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int i,n,k,j=0,x=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]==0)
        {
            x;
        }
        else if(arr[i]>=arr[k])
        {
            j++;
        }
    }
    cout<<j+x<<endl;
    return 0;
}

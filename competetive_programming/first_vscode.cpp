

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int flag=0;
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
               flag=1;
               break;
            }
        }
        if(flag==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}

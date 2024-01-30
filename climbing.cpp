#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter=1;
    int n,k,x;
    cin>>n>>k>>x;
        for(int j=1;j<=x;j++)
        {
            if(k+j<=n)
            {
                counter++;
                cout<<k<<" "<<j <<" "<<k+j<<endl;
            }
        }
    cout<<counter;
    return 0;
}
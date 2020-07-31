#include<bits/stdc++.h>
#define Max 10004
using namespace std;
long long nway[Max+1];
int coin[5]={50,25,10,5,1};

int main()
{
    int i,j,n,v,c;
    cin>>n;
    v = 5;
    nway[0] = 1;
    for(i=0;i<v;i++){
        c = coin[i];
        for(j=c;j<=n;j++)
            nway[j] += nway[j-c];
    }
    cout<<nway[n]<<endl;
    return 0;
}

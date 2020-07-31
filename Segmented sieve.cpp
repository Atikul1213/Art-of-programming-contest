#include<bits/stdc++.h>
#define ll long long
#define Mx 100005
using namespace std;
vector<int>prime;
bool vis[Mx];
void sieve(){
    for(int i=3;i*i<=Mx;i+=2){
        if(vis[i]==false){
            for(int j=i*i;j<=Mx;j+=i)
                vis[j] = true;
        }
    }
    prime.push_back(2);
    for(int i=3;i<=Mx;i+=2){
        if(vis[i]==false)
            prime.push_back(i);
    }
}


int Segmented_Sieve(int a,int b){
    memset(vis,0,sizeof(vis));
    if(b<2) return 0;
    if(a<2) a = 2;
    int xx = sqrt((double)b)+1;
    for(ll i=0;prime[i]<=xx;i++){
        ll j = (a/prime[i]);
        if(a%prime[i]!=0) j++;
        j *= prime[i];
        for(;j<=b;j+=prime[i])
            vis[j-a] = 1;
    }
    int cnt = 0;
    for(ll i = a;i<=b;i++)
        if(vis[i-a]==0) cnt++;
    return cnt;
}



int main()
{
    ll l,r;
    cin>>l>>r;
    sieve();
     cout<<Segmented_Sieve(l,r)<<endl;
    return 0;
}

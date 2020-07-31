#include<bits/stdc++.h>
#define ll long long
#define Size 100004
using namespace std;
bool flag[Size];
vector<int>prime;

void sieve(int n){
    for(int i=3;i*i<=n;i+=2){
        if(flag[i]==false){
            for(int j=i*i;j<=n;j+=i)
                flag[j] = true;
        }
    }
    prime.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(flag[i]==false)
            prime.push_back(i);
    }
}

ll Euler_Totient(ll n){
    ll ret = n;
    for(int i=0;prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];
                ret -=(ret/prime[i]);
            }
        }
    }
    if(n>1)
        ret -=(ret/n);
    return ret;
}

int phi[Size];
void euler_totient_precompute(){
    for(int i=0;i<Size;i++)
        phi[i] = i;
    for(int i=2;i<Size;i++){
        if(phi[i]==i){
            for(int j=i;j<Size;j+=i)
                phi[j] -= (phi[j]/i);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    sieve(n);

    cout<<Euler_Totient(n)<<endl;
    euler_totient_precompute();
    return 0;
}

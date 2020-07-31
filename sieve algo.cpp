#include<bits/stdc++.h>
#define Size 10000007
using namespace std;
bitset<Size>bs;
vector<int>prime;
void sieve(int n){
    bs.set();
    bs[0] = bs[1] = false;
    prime.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(bs[i]){
            for(int j=i*i;j<=n;j+=i)
                bs[j] = false;
            prime.push_back(i);
        }
    }
}

void sieve_algo(int l,int u){
    int i,j,d;
    d = u-l +1;
    bool *flag = new bool[d];
    for(i=0;i<d;i++)
        flag[i] = true;
    for(i=(l%2!=0);i<d;i+=2)
        flag[i] = false;
    for(i=3;i*i<=u;i+=2){
        if(i>l && !flag[i-l])
            continue;
        j = l/i*i;
        if(j<l)
            j+=i;
        if(j==i)
            j+=i;
        j-=l;
        for(;i<d;j+=i)
            flag[j] = false;
    }
    if(l<=1)
        flag[1-l]=false;
    if(l<=2)
        flag[2-l] = true;
    for(i=0;i<d;i++){
        if(flag[i])
        cout<<(l+i)<<"\t";
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
    for(int i=0;i<prime.size();i++)
        cout<<prime[i]<<'\t';
    return 0;
}

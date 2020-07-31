#include<bits/stdc++.h>
#define Size 10005
using namespace std;
bool flag[Size];
vector<int>prime;
vector<int>d;
void sieve(){
    for(int i=3;i<=Size;i+=2){
        if(flag[i]==false){
            for(int j=i*i;j<=Size;j+=i)
                flag[j] = true;
        }
    }
    prime.push_back(2);
    for(int i=3;i<=Size;i+=2){
        if(flag[i]==false)
            prime.push_back(i);
    }
}

int NOD(int n){
    int cnt,res = 1;
    for(int i=0;prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
                cnt = 1;
            while(n%prime[i]==0){
                d.push_back(prime[i]);
                cnt++;
                n/=prime[i];
            }
            res *= cnt;
        }
    }
    if(n>1){
        d.push_back(n);
        res*=2;
    }
    return res;
}

int main()
{
    int n;
    sieve();
    cin>>n;
    cout<<"NOD: "<<NOD(n)<<endl;
    for(int i=0;i<d.size();i++)
        cout<<d[i]<<'\t';
    cout<<endl;
    return 0;
}



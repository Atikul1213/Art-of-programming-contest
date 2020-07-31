#include<bits/stdc++.h>
using namespace std;

long square(long s){
    return s*s;
}

long bigMod1(long b,long p,long m){
    if(p==0)
        return 1;
    else if(p%2==0)
        return square(bigMod1(b,p/2,m))%m;
    else
        return ((b%m)*bigMod1(b,p-1,m))%m;
}

long bigMod(long b,long p,long m){
    if(p==0)
        return 1;
    int x = bigMod(b,p/2,m);
    x = (x*x)%m;
    if(p&1)
        x = (x*b)%m;
    return x;
}

int main()
{
    long b,p,m,sum;
    while(scanf("%ld%ld%ld",&b,&p,&m)==3){
        sum = bigMod(b,p,m);
        cout<<sum<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int GCD(long a,long b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}

int main()
{
    long a,b,gcd,i,n;

    while(scanf("%ld",&n)==1){
        scanf("%ld%ld",&a,&b);
        i = 2;
        while(i<n){
            gcd = GCD(a,b);
            a = gcd;
            i++;
            scanf("%ld",&b);
        }
        gcd = GCD(a,b);
        cout<<gcd<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

long Zero(long num,long factor){
    long total,deno;
    if(num==5)
        return 1;
    total = 0;
    deno = factor;
    while(deno<num){
        total += num/deno;
        deno *= factor;
    }
    return total;
}

int main()
{
    long n,c1,c2;
    while(scanf("%ld",&n)==1){
        c1 = Zero(n,2);
        c2 = Zero(n,5);
        if(c1<c2)
            cout<<c1<<endl;
        else
            cout<<c2<<endl;
    }
    return 0;
}

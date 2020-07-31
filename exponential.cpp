#include<bits/stdc++.h>
using namespace std;
int Exponential(int base,int power){
    int res = 1;
    for(int i=0;i<power;i++)
        res *= base;
    return res;
}

long Square(long n){
    return n*n;
}

long Fastexp(long base,long power){
    if(power==0)
        return 1;
    else if(power%2==0)
        return Square(Fastexp(base,power/2));
    else
        return base*(Fastexp(base,power-1));
}

int main()
{
    int b,p;
    cin>>b>>p;
    cout<<Exponential(b,p)<<endl;
    cout<<Fastexp(b,p)<<endl;
    return 0;
}

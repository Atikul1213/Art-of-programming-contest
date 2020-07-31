#include<bits/stdc++.h>
using namespace std;

long gcd(long a,long b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

void DivbyGCD(long &a,long &b){
    long g = gcd(a,b);
    a/=g;
    b/=g;
}

long nCk(int n,int k){
    long numerator=1, denominator = 1, toMul,toDiv,i;
    if(k>n/2)
        k = n - k;
    for(i=k;i;i--){
        toMul = n-k+i;
        toDiv = i;
        DivbyGCD(toMul,toDiv);
        DivbyGCD(numerator,denominator);

        DivbyGCD(toMul,denominator);
        numerator *= toMul;
        denominator *= toDiv;
    }
    return numerator/denominator;
}



int main()
{
    int n,k;
    cin>>n>>k;
    cout<<nCk(n,k)<<endl;
    return 0;
}





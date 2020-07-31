#include<bits/stdc++.h>
using namespace std;
long Conquer_Fibo(long n){
    long i,h,j,k,t;
    i=h= 1;
    j=k = 0;
    while(n>0){
        if(n%2==1){
            t = j*h;
            j = i*h + j*k + t;
            i = i*k + t;
        }
        t = h*h;
        h = 2*k*h + t;
        k = k*k + t;
        n = (long)n/2;
    }
    return j;
}
int main()
{
    long n;
    cin>>n;
    cout<<Conquer_Fibo(n)<<endl;
    return 0;
}

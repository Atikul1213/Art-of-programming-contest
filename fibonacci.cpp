#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    int f0 = 0 ,f1 = 1,fibo;
    for(int i=0;i<=n;i++){
    cout<<f0<<'\t';
        fibo = f0 + f1;
        f0 = f1;
        f1 = fibo;
    }
    return fibo;
}

int Divide_couqer_fibo(int n){
    int i,j,h,k,t;
    i = h = 1;
    j = k = 0;
    while(n>0){
        if(n%2==1){
            t = j*h;
            j = i*h + j*k + t;
            i = i*k + t;
        }
        t = h*h;
        h = 2*k*h + t;
        k = k*k + t;
        n = (int)n/2;
    }
    return j;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    cout<<endl<<endl;
    cout<<Divide_couqer_fibo(n)<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b){
    int rem;
    if(a>b){
        while(b!=0){
            rem = a%b;
            a = b;
            b = rem;
        }
        return a;
    }
    else if(a>b){
        while(a!=0){
            rem = b%a;
            b = a;
            a = rem;
        }
        return b;
    }
    else if(a==b) return a;
}


int GcD(int a,int b){
    int ans=1;
        for(int i=1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0){
           ans = i;
        }
    }
    return ans;
}

unsigned int GCd(unsigned int a,unsigned int b){
    if(b==0)
        return a;
    return GCd(b,a%b);
}


int GCD(int a,int b){
    if(b==0) return a;
    return GCD(b,a%b);
}

int lcm(int a,int b){
    return (a/GCD(a,b)*b);
}


int LCM(int a,int b){
    int ans;
    for(int i=1;;i++){
        if(i%a==0 && i%b==0)
            ans = i;
    }
    return ans;
}

bool IsPrime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

bool isPrime(int a){
    if(a==2) return true;
    else{
        for(int i=2;i<a/2+1;i++){
            if(a%i==0) return false;
        if(i==a/2) return true;
        }
    }
}

vector<int>primefactor(int a){
    vector<int>primefactor;
    for(int i=1;i<=a;i++){
        if(a%i==0&&isPrime(i)){
            primefactor.push_back(i);
            a=a/i;
            i = 1;
        }
    }
    return primefactor;
}

int gCD(int a,int b){
    while(b>0){
        a = a % b;
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return a;
}

int main()
{
    int n;
    cin>>n;
    cout<<isPrime(n)<<endl;
    cout<<IsPrime(n)<<endl;
    return 0;
}


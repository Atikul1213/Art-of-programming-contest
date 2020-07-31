#include<bits/stdc++.h>
using namespace std;
int GCD1(int a,int b){
    return __gcd(a,b);
}
int GCD2(int a,int b){
    if(b==0)
        return a;
    return GCD2(b,a%b);
}
int GCD3(int a,int b){
    int ans;
    for(int i=1;i<min(a,b);i++){
        if(a%i==0 && b%i==0)
            ans = i;
    }
    return ans;
}
int GCD4(int a,int b){
    int r = 1;
    if(a>b){
        while(r!=0){
            r = a % b;
            a = b;
            b = r;
        }
        return a;
    }
    else if(b>a){
        while(r!=0){
            r = b % a;
            b = a;
            a = r;
        }
        return b;
    }
    else if(a==b)
        return a;
}

int LCM1(int a,int b){
    return a*b/GCD1(a,b);
}

int LCM2(int a,int b){
    int ans;
    for(int i=1;;i++){
        if(i%a==0 && i%b==0){
            ans = i;
            break;
        }
    }
    return ans;

}

bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
vector<int>primefactor(int a){
    vector<int>primefact;
    for(int i=1;i<=a;i++){
        if(a%i==0 && isPrime(i)){
            primefact.push_back(i);
            a = a / i;
            i = 1;
        }
    }
}
int main()
{
    int a = 5, b = 2500;
    vector<int>p = primefactor(b);
    for(int i=0;i<p.size();i++)
        cout<<p[i]<<'\t';
    return 0;
}

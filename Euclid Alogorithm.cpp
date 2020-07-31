#include<bits/stdc++.h>
#define lu unsigned long
using namespace std;
unsigned long d,x,y;

void Extended_Euclid(unsigned long a,unsigned long b){
    unsigned long x1;
    if(b>a){
        x1 = a;
        a = b;
        b = x1;
    }
    if(b==0){
        d = a;
        x = 1;
        y = 0;
        return;
    }
    Extended_Euclid(b,a%b);
    d = d;
    x1 = x - (a/b)*y;
    x = y;
    y = x1;
}
int main()
{
    unsigned long a,b;
    while(scanf("%lu %lu",&a,&b)==2){
        Extended_Euclid(a,b);
        cout<<d<<'\t'<<x<<'\t'<<y<<endl;
    }
    return 0;
}

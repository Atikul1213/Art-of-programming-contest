#include<bits/stdc++.h>
using namespace std;
double nCr(int n,int m){
    int k;
    register int i,j;
    double c,d;
    c = d = 1;
    k = (m>(n-m))?m:(n-m);
    for(j=1,i=k+1;(i<=n);i++,j++){
        c*=i;
        d*=j;
        if(!fmod(c,d)&&(d!=1)){
            c/=d;
            d = 1;
        }
    }
    return c;
}
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF){
        cout<<nCr(n,m)<<endl;
    }
    return 0;
}

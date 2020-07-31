#include<bits/stdc++.h>
#define N 10004
using namespace std;

char f[N];
char fact[N][N];
void multiply(int k){
    int Cin,sum,i;
    int len = strlen(f);
    Cin = 0;
    i = 0;
    while(i<len){
        sum = Cin + (f[i]-'0')*k;
        f[i] = (sum%10) + '0';
        i++;
        Cin = sum / 10;
    }
    while(Cin>0){
        f[i++] = (Cin%10) + '0';
        Cin /= 10;
    }
    f[i] = '\0';
    for(int j=0;j<i;j++)
        fact[k][j] = f[j];
    fact[k][i] = '\0';
}

void fac(){
    int k;
    strcpy(f,"1");
    for(k=2;k<=1000;k++)
        multiply(k);
}

void print(int n){
    int i;
    int len = strlen(fact[n]);
    cout<<n<<"!"<<endl;
    for(i=len-1;i>=0;i--){
        cout<<fact[n][i];
    }
    cout<<endl;
}

int main()
{
    int n;
    fact[0][0] = '1';
    fact[1][0] = '1';
    fac();
    while(scanf("%d",&n)==1){
        print(n);
    }
    return 0;
}

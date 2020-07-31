#include<bits/stdc++.h>
#define Max 50
using namespace std;

unsigned long int pas[Max][Max];
void Pascals(int n){
    register int i,j;
    pas[0][0] = 1;
    pas[1][0] = pas[1][1] = 1;
    for(i=2;i<=n;i++){
        pas[i][0] = 1;
        for(j=1;j<i;j++){
            pas[i][j] = pas[i-1][j-1] + pas[i-1][j];
        }
        pas[i][j] = 1;
    }
}

int main()
{
    Pascals(10);
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF){
        cout<<pas[n][m]<<endl;
    }
    return 0;
}

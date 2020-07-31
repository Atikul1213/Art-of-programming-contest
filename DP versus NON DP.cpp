#include<bits/stdc++.h>
#define Max 20
using namespace std;
int memo[Max];

int Non_DP(int n){
    if(n==1 || n==2)
        return 1;
    return Non_DP(n-1)+Non_DP(n-2);
}


int DP_Top_Down(int n){
    if(n==1 || n==2)
        return 1;
    if(memo[n]!=0)
        return memo[n];
    memo[n] = DP_Top_Down(n-1) + DP_Top_Down(n-2);
    return memo[n];
}

int DP_Bottom_Up(int n){
    memo[1] = memo[2] = 1;
    for(int i=3;i<=n;i++)
        memo[i] = memo[i-1] + memo[i-2];
    return memo[n];
}


int main()
{
    for(int i=1;i<=Max;i++)
        cout<<Non_DP(i)<<"-";
    cout<<endl<<endl;

    for(int i=1;i<=Max;i++)
        cout<<DP_Top_Down(i)<<"-";
    cout<<endl<<endl;

    for(int i=1;i<=Max;i++)
        cout<<DP_Bottom_Up(i)<<"-";
    cout<<endl;
    return 0;
}

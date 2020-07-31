#include<bits/stdc++.h>
#define INF 10000000010
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<ll> vii;

int main()
{
    int memo[100];
    memset(memo,0,sizeof(memo));
    memset(memo,-1,sizeof(memo));
    memset(memo,128,sizeof(memo));
    memset(memo,127,sizeof(memo));
    int ans = min(a,b);
    ans = a<0 ? -a : a;

    return 0;
}

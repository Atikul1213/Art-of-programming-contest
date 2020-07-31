#include<bits/stdc++.h>
using namespace std;
int Traing_zero(int n){
    int cnt=0,temp = 5;
    while(temp<=n){
        cnt += (n/temp);
        temp*=5;
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    cout<<Traing_zero(n)<<endl;
    return 0;
}

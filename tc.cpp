#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,a,sum;
    while(scanf("%d",&k)!=EOF){
            sum = 0;
        while(k--){
            cin>>a;
            sum+=a;
        }
        cout<<"Sum = "<<sum<<endl;
    }
    return 0;
}

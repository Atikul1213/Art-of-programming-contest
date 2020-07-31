#include<bits/stdc++.h>
using namespace std;
int *bin;
int Int_bin(unsigned int a){
    int one = 0;
    unsigned int c = 1;
    int i;
    for(i=31;i>=0;i--){
        one = one + (a&c);
        bin[i] = (a&c)?1:0;
        c<<=1;
    }
    return one;
}

int main()
{
    unsigned int n,bin;
    cin>>n;
    cout<<Int_bin(n)<<endl;
    return 0;
}

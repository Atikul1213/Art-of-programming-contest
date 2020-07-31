#include<bits/stdc++.h>
using namespace std;

double Count_digit(long a){
    double sum;
    long i;
    if(a==0)
        return 1;
    else{
        sum = 0;
        for(i=1;i<=a;i++){
            sum += log10(i);
        }
        return floor(sum)+1;
    }
}

int main()
{
    long n;
    while(scanf("%ld",&n)==1){
        cout<<Count_digit(n)<<endl;
    }
    return 0;
}

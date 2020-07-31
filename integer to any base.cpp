#include<bits/stdc++.h>
#define Maxdigit 200
using namespace std;

template<class T>

void swap(T &x, T &y){
    T temp = x;
    x = y;
    y = temp;
}

void RevStr(char *str){
    int i = 0, len = strlen(str);
    while(i<len){
        swap(str[i++],str[--len]);
    }
}

char *itob(long int n,int b=10){
    char num[Maxdigit];
    int j,sign;
    register int i = 0;
    if( (sign=n)<0 )
        n = -n;
    do{
        j = n % b;
        num[i++] = (j<10) ? (j+'0') : ('A'+j-10);
    }while((n/=b)!=0);
    if(sign<0)
        num[i++] = '-';
    num[i] = '\0';
    RevStr(num);
    return num;
}

int main()
{
    cout<<itob([71,36)<<endl;
    return 0;
}

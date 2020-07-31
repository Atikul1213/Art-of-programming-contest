#include<bits/stdc++.h>
#define Max 30
using namespace std;
double Test(char *str){
    int de[Max]={0};
    int ss[300] = {0};
    int len = strlen(str);
    int i,j = 0;
    double c = 1, d=1;
    for(i=0;i<len;i++){
        ss[str[i]]++;
        if(ss[str[i]]>1)
            de[j++] = ss[str[i]];
        c = 1;
        for(i=2;i<=len;i++){
            c *= i;
            if(j>0)
                d *= de[--j];
            if( (d!=1) && !(fmod(c,d)) ){
                c /= d;
                d = 1;
            }
        }
    }
        return c;
}
int main()
{
    char word[Max];
    int n;
    int j = 0;
    cin>>n;
    for(;n>0;n--){
        cin>>word;
        cout<<"Data set "<<++j<<" : "<<Test(word)<<endl;
    }
    return 0;
}

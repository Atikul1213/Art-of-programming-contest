#include<bits/stdc++.h>
#define Max 150
using namespace std;
int Queue[Max];
int e,f,r;
void push(int i){
    r++;
    e++;
    if(r>=Max)
        r = 1;
    Queue[r] = i;
}

int pop(void){
    e--;
    int i = Queue[f];
    f++;
    if(f>=Max)
        f = 1;
    return i;
}

int Joshups(int n,int v){
    register int i;
    e = n;
    for(i=1;i<=n;i++)
        Queue[i] = i;
    f = 1;
    r = n;
    i = 0;
    if(n>1)
        pop();
    while(e!=1){
        if(i!=v){
            i++;
            push(pop());
        }
        else{
            pop();
            i = 0;
        }
    }
    return Queue[f];
}

int main()
{
    int i,m;
    cin>>i;
    while(i){
        m = 1;
        while(Joshups(i,m++)!=13);
        cout<<m<<endl;
        cin>>i;
    }
    return 0;
}

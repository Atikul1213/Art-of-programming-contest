#include<bits/stdc++.h>
using namespace std;

typedef struct{
    int day,month,year;
    char *name;
}birthday;

int compare_function(const void *a,const void *b){

    birthday *x = (birthday*) a;
    birthday *y = (birthday*) b;
    if(x->month != y->month)
        return x->month - y->month;
    else{
        if(x->day != y->day)
            return x->day - y->day;
        else
            return x->year - y->year;
    }
}

int main()
{

    return 0;
}

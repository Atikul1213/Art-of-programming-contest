#include<bits/stdc++.h>
using namespace std;

int Binary_search(int arr[],int n,int value){
    int low = 0, high = n, mid;
    while(low<=high){
            mid = (low + high)/2;
        if(arr[mid]==value){
            return mid+1;
            break;
        }
        else if(arr[mid] > value)
            high = mid -1;
        else
            low = mid + 1;
    }
    return -1;
}

int Binary_Search(int arr[],int low,int high,int value){
    int mid = (low + high)/2;
    if(arr[mid]==value)
        return mid + 1;
    if(high < low)
        return -1;
    else if(arr[mid] < value)
        Binary_Search(arr,mid+1,high,value);
    else
        Binary_Search(arr,low,mid-1,value);
}
int main()
{
    int arr[]={1,4,6,7,10,19,22,23,30,35,39,46,49,50};
    int n = 13,value;
    cout<<"Enter the number for search: ";
    cin>>value;
    cout<<Binary_Search(arr,0,n,value)<<endl;
    return 0;
}

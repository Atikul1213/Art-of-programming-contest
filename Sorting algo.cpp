#include<bits/stdc++.h>
using namespace std;

void Bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void Selection_sort(int arr[],int n){
    int index_min,i;
    for(i=0;i<n;i++){
        index_min = i;
        for(int j=i+1;j<n-1;j++){
            if(arr[index_min]>arr[j])
                index_min = j;
        }
        if(index_min!=i){
            int temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
}

void Insertion_sort(int arr[],int n){
    int temp,j;
    for(int i=1;i<n;i++){
        j = i;
        while(j>0 && arr[j] < arr[j-1]){
            temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main()
{
    int arr[5]={5,2,3,1,4},n = 5;
    Insertion_sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<'\t';
    cout<<endl;
    return 0;
}

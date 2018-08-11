#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int s){
    int temp, pos;
    for(int i=0; i<s-1 ;i++){
            pos = i;
        for(int j=i; j<s; j++){
            if(a[j]< a[pos]){
                pos = j;
            }
        }
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }
}

int main(){
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    int arr[n];
    for(int  i=0; i< n; i++){
        cin>>arr[i];
    }
    selection_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

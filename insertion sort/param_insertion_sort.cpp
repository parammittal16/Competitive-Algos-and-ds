#include<iostream>
using namespace std;

void insertion_sort(int a[], int s){
    int temp;
    for(int i=1; i<s; i++){
        for(int j=i-1; j>=0; j--){
            if(a[j+1]<a[j]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
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
    insertion_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

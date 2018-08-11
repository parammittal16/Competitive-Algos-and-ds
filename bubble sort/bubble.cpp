#include<iostream>
using namespace std;

void bubble_sort(int a[], int s){
    int temp;
    for(int i=s-1; i>=0; i--){
        for(int j=0;j<=i; j++){
            if(a[j]>a[j+1]){
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
    bubble_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

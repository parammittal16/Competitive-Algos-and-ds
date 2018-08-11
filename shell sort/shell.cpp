#include<iostream>
using namespace std;

void shell_sort(int a[], int s){
    for (int gap = s/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < s; i += 1)
        {
            int temp = a[i];
            int j;
            for (j = i; j >= gap && a[j - gap] > temp; j -= gap)
                a[j] = a[j - gap];
            a[j] = temp;
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
    shell_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

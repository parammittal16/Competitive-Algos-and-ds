#include<bits/stdc++.h>
using namespace std;

int bsearch(int a[], int s, int e){
   int first = 0, last = s-1, mid = s/2;
   while(first <= last ){
        cout<<mid<<endl;
        if(e > a[mid]){
            first = mid+1;
            mid = (first + last) / 2;
        }
        else if (e < a[mid]) {
            last = mid-1;
            mid = (first + last) / 2;
        }
        else {
            return 1;
        }
   }
   return -1;
}

int main(){
    int n, ele;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>ele;
    if(bsearch(arr, n, ele) == 1){
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;

}
//  O(1) in case of iterative implementation. In case of recursive implementation, O(Logn) recursion call stack space.

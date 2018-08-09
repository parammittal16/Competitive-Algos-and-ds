
#include<bits/stdc++.h>
using namespace std;

int linear_search(int a[], int s, int e){
    for(int i=0; i<s; i++){
        if(a[i] == e){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n , ele;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>ele;
    cout<<"Output: "<<linear_search(arr, n, ele);
	return 0;
}

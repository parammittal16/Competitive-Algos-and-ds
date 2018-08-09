#include<bits/stdc++.h>
using namespace std;

int fandbsearch(int a[], int s, int e){
    int front = 0, back = s-1;
    while(front<= back){
        if(a[front] == e || a[back] == e)
            return true;
        front++;
        back--;
    }
    return false;
}

int main(){
    int n, ele;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>ele;
    if(fandbsearch(arr, n, ele)){
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;
}

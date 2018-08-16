#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i, temp = 0, big=0, big_pos=0;
        cin>>n;
        int a[n];
        char c[n-1];
        for(i=0; i<n; i++){
            cin>>a[i];
            if(i<n-1){
                cin>>c[i];
            }
        }
        for(i=0;i<n; i++){
            if(a[i]>big_pos){
                big = a[i];
                big_pos = i;
            }
        }
        big_pos --;
        if(c[big_pos] == '-' && c[big_pos-1] == '-'){
            temp = temp + a[big_pos];
        }
        else if(c[big_pos] == '-' && c[big_pos-1] != '-'){
            temp = temp - a[big_pos];
        }
        cout<<temp<<"\n";
    }
    return 0;
}
//  O(1) in case of iterative implementation. In case of recursive implementation, O(Logn) recursion call stack space.



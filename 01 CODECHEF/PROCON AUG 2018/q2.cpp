#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        long long int a[n];
        double temp;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);
        for(i=n-1; i>=0 ; i--){
            if(i == n-1){
                temp = (a[i] + a[i-1])/2;
                i--;
            }
            else{
                temp = (temp + a[i])/2;
            }
        }
        cout << fixed << setprecision(6);
        cout<<temp<<"\n";
    }
    return 0;
}
//  O(1) in case of iterative implementation. In case of recursive implementation, O(Logn) recursion call stack space.



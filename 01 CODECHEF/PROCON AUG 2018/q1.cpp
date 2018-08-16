#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int i, n, k, c=0, ch=0, big = -1, prei = 0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            c += a[i];
            ch++;
            if(ch == k){
                if(c > big){
                    big = c;
                }
                i = prei;
                prei++;
                c = 0;
                ch = 0;
            }
        }
        cout<<big<<endl;
    }
    return 0;
}
//  O(1) in case of iterative implementation. In case of recursive implementation, O(Logn) recursion call stack space.


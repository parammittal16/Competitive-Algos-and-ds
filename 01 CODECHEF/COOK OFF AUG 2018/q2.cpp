#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int turn = 7;
       long long int i,n,k,sum = 0;
       cin>>n>>k;
       int a[n];
       for(i=0;i<n;i++){
           cin>>a[i];
           if(turn > 0){
               if(sum >= 0){
                sum = sum + a[i];
               }
               else if(sum < 0){
                sum = sum - a[i];
               }
           }
           else{
                if(sum <= 0){
                sum = sum + a[i];
               }
               else if(sum > 0){
                sum = sum - a[i];
               }
           }
        turn = turn * -1;
       }
       if(sum < 0){
        sum *= -1;
       }
       if(sum >= k){
        cout<<1<<endl;
       }
       else{
        cout<<2<<endl;
       }
    }
    return 0;
}

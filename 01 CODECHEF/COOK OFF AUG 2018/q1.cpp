#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,i,x;
        cin>>n;
        int count = 0;
        for(i=n+1; ;i++){
            count = 0;
            x = i;
            while(x){
                if(x%10 == 3){
                    count ++;
                }
            x = x/10;
            }
            if(count >= 3){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}

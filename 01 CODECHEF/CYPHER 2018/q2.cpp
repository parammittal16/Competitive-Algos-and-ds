#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,nn = 0,sm,pos,posl,posr, sml =0,smr =0, sum=0, sumsm=0;
    cin>>n;
    int a[n];
    sm = a[0];
    for(i=0; i<n;i++){
        cin>>a[i];
        if(a[i]<0){
            nn++;
        }
        if(a[i]<sm){
            sm = a[i];
            pos = i;
        }
    }
    if(nn == 1 || nn == 0){
        cout<<sm;
    }
    else{
        for(i=0;i<pos;i++){
            if(a[i]<0){
                posl = i;

                break;
            }
        }
        for(i=pos; i<n; i++){
            if(a[i]<0){
                posr = i;
            }
        }
        cout<<posl<<" .";
        cout<<posr<<" .";
        sumsm = a[posl];
        for(i=posl;i<=posr;i++){
                sum = 0;
            for(int j=i; j<=posr; j++){
                sum += a[j];
                if(sum < sumsm){
                sumsm = sum;
            }
            }
            cout<<"ans = "<<sumsm<<endl;
        }
        cout<<sumsm<<endl;
    }
    return 0;
}

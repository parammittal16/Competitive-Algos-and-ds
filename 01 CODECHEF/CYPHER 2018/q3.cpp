#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j=0,flag,h=0,low=2;
    long long int n,sum,pro;
    long long int prosm = 100000000;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>h){
            h = a[i];
        }
    }
    int pa[h];
    while (low < h)
    {
        flag = 0;
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 ){
            pa[j] = low;
            j++;
        }
        ++low;
    }
    for(int u =0; u<n; u++){
            prosm = 100000000;
            for(i =0 ; i<j;i++){
                for(int k=i+1;k<j;k++){
                        sum = pa[i] + pa[k];
                        if(sum == a[u]){
                            pro = pa[k] * pa[i];
                            cout<<"1. "<<pa[i]<<"2. "<<pa[k]<<endl;
                            if(pro <= prosm){
                                prosm = pro;
                            }
                        }
                    }
                }
    cout<<prosm<<" ";
    }
    return 0;
}

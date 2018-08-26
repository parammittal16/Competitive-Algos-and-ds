#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s,sl,sr;
        s.clear();
        sl.clear();
        sr.clear();
        getline(cin, s);
        for(int i=0;i<s.length(); i++){
            if(isupper(s[i])){
                sl+=s[i];
            }
            else{
                sr+=s[i];
            }
        }
        s = sl + sr;
        cout<<s<<endl;
    }
    return 0;
}

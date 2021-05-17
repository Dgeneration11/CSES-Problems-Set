#include<bits/stdc++.h>
using namespace std;

int main(){

    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    string s;
    cin>>s;
    long count=1, ans=0;

    for(unsigned int i=1; i<=s.size(); i++){
        if(!(s[i]^s[i-1])){
            ++count;
        }
        else{
            if(ans < count){
                ans = count;
            }
            count = 1;
        }
    }
    if(count>ans){
        ans = count;
    }
    cout<<ans<<endl;
}
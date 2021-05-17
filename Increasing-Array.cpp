#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    long long int a,b;
    cin>>n>>a;
    
    long long moves = 0;
    while(--n){
        cin>>b;
        if(a>b){
            moves = moves + a-b;
        }
        else{
            a = b;
        }
    }
    cout<<moves;

}
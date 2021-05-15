#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int n;
    cin>>n;
    int a[n];
    ll int sum = 0;
    for(int i=1; i<n; i++){
        cin>>a[i];

        sum = sum + a[i];
    }

    cout<<((n*(n+1)/2) - sum);
}
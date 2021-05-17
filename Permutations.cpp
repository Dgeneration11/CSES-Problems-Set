#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{

    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    long long n;
    cin>>n;

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    else if(n>1 && n<=3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    else{
		long long i, j;
		if (n % 2 == 0){
			for ( i = 2; i <= n; i = i + 2){
				cout << i << " ";
			}
			for (j = 1; j <= n - 1; j = j + 2){
				cout << j << " ";
			}
		}
		else {
			for (i = n-1; i>0; i = i - 2){
				cout << i << " ";
			}
			for (j = n; j >0; j = j - 2){
				cout << j << " ";
			}
		}
	}

    return 0;
}


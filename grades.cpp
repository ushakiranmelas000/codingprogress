#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
typedef long long int ll;

void round(int x){
    if(x<38){
        cout<<x<<endl;
    }else{
        int diff = 5 - (x%5);
        if(diff<3){
            x+=diff;
        }
        cout<<x<<endl;
    }
}

int main(){
    fast;
    int n, i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
	    cin>>arr[i];
	    round(arr[i]); 
    }          
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, s1=0, s2=0, absDiff=0, num;
    cin>>n;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin>>num;
            if(i==j){
                s1+=num;
            }
            if(i+j==(n-1)){
                s2+=num;
            }
        }
    }
    absDiff = abs(s1-s2);
    cout<<absDiff;
    return 0;
}

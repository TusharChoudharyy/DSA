#include<bits/stdc++.h>
using namespace std;

int main(){
    int p, n, sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p;
        sum = sum + p;
    }
    cout<<sum;
}

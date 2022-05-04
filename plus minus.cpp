#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    float pos=0, neg=0, zer=0;
    for(int i=0; i<n; i++){
        int value;
        cin>>value;
        pos = pos + (value>0);
        neg = neg + (value<0);
        zer = zer + (value==0);
    }
    pos = pos/(double)n;
    neg = neg/(double)n;
    zer = zer/(double)n;
    
    printf("%lf\n%lf\n%lf\n",pos,neg,zer);
}

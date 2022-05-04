#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a[5],max,min,sum;
    for(int i=0; i<5; i++){
        scanf("%lld",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
        sum = sum + a[i];
    }
    min =a[0];
    for(int i=0;i<5;i++){
        if(a[i]<min)
            min=a[i];
        }
    printf("%lld %lld",sum-max,sum-min);
}

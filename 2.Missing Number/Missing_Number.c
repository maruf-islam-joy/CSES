#include<stdio.h>
#include<string.h>
int main(){
    long long int a,c,sum_curr=0,sumReal=0;
    scanf("%lld",&a);
    for(long long int i =1;i<a;i++){
        scanf("%lld",&c);
        sum_curr+=c;
    }
    sumReal = a*(a+1)/2;
    printf("%lld",sumReal-sum_curr);
    return 0;
}
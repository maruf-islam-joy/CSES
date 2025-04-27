#include<stdio.h>
#include<string.h>
int main(){
    int a;
    scanf("%d",&a);
    long long int sum = a;
    printf("%lld ",sum);
    while(sum!=1){
        sum = (sum%2==0)?sum/2:sum*3+1;
        printf("%lld ",sum);
    }
    return 0;
}
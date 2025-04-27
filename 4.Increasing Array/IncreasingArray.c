#include<stdio.h>
#include<string.h>
int main(){
    long long int n,curr,previous,prestep=0,finalstep=0;
    scanf("%lld",&n);
    scanf("%lld",&previous);
    for(int i=1;i<n;i++){
        scanf("%lld",&curr);
        if(previous>curr){
            prestep=(previous-curr);
            previous=curr+prestep;
            finalstep+=prestep;
        }
        else previous=curr;
    }
    printf("%lld",finalstep);
    
    return 0;
}
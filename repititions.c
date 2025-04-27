#include<stdio.h>
#include<string.h>
int main(){
    char s[1000001];
    scanf("%s",s);
    int len =strlen(s);
    int newMx=1,max=1;
    for(int i=0;i<len-1;i++){
        if(s[i]==s[i+1]){
            newMx++;
            max=(max>newMx)?max:newMx;
        }else if(newMx>1){
            newMx=1;
        }

    }
    printf("%d",max);
    return 0;
}
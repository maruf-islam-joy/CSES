#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1)printf("1");
    else if(n==4)printf("2 4 1 3");
    else if(n>=2&&n<=3)printf("NO SOLUTION");
    else {
        int c =0,d=n,e=n,f=1;
        while(1){
            if(d>1){
                d=d-c;
                if(d!=0)printf("%d ",d);
                c=2;
            }
            else if(e>2){
                e = e-f;
                if(e!=0)printf("%d ",e);
                f=2;
                
            }
            else break;

        }
    }
    
    return 0;
}
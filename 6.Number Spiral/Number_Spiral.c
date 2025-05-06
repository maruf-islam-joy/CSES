#include<stdio.h>
#include<string.h>
int main(){
    long long int n,y,x,diagonalY=0,diagonalX=0;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&y,&x);//taking row and column index as input
        diagonalY = (y*y)-(y-1);// computing diagonal of row-th index as we may use it later
        diagonalX =(x*x)-(x-1);//computing diagonal of column-th index
        if(y==x){//when row and column index are equal
            printf("%lld\n",diagonalY);//in this case we can print any diagonal as they are same
        }
        else if(y>x){
            //when row is greater than column
            //when it is the case, we also have to check the even or odd
            if(y%2==0){
                //when row is even
                printf("%lld\n",diagonalY+(y-x));//remember always use the large number's diagonal
            }
            else{
                //when row is odd
                printf("%lld\n",diagonalY-(y-x));
            }
        }
        else{
            //when column is greater than row
            if(x%2==0){
                //when x is even
                printf("%lld\n",diagonalX-(x-y));//here x is greater thats why we used diagonalX
            }
            else{
                //when x(column) is odd
                printf("%lld\n",diagonalX+(x-y));
            }
        }
        

    }
    return 0;
}
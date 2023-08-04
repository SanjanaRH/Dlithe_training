#include<stdio.h>
#include<stdlib.h>
int main()
{
   int r,c,row,sum,inp,psum=0,i,j;
   scanf("%d %d",&r,&c);
   for(i=0;i<r;i++){
    sum=0;
    for(j=0;j<c;j++){
        scanf("%d",&inp);
        sum=sum+inp;
    }
    if(psum<sum){
        row=i;
        psum=sum;
    }
   }
   printf("row=%d",row+1);
   return 0;
}

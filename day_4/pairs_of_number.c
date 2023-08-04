#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[20],i,n,k,j;
   printf("n=");
   scanf("%d",&n);
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   printf("\nvalue of k=");
   scanf("%d",&k);
   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
            if((k-a[i])==a[j]){
                printf("(%d,%d)\t",a[i],a[j]);
            }
    }
   }
}

#include<stdio.h>
main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=0;
        }
        else{
                flag=1;

        }
    }
    if(flag){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}

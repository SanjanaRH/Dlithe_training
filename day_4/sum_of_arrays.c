#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int con(int arr[], int size) {
    int result = 0;

    for (int i = 0; i < size; i++) {
        result = result * 10 + arr[i];
    }

    return result;
}
int cou(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int a[20],b[20],n1,n2,i,w,y,z,len,d;
    scanf("%d", &n1);
    scanf("%d", &n2);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
    w=con(a,n1);
    y=con(b,n2);
    z=w+y;
    printf(" sum is %d",z);
    len=cou(z);
    printf("\nlength of number is %d",len);
    return 0;
}

#include<stdio.h>
#include <stdlib.h>
int main(){
    int *a;
    int l;
    scanf("%d",&l);
    a = (int *)malloc(sizeof(int)*l);
    for(int i=0;i<l;i++){
        scanf("%d",(a+i));
    }

    for(int i=0;i<l;i++){
        printf("%d\n",*(a+i));
    }
}
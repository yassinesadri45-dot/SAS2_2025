#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int i;

    printf("entre le nombre les element table: ");
    scanf("%d",&a);
    int t[a];
    for(i=0;i<a;i++){
        printf("entre les elemen table:  ",i);
        scanf("%d",&t[i]);
    }
    int min = t[0];
    for(i=1;i<a;i++){
        if(min>t[i])
           min=t[i];
}
printf("le min de tableesy:%d",min);
    return 0;
}

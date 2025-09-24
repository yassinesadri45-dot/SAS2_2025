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
    int max = t[0];
    for(i=1;i<a;i++){
        if(max<t[i])
           max=t[i];
}
printf("le max de tableesy:%d",max);
    return 0;
}

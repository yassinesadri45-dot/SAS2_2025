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
    int s=0;
    for(i=0;i<a;i++){
            s+=t[i];
    }

    printf("la som les elemen de table est :%d",s);

    return 0;
}

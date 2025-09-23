#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;
    int c,d,f,g;
    printf("entre valeure a: ");
    scanf("%d",&a);
    printf("entre valeure b:  ");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    f=a*b;
    g=a/b;
    printf("la somme c:%d\n",c);
    printf("la soustraction d:%d\n ",d);
    printf("la multuplications f:%d   \n",f);
    printf("la devision g: %d \n",g);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    int c;
    printf("entre le temperature c:  ");
    scanf("%f",&c);
    if(c<0)
        printf("etat de eau a solide");
    else if(c>=0 ||c<=100)
        printf("etat est liquide");
    else
        printf("etat est gaz");
    00
    return 0;
}

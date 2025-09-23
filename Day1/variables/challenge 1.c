#include <stdio.h>
#include <stdlib.h>

int main(){


  char nom[50];
  char prenom[50];
  int age;
  char sex[50];
  char email[70];
  printf("entre votre nom :  ");
  scanf("%s",&nom);
  printf("entre votr prenom:    ");
  scanf("%s",&prenom);
  printf("entre votr age :   ");
  scanf ("%d",&age);
  printf("entre votr sex;    ");
  scanf("%s",&sex);
  printf("entre votre email:  ");
  scanf("%s",&email);
  printf("nom  :",nom);
  printf("prenom     :",prenom);
  printf("age     :",age);
  printf("sex    :",sex);
  printf("email     : ",email);


return 0;
}

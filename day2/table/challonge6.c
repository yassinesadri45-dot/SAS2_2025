#include <stdio.h>

int main() {
    int n, i, facteur;

    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    int tableau[n];
    printf("Entrez les elements du tableau:\n");
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &tableau[i]);
    }
    printf("Entrez le facteur de multiplication: ");
    scanf("%d", &facteur);

    for(i = 0; i < n; i++) {
        tableau[i] = tableau[i] * facteur;
    }

    printf("Tableau apres multiplication:\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}

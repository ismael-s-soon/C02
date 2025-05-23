#include <stdio.h> // Inclusion de la bibliothèque standard 

int main() {
    int a = 0, b = 0; // Déclaration et initialisation de deux variables entières à 0
    int resultat = 0; // Déclaration et initialisation de la variable resultat à 0

    scanf("%d %d", &a, &b); // Lire les deux entiers saisis et stock dans a et b

    resultat = a + b; // Calcul de la somme de a + b et stock dans resultat

    printf("La somme est : %d\n", resultat); // Affichage du résultat
  
    return 0; // Fin du programme avec retour 0 
}

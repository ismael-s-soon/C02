#include <stdio.h> // Inclusion de la bibliothèque standard 

int main() {
    int nombre = 0; // Déclaration et initialisation de la variable "nombre" à 0

    scanf("%d", &nombre); // Lecture d'un entier saisi et stocker dans "nombre"

    // Vérification si le nombre est pair
    if ( nombre % 2 == 0 ) {
        printf ("%d est pair.\n", nombre); // Affichage si le nombre est pair
    } else {
        printf ("%d est impair.\n", nombre); // Affichage si le nombre est impair
    }

    return 0; // Fin du programme
}

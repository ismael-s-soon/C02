#include <stdio.h> // Inclusion de la bibliothèque standard 

int main() {
    int nombre = 0; // Déclaration et initialisation de la variable "nombre" à 0
    int i = 1;       // Déclaration et initialisation du compteur "i" à 1

    scanf("%d", &nombre); // Lecture d'un entier saisi et stocker dans "nombre"

    // Vérifie si le nombre est négatif
    if (nombre < 0) {
        printf("Erreur.\n"); // Affiche un message d'erreur si le nombre est négatif
    } else {
        int fact = 1; // Déclaration et initialisation de la variable "fact" à 1

        // Boucle pour calculer le factoriel de "nombre"
        while (i <= nombre) {
            fact *= i; // Multiplie "fact" par "i"
            i++;       // Incrémente "i"
        }

        // Affiche le résultat du factoriel
        printf("Le factoriel de %d est : %d\n", nombre, fact);
    }

    return 0; // Fin du programme
}

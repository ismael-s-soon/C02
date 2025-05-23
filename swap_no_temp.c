#include <stdio.h> // Inclusion de la bibliothèque standard 

int main() {
    int a, b; // Déclaration de deux variables entières a et b

    scanf("%d %d", &a, &b); // Lecture de deux entiers saisis par l'utilisateur

    // Échange des valeurs de a et b sans utiliser de variable temporaire
    a = a + b; // a contient maintenant la somme des deux nombres
    b = a - b; // b récupère l'ancienne valeur de a
    a = a - b; // a récupère l'ancienne valeur de b

    // Affichage des valeurs après l'échange
    printf("Après échange : a = %d, b = %d\n", a, b);

    return 0; // Fin du programme
}

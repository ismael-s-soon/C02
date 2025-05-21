#include <stdio.h>

int main() {
int nombre = 0;
int i = 1;
scanf("%d", &nombre);
if (nombre < 0) {
printf ("Erreur.\n");
} else {
int fact = 1; 
while (i <= nombre) {
fact *= i;
i++;
}
printf("Le factoriel de %d est : %d\n", nombre, fact);
}
return 0;
}

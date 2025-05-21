#include <stdio.h>

int main() {
int nombre = 0;
scanf("%d", &nombre);
if ( nombre % 2 == 0 ) {
printf ("%d est pair.\n", nombre);
} else {
printf ("%d est inpair.\n", nombre);
}
return 0;
}

#include <stdlib.h>
int main (void)
{
    int *toto;

    toto = malloc(5);
    free(toto);
    toto = NULL;
    free(toto);
}
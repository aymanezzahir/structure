#include <stdio.h>
#include "fonction.h"
int main()
{

    cellule *list = (cellule *) NULL;
    int n;
    printf("combien des donner voullez remplir :");
    scanf("%d", &n);
    while (n--)
    {
        cellule *p;
    p = creer_cellule();
    remplir(p);
    list = inserer_debut(list , p);
    }
    
    afficher_list(list);

    
    return 0;
}
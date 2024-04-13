#include "fonction.h"
#include <stdio.h>
#include <stdlib.h>
void remplir(cellule *p){
    int x;
    printf("donner un entier : ");
    scanf("%d", &x);
    (*p).value = x;
}
cellule * creer_cellule(){
    cellule * c;
    c = (cellule *)malloc(sizeof(cellule));
    c->next = (cellule *) NULL;
    return c;
}
int vide (cellule *p) {return (p==NULL);}

void afficher_list(cellule *list){
    cellule *p = list;
    while (p != NULL)
    {
        printf("%d" , (p)->value);p=p->next;
    }
    printf("\n");
}
cellule * inserer_debut(cellule *list , cellule *c){
    c->next = list;
    list = c; // for make pointer in head of list
    return list;
}
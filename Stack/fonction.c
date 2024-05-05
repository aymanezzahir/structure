#include "fonction.h"
#include <stdlib.h>
#include <stdio.h>

pile * cree_p(){
    pile * p = malloc(sizeof(pile));

    (*p).ipile = 0;
    return p;
}
int vide (pile *p) {return ((*p).ipile==0);}

void supprimer(pile *p){
    if(vide(p)){
        printf("suppresion dans pile vide non define");
        exit(EXIT_FAILURE);
    }

    (*p).ipile--;
    
}

int valeur (pile *p){
    if(vide(p)){
        printf("valuer non definie\n");
        exit(EXIT_FAILURE);
    }
    return (*p).T[(*p).ipile];
}

void ajouter(pile *p , int val){
    (*p).ipile ++;
    if((*p).ipile < N){
        (*p).T[(*p).ipile] = val;
        return ;
    }
    printf("stack overflow !");
    exit(EXIT_FAILURE);
}

void remplir(pile *p){
    int x;
    printf("\ndonner moi la nombre des elements de ce pile ne dépasse pas 100 : ");

    scanf("%d", &x);

    while (x > N){
        printf("max 100 : ");
        scanf("%d", &x);
    }
   int i =0;
    while (x--){
         i++;
        int val;
        printf("T[%d] : " ,  i );
        scanf("%d" , &val);
        ajouter(p , val);
    }

    
}

void afficher_p(pile *p){
    pile * p2 = cree_p();
    while (!vide(p))
    {
        printf("\n\t|\t%d\t|" , valeur(p));
        ajouter(p2 , valeur(p));
        supprimer(p);
    }
    printf("\n\t-----------------\n");
    while (!vide(p2))
    {
        ajouter(p , valeur(p2));
        supprimer(p2);
    }
    free(p2);

}



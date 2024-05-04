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
    c->prev = (cellule *) NULL;
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

void afficher_list_reverse(cellule *list){
    cellule *p = list;
    while (p->next != NULL)
    {
        p=p->next;
    }

    while (p->prev != NULL)
    {
        printf("%d" , (p)->value);p=p->prev;
    }
    printf("\n");
}

cellule * inserer_debut(cellule *list , cellule *c){
    if(list == NULL) return c;
    c->next = list;
    list->prev = c;
    list = c; // for make pointer in head of list
    return list;
}
cellule * inserer_fin(cellule *list , cellule *c){
    cellule *p = list;
    while(p->next != NULL)    p = p->next;
    p->next = c;
    c->prev = p;

    return list;
}

cellule supprimer_valeur(cellule *list , int value){
    cellule *p = list;

    // the loop will stop in two case : 
    // 1) if value it exists in list
    // 2) if p = null
    while((p != NULL) && ((*p).value) !=value ){
        p = p->next;
    }

    // if list is null or pointer reach the end of list then don't find the value
    if(p==NULL){
        printf("non trouve");
    }else{

        // if we find the value in begin of list
        if((p->prev) !=NULL){
            p->prev->next = p->next;

            if(p->next !=NULL){
                p->next->prev = p->prev;
            }
        }else{
            list = list->next;

            if(list != NULL){
                list->prev = NULL;
            }

        }
    }
}
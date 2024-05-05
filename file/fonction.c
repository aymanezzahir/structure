#include "fonction.h"
#include <stdlib.h>
#include <stdio.h>

queue * cree_f(){
    queue * f = malloc(sizeof(queue));

    (*f).it = 0;
    (*f).iq = 0;
    return f;
}
int vide (queue *f) {return  (*f).it==(*f).iq ;}

void supprimer(queue *f){
    if(vide(f)){
        printf("suppresion dans queue vide non define");
        exit(EXIT_FAILURE);
    }

    (*f).it++ ;
    
}

int valeur (queue *f){
    if(vide(f)){
        printf("valuer non definie\n");
        exit(EXIT_FAILURE);
    }
    return (*f).T[(*f).it + 1];
}

void ajouter(queue *f , int val){
    (*f).iq ++;
    if((*f).iq < N){
        (*f).T[(*f).iq] = val;
        return ;
    }
    printf("stack overflow !");
    exit(EXIT_FAILURE);
}

void remplir(queue *f){
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
        ajouter(f , val);
    }
}

void afficher_f(queue *f){
    queue * f2 = cree_f();
    printf("\n\t");
    while (!vide(f))
    {
        printf("%d\t" , valeur(f));
        ajouter(f2 , valeur(f));
        supprimer(f);
    }
   
    f = f2;
    free(f2);

}



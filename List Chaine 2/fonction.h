typedef struct cellule{
    int value;
    struct cellule * next;
    struct cellule * prev;
} cellule;

//          une cellule
//         _________________________________________________________
//         |                  |                 |                  |
//         |      prev        |  value          |     next         |
//         |__________________|_________________|__________________|
//
//
cellule * creer_cellule();
int vide (cellule *);
void remplir(cellule *);
void afficher_list(cellule *);
cellule * inserer_debut(cellule * , cellule *);
cellule * inserer_fin(cellule * , cellule *);
cellule supprimer_valeur(cellule * , int );
void afficher_list_reverse(cellule *);
typedef struct cellule{
    int value;
    struct cellule * next;
} cellule;



//          une cellule
//         ______________________________________
//         |                 |                  |
//         |  value          |     next         |=>  autre cellule
//         |_________________|__________________|
//
//



cellule * creer_cellule();
int vide (cellule *);
void remplir(cellule *);
void afficher_list(cellule *);
cellule * inserer_debut(cellule * , cellule *);
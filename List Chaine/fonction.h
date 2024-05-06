typedef struct cellule{
    int value;
    struct cellule * next;
} cellule;

cellule * creer_cellule();
int vide (cellule *);
void remplir(cellule *);
void afficher_list(cellule *);
cellule * inserer_debut(cellule * , cellule *);
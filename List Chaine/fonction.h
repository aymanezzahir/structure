typedef struct cellule{
    int value;
    struct cellule * next;
    int index;
} cellule;

#define  graph  cellule **;

cellule * creer_cellule();
int vide (cellule *);
void remplir(int n , );
void afficher_list(cellule *);
cellule * inserer_debut(cellule * , cellule *);
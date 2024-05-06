#define N 100
typedef struct {
    int it;
    int iq;
    int T[N];
} queue;
// je nomme ce structure queue car il y'a autre structure en C appele FILE (fichier)

//          une file
//                      
//                      
//        =====================================              
//                            
//   ===>      10     34    53      54     42    =====>
//
//        =====================================


queue * cree_f();
int vide (queue *);
void remplir(queue *);
void afficher_f(queue *);
void ajouter(queue * , int );
int valeur(queue *);
void supprimer(queue * );

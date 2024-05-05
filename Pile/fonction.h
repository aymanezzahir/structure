#define N 100
typedef struct {
    int ipile;
    int T[N];
} pile;


//          une pile
//                      
//          |         |            
//          |    5    |            
//          |    6    |            
//          |    7    |    
//          |    13   |    
//          |    4    |    
//          |    2    |    
//          |    3    |    
//          |    1    |    
//          |    2    |    
//          -----------

pile * cree_p();
int vide (pile *);
void remplir(pile *);
void afficher_p(pile *);
void ajouter(pile * , int );
int valeur(pile *);
void supprimer(pile * );

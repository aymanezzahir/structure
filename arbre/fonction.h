
#define N 100
typedef int sommet[N];
typedef char * valeur[N];



int nbr_feuilles(sommet , valeur );
void phi(char *,sommet ,sommet , valeur );
char *ind_pere(char *s, sommet fils, sommet frere, valeur val);
void preordre(int , sommet , sommet , valeur ); 
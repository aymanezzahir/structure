#include <stdio.h>
#include "fonction.h"
int main()
{

    

    pile *p = cree_p();
    remplir(p);
    afficher_p(p);
    
    return 0;
}
#include <stdio.h>
#include "fonction.h"
int main()
{
    valeur val = {"", "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "s8", "s9","s10", "s11", "s12"};

    sommet fils = {-1, 2, 3, -1, 6, 8, -1, 10, -1, 12, -1, -1, -1, -1};
    sommet frere = {-1, -1, 4, 5, -1, -1, 7, -1, 9, -1, 11, -1, 13, -1};
    sommet pere = {-1, -1, 1, 2, 1, 2, 4, 4, 5, 5, 7, 7, 9, 9};

    nbr_feuilles(fils , val);
    return 0;
}
#include "fonction.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int nbr_feuilles(sommet n, valeur val)
{
    int i, nbf = 0;
    for (i = 1; i < N; i++)
        if (n[i] == -1)
        {
            nbf++;
            printf("%s\n", val[i]);
        }
    return nbf;
}

void phi(char *s, sommet fils, sommet frere, valeur val)
{
    int sommet, i, t;
    for (i = 1; i < N; i++)
        if (!strcmp(s, val[i]))
        {
            sommet = i;
            break;
        }
    t = fils[sommet];
    while (t != -1)
    {
        printf(" %s", val[t]);

        t = frere[t];
    }
}

char *ind_pere(char *s, sommet fils, sommet frere, valeur val)
{
    int i, t;

    // pour deternimer l'index de fils
    for (i = 1; i < N; i++)
        if (!strcmp(s, val[i]))
        {
            t = i;
            break;
        }

    int pere = -1;

    // dans ce cas le pere est le racine
    if (t == 1)
    {

        printf("pas de pere\n");
        getchar();
        exit(0);
    }

    while (pere == -1)
    {
        // dans se cas, si il'y a un fils de ce indece (t) donc i est le indece de ce pere
        for (i = 1; i < N; i++)
            if (t == fils[i])
                pere = i;
        // si il'y a un petit frere  de ce index (t) donc t = le grand frere
        for (i = 1; i < N; i++)
            if (t == frere[i])
                t = i;
    }
    return val[pere];
}

void preordre(int s, sommet fils, sommet frere, valeur val)
{
    int t;
    printf(" %s", val[s]);
    t = fils[s];
    while (t != -1)
    {
        preordre(t, fils, frere, val);
        t = frere[t];
    }
} 
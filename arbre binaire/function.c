#include <stdio.h>
#include <stdlib.h>
#include "function.h"
Node *creeNode(int n)
{
	Node *myNode = (Node *)malloc(sizeof(Node));
	(*myNode).fd = (*myNode).fg = (Node *)NULL;
	(*myNode).value = n;
	return myNode;
}
int vide(Node *racine) { return (racine == (Node *)NULL); }

// inserer dans un arbre
Node *inserer(Node *r, Node *z)
{
	int a = (*z).value;
	Node *x = r;
	Node *y = NULL;
	while ((x != NULL) && ((*x).value != a))
	{
		y = x;
		if ((*x).value > a)
			x = x->fg;
		else
			x = x->fd;
	}
	if (x == NULL)
	{
		if (a > (*y).value)
			y->fd = z;

		else
			y->fg = z;
	}

	else

		printf("insertion impossible \n");

	return r;
}
void preordre(Node *r)
{

	if (r == (Node *)NULL)
		return;
	printf(" %2d", (*r).value);
	preordre((*r).fg);
	preordre((*r).fd);
}

void inordre(Node *r)
{
	Node *x;
	x = r;
	if (x == NULL)
		return;
	inordre(x->fg);
	printf(" %d", (*x).value);
	inordre(x->fd);
}

void postordre(Node *r)
{
	Node *x;
	x = r;
	if (x == NULL)
		return;
	postordre(x->fg);
	postordre(x->fd);
	printf(" %d", (*x).value);
}
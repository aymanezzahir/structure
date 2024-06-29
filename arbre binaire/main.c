#include <stdio.h>
#include "function.h"
int main(){
	int n;
	scanf("%d" , &n);
	int tc = n;

	int b;scanf("%d", &b);
	Node * racine = creeNode(b);
	while(tc--){

		int a;scanf("%d", &a);
		Node * myNode = creeNode(a);
		racine = inserer(racine , myNode);
	}
	printf("le preodre :");
	preordre(racine);
	printf("\nle inordre :");
	inordre(racine);
	printf("\nle postordre :");
	postordre(racine);
	return 0;
}

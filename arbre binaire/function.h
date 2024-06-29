

typedef struct Node {
	int value;
	struct Node *fd;
	struct Node *fg;
} Node;


Node * creeNode(int);
int vide(Node *);
Node * inserer(Node * , Node *); 
void preordre(Node * );
void inordre(Node *);
void postordre(Node *);
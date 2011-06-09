typedef struct _node{
	char *name;
	int tipo;
	int address;
	int stackgl;
	struct _node *next;
}node;

#define HASHSIZE 101

void inithashtab();
unsigned int hash(char *s);
node* lookup(char *n);
char* m_strdup(char *o);
int getTipo(char* name);
int getAddress(char* name);
int insere(char* name,int tipo,int address,int stackgl);
void displaytable();
void cleanup();
int mainZor();

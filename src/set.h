#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAXNODES 10

typedef struct node {
	int ID;
	struct node * next; // a pointer to the next node
} graph_node;

typedef struct SET{
	struct node * listHead; //points to the first element of the list
} set;

// graph_node * createList();
// void initSet(set * head);
void addToSet(set *, int ID);
void addToLinkedList(set *, graph_node *,int ID);
void listLinkedList(graph_node *);
void listSet(set *);
int removeNodeFromList(set *, graph_node *, int ID);
int removeNodeFromSet(set *,int ID);
graph_node * searchNodeInLinkedList(graph_node *, int ID);
int sizeOfLinkedList(graph_node *);
int isLinkedListEmpty(graph_node *);
int isSetEmpty(set *);
bool listContains(graph_node *, int ID);
bool setContains(set *, int ID);
void clearLinkedList(set * ,graph_node *);
void clearSet(set *);
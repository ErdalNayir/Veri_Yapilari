#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    void* dataPtr;
    struct node* link;

} NODE;

typedef struct
{
    int  count;
    NODE* head;

} LIST;

//Linked Liste Olusturmak ve Node eklemek icin gereken fonksiyonlar
LIST* createList()
{
//	Local Definitions
	LIST* list;

//	Statements
	list = (LIST*) malloc (sizeof (LIST));
	if (list)
	   {
	    list->head    = NULL;
	    list->count   = 0;
	   } // if
    else
    {
        printf("liste olusturulamadi\n");
    }

	return list;
}	// createList

static bool _insert (LIST* pList,void* dataInPtr)
{
//	Local Definitions
	NODE* pNew;

//	Statements
	if (!(pNew = (NODE*) malloc(sizeof(NODE))))
	   return false;

	pNew->dataPtr   = dataInPtr;
	pNew->link      = NULL;

	// Adding before first node or to empty list.
    pNew->link       = pList->head;
    pList->head      = pNew;


	(pList->count)++;
	return true;
}	// _insert

int addNode (LIST* pList, void* dataInPtr){
    int success;

    success = _insert (pList,dataInPtr);
    if (success != 0)
        return (-1);
    return (0);
}
//Linked List uzunlugunu bulan recursive fonksiyon

int LinkedListUzunluk(NODE* node ,int uzunluk){

    if(node->link){
        return LinkedListUzunluk(node->link,uzunluk+1);
    }else{
        return uzunluk;
    }

}








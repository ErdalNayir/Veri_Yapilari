#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node* next;
    void* data;
}NODE;

typedef struct{
    NODE* Top;
    int count;

}STACK;

STACK* createStack(){
    STACK* stack;

    stack=(STACK*)malloc(sizeof(STACK));

    if(stack){
        stack->Top=NULL;
        stack->count=0;
    }
    printf("Stack olusturuldu\n\n");
    return stack;

}

void push(STACK* pstack, void* data){

    NODE* pNew= (NODE*)malloc(sizeof(NODE)); // I can put this node into heap with this code
    pNew->data=data;
    pNew->next=NULL;

    if(pstack->Top==NULL){ //While stack is empty
        pstack->Top=pNew;
        pstack->count++;
    }
    else{ // while the stack has more than one node
        pNew->next=pstack->Top;
        pstack->Top=pNew;
        pstack->count++;
    }

}

void* pop(STACK* pstack){
    NODE* popped;
    void* dataToPopped;

    if(pstack->count>1){
        popped=pstack->Top;
        dataToPopped=pstack->Top->data;
        pstack->Top=pstack->Top->next;
        free(popped);
        pstack->count--;

        return dataToPopped;
    }
    else if(pstack->count==1){

        popped=pstack->Top;
        dataToPopped=pstack->Top->data;
        pstack->Top=NULL;
        pstack->count--;
        free(popped);

        return dataToPopped;
    }
}

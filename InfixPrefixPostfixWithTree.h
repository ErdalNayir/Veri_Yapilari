#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char data;
    struct node* left;
    struct node* right;
}NODE;

/* newNode() allocates a new node
with the given data and NULL left
and right pointers. */
NODE* newNode(char data)
{
    // Allocate memory for new node
    NODE* node = (NODE*)malloc(sizeof(NODE));

    // Assign data to this node
    node->data = data;

    // Initialize left and
    // right children as NULL
    node->left = NULL;
    node->right = NULL;
    return (node);
}



void Infix(NODE* root){

    if(root!=NULL){
        if(root->left!=NULL){
            Infix(root->left);
            printf("%c",root->data); //operatorler basiliyor

        }

        if(root->left==NULL){
            if(root->right!=NULL){
                Infix(root->right);
            }
        }

        if(root->right==NULL){
            printf("%c",root->data); //Yapraklar basiliyor
            return 0;
        }
        if(root->right!=NULL){
            Infix(root->right);
        }
    }



}




void Prefix(NODE* root){

    if(root!=NULL){
        if(root->left!=NULL){
            //Infix(root->left);
            printf("%c",root->data); //operatorler basiliyor
            Prefix(root->left);

        }

        if(root->left==NULL){
            if(root->right!=NULL){
                Prefix(root->right);
            }
        }

        if(root->right==NULL){
            printf("%c",root->data); //Yapraklar basiliyor
            return 0;
        }
        if(root->right!=NULL){
            Prefix(root->right);
        }
    }



}



void Postfix(NODE* root){
    if(root->left!=NULL){
        Postfix(root->left);

    }
    if(root->left==NULL){
        if(root->right==NULL){
        printf("%c",root->data);
        return 0;
        }
    }
    if(root->right!=NULL){
        Postfix(root->right);
        printf("%c",root->data);
    }

    }

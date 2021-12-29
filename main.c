#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "VeriYapilariSoru_3.h"
#include "VeriYapilariSoru_4.h"
#include "VeriYapilariSoru_2.h"
#include "VeriYapilariSoru_1.h"
#include"RussianPeasant.h"
#include"Stack.h"

#define N 10

bool YansimaliMi(STACK* stack, char liste[]){
    for(int i=0; i<N; i++){
        if(liste[i]=='{' || liste[i]=='('){
            push(stack,liste[i]);
        }
        else{
            void* dataToCompare;
            dataToCompare=pop(stack);
            if(dataToCompare=='{' && liste[i]!='}' || dataToCompare=='(' && liste[i]!=')'){
                return false;
            }
        }
    }
    return true;
}


int main()
{


    /*1.SORU:
   LIST* liste=createList();

    for(int i=0;i<N;++i){
        addNode(liste,i);
        printf("Node Listeye Eklendi.\n");
    }

    printf("\n\n");

    int length = LinkedListUzunluk(liste->head,1);
    printf("\nListenin Boyutu: %d\n",length);
    */




    /*2.SORU CEVAP KISMI
    char strDeneme[]="eyedipadanadapideye"; //Kelimeyi buraya girin.
    int FIRSTINDEX,LASTINDEX,strLenght;

    strLenght=strlen(strDeneme); //sadece kelime uzunlugunu girin.
    FIRSTINDEX=0;
    LASTINDEX=strLenght-1;

    PalindromMu(strDeneme,FIRSTINDEX,LASTINDEX,strLenght); // PARAMETRELER:  Kelime , kelimenin ilk Indexi:0, Kelimenin son indexi:kelime uzunlugu-1, Kelime uzunlugu.
    */





    /*3.SORU CEVAP KISMI
    int cevap;
    cevap=AsalMi(N,2);
    printf("%d",cevap);
    return 0;
    */





    /* 4.SORU CEVAP KISMI
    printf("Input: %d\n\n",N);
    printf("Output: ");
    CarpanlarinaAyir(N,2);
    printf("\n");
    */
    
    
    
    /* Russian Peasant 
    int Toplam;

    Toplam=RussianPeasant(12,25,0);
    printf("Sonuc: %d\n\n",Toplam);
    */

    
    
    /*char problem solved with stack data structure
    STACK* stack = createStack();

    char parantezler[N]={'(','{','(','(','(',')',')',')','}',')'};

    bool result;
    result=YansimaliMi(stack,parantezler);

    if(result){
        printf("Evet Yansimali\n\n");
    }
    else{
        printf("Hayir Yansimasiz\n\n");
    }
    */


}

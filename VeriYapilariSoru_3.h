#include <stdio.h>
#include <stdlib.h>


int AsalMi(int sayi,int sayac){


    if(sayi==0){
        return 0;
    }
    else{

        if(sayac<sayi){


            if(sayi%sayac==0){

                return 0;
            }
            else{
            return AsalMi(sayi,sayac+1);
        }
        }



    }
    return 1;



}



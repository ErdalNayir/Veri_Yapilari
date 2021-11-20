#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void CarpanlarinaAyir(int sayi,int carpan){

    if((sayi/2)<1){
        return 0;
    }
    else{
            if(sayi%carpan==0){
                printf("%d, ",carpan);
                return CarpanlarinaAyir(sayi/carpan,carpan);
            }
            else{
                return CarpanlarinaAyir(sayi,carpan+1);
            }
    }

}


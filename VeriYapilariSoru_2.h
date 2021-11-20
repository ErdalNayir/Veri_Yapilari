#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void PalindromMu(char strDeneme[],int FIRSTINDEX,int LASTINDEX,int strLenght){

    if(FIRSTINDEX<=strLenght-1 && LASTINDEX>=0){

        if(strDeneme[FIRSTINDEX]==strDeneme[LASTINDEX]){
            return PalindromMu(strDeneme,FIRSTINDEX+1,LASTINDEX-1,strLenght);
        }
        else{
            printf("Girdiginiz Kelime Palindrom Degildir.\n");
            return 0;
        }
    }
    printf("Girdiginiz Kelime Palindromdur.\n");
    return 0;

}

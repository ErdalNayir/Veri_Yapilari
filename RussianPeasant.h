#include <stdio.h>
#include <stdlib.h>


int RussianPeasant(int Halving,int Doubling,int Sum){

    if(Halving<1){
        return Sum;
    }
    else{
        if(Halving%2!=0){
            int NewHalf;
            Sum=Sum+Doubling;
            NewHalf=(int)Halving/2;
            return RussianPeasant(NewHalf,Doubling*2,Sum);
        }
        int NewHalf;
        NewHalf=(int)Halving/2;
        return RussianPeasant(NewHalf,Doubling*2,Sum);
    }
}

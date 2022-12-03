#include "lib.h"
bool nprimo(int a) {
    int i=1, n=a;
    if (a != 1) {
        do{
            i++;
            n=a%i;
        }while (n);
    }else{
        return true;
    }
    if (i==a){
        return true;
    }else{
        return false;
    }
}

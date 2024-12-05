#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int arc,char *arvg[]){

/*avec rand() pour un intervalle donner
1-initialiser le strand(seed) why?
2-utiliser le %(N+1) {[0,N]} 
3- +1 Pour que N sois parmi les valeurs*/
  
    srand(time(NULL));
    int Rand_nbre = rand() % (100) + 1;

    printf("%d\n", Rand_nbre);

    return 0;
}
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
    int nbre_utilisateur ;
    int trust = 0;

    do{

        printf("veiller deviner un nombre entre 1 et 100\n");
        scanf("%d",&nbre_utilisateur);


        if(Rand_nbre == nbre_utilisateur){

            trust =1;

            printf("felicitation vous avez trouvez le nombre mysterieux");

            
        }
        else{
            if(Rand_nbre > nbre_utilisateur){

                printf("nombre mysterieux superieux au nombre entrer\n");


            }
            else{

                printf("nombre mysterieux inferieur au nombre entrer\n");


            }
        }



    }while(trust == 0);

    printf("%d\n", Rand_nbre);

    return 0;
}
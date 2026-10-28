// calloc() = Contiguous allocation.
//            Allocates memory dynamically and sets all allocated bytes to 0.
//            malloc() is faster, but calloc() leads to less bugs
//            calloc(#(number of elements), size)


#include <stdio.h>
#include <stdlib.h>


int main(){

    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    int *scores = calloc(number , sizeof(int));

    if(scores == NULL){
        printf("Couldn't allocate memory");
        return 1;
    }

    for(int i = 0; i< number; i++){
        printf("Enter score #%d: ", i+1);
        scanf("%d", &scores[i]);

    }
    for(int i = 0; i< number; i++){
        printf("%d ", scores[i]);

    }

    free(scores);
    scores = NULL;
    

    return 0;
}

//calloc is slower than malloc , just cuz we use an extra step
// to make each element 0 (to remove garbage values)

// realloc() = Reallocation.
//             Resize previously allocated memory
//             realloc(ptr, bytes)

#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));

    if(prices == NULL){
        printf("Couldn't allocate memory");
        return 1;
    }

    for(int i = 0; i< number; i++){

        printf("Enter price number #%d: " ,i + 1);
        scanf("%f", &prices[i]);
    }

    int newNumber = 0 ;
    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices , newNumber*sizeof(float)); 
    //it is common convention to use temp while using realloc
    // reallocates info to a new memory location and also frees the last memory location
    //in case this fails , it returns NULL

    if(temp == NULL){
        printf("Couldn't reallocate memory\n");
    }
    else{
        prices = temp; 
        temp = NULL; //not necessary 
        for(int i = number; i< newNumber; i++){

        printf("Enter price number #%d: " ,i + 1);
        scanf("%f", &prices[i]);
    }

    for (int i = 0; i < newNumber ; i++){
        printf("$%.2f ", prices[i]);
    }


    }


    
    free(prices);
    prices = NULL; 

    
    return 0;
}

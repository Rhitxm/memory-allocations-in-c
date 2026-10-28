// malloc() = A function in C that dynamically allocates
//            a specified number of bytes in memory

#include <stdio.h>
#include <stdlib.h>

int main(){

    // char grades[5] = {0}; //fixed size of 5

    int number  = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char)); 



    // we are basically creating a pointer to a memory location , whose name is grades
    
    //normally char is 1 byte, while int is usually 4 bytes
    
    
    
    if (grades == NULL){
        printf("Memory allocation failed!\n");
        return 1;
        //if char *grades fails , it points to null , it happens when
        //we are trying to access a memory location that isn't allowed to be accessed 
    }
    
    for(int i = 0; i < number; i++){
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);
    }
    
    for(int i =0 ; i < number; i++){
        printf("%c ", grades[i]);
    }
    
    
    
    
    //we are borrwing memory from heap 
    //so when we don't need it we need to free that memory
    
    free(grades); //returning the 'rented' space back to OS //like returning the apartment
    grades  = NULL; //avoids dangling pointer //its like we are returning the key to apartment
    

    return 0;
}

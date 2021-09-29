#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    
    int integer_k = 0, row = 0, rows = 0;
    char* word, chr, col;
    FILE* file;


    file = fopen("casos_teste/1.in", "r");

    if(file == NULL)
    {
        printf("File is empty!\n");
        exit(1);
    }

    printf("%s", fgets(word,100,file));

    // while (1) {
    //     // get the next character and make a cast to chat
    //     chr = (char) getc(file);

    //     if (chr == EOF)
    //         break;

    //     if (chr == '\n') {
    //         rows = rows + 1;
    //     }

    // }

    // rows += 1;
    
    // printf("%d\n",rows);
    // word = (char *) malloc(rows * sizeof(char*));

    // rewind(file);
    // for(int row = 0; row < rows; row++)
    // {
    //     word[row] = (char *) malloc(300 * sizeof(char));
    // }

    free(word);
    fclose(file);
    

    return 0;

}
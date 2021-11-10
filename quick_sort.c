#include<stdio.h>
#include<stdlib.h>

void quick_sort(char* array, int inicio, int fim){
    // verificar caso base (vetores de tamanho zero ou um)
    // verificar se o fim do vetor é menos ou igual ao inicio
    if (fim <= inicio) return;
    // algoritmo de partição ao redor do pivô
        // seleciona um pivô
        // percorre o inicio do vetor pra garantir que os elementos são menores ou iguals ao pivô
        // percore o fim do vetor para garantir que os elementos são maiores ou iguais ao pivô
  

    int pivo = inicio; // considerando que o pivô é o primeiro elemento
    int index_s = inicio + 1; // percorer a primeira lista, garantindo que todos os elementos sejam maiores ou iguais ao pivô
    int index_e = fim; // percorre a segunda lista garantindo que os elementos sejam maiores que o pivô

    while (index_s <= index_e) {
        while (index_s < fim && array[index_s] <= array[pivo]) index_s++;
        while (array[index_e] > array[pivo]) index_e--;

        if (index_e > index_s){
            char change = array[index_s];
            array[index_s] = array[index_e];
            array[index_e] = change;
        }
    }    
    // posição do pivo na posição correta
    // a posição do pivô será a index_e
    pivo = index_e;
    char change = array[pivo];
    array[pivo] = array[inicio];
    array[inicio] = change;

    // chamadas recursivas
    quick_sort(array, inicio, pivo-1);
    quick_sort(array, pivo+1, fim);
}
 

int main (){

    char vetor[8] = {'E', 'Y', 'A', 'D', 'B', 'F', 'C', '\0'};

    printf("%s\n", vetor);

    quick_sort(vetor, 0, 6);

    printf("%s\n", vetor);

    return 0;
}
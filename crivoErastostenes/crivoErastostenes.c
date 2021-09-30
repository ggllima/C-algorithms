#include <stdio.h>
#include <stdlib.h>

#define RANGE 10000

int main() {

  
  int prime_numbers[RANGE], list_prime[RANGE], quantity_of_numbers;
  int* indices, number, count = 0;

  // input da quantidade de primos que serão printados
  scanf("%d",&quantity_of_numbers);

  // alocando dinamicamente a quantidade de indices que serão acessados
  indices = malloc(quantity_of_numbers * sizeof(int));

  // input dos indices da lista de primos
  for (int i = 0; i < quantity_of_numbers; i++)
    scanf("%d", &indices[i]);

  
  for (int index=1; index<=RANGE; index++) {
    prime_numbers[index] = index;
  }

  
  
  for(number = 2; (number * number) <= RANGE; number++)
  {
      // verifica se o numero é múltiplo de 2 para não colocar na lista
      if (prime_numbers[number] != 0)
      {
          for(int indice=2; indice<RANGE; indice++)
          {
              // verifica se o numero irá estourar o RANGE de 10000
              if (prime_numbers[number]*indice > RANGE)
                  break;
              else
              
                  prime_numbers[prime_numbers[number]*indice]=0;
          }
      }
  
  }
  
  // irá colocar todos os numeros primos dentro do RANGE na lista list_primes
  for(int index = 1; index<=RANGE; index++)
  {
   
      if (prime_numbers[index]!=0){
          list_prime[count] = prime_numbers[index];
          count++;
      }
  }

  // irá printar somentes os indices que foram inputados
  for (int index = 0; index < quantity_of_numbers; index++)
  {
    printf("%d ",list_prime[indices[index]]);
  
  }


  return 0;
}

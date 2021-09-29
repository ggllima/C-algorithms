#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max_numbers 10000

int main() {

  
  int prime_numbers[max_numbers], list_prime[max_numbers], quantity_of_numbers;
  int* indices;

  scanf("%d",&quantity_of_numbers);

  indices = malloc(quantity_of_numbers * sizeof(int));

  for (int i = 0; i < quantity_of_numbers; i++)
    scanf("%d", &indices[i]);

  int indicator = 0;
  for (int index=1; index<=max_numbers; index++) {
    prime_numbers[index] = index;
  }

  int i = 2;
  while ((i*i) <= max_numbers)
  {
      if (prime_numbers[i] != 0)
      {
          for(int j=2; j<max_numbers; j++)
          {
              if (prime_numbers[i]*j > max_numbers)
                  break;
              else
              
                  prime_numbers[prime_numbers[i]*j]=0;
          }
      }
      i++;
  }
  int count = 0;
  for(int index = 1; index<=max_numbers; index++)
  {
   
      if (prime_numbers[index]!=0){
          list_prime[count] = prime_numbers[index];
          count++;
      }
  }

  for (int index = 0; index < quantity_of_numbers; index++)
  {
    printf("%d ",list_prime[indices[index]]);
  
  }


  return 0;
}

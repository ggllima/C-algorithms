#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max_numbers 10000

int main() {

  
  int prime_numbers[max_numbers], list_prime[max_numbers], numbers;;

  scanf("%d",&numbers);
  // //int *prime_numbers = malloc(max_numbers * sizeof(*prime_numbers));

  int indicator = 0;
  for (int index=2; index<=max_numbers; index++) {
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
                  // Instead of deleteing , making elemnets 0
                  prime_numbers[prime_numbers[i]*j]=0;
          }
      }
      i++;
  }
  int count = 0;
  for(i = 2; i<=10000; i++)
  {
      //If number is not 0 then it is prime
      if (prime_numbers[i]!=0){
          //printf("count %d\n",count);
          //printf("%d\n",prime_numbers[i]);
          list_prime[count] = prime_numbers[i];
          count++;
      }
  }

  for (int i = 0; i < numbers; i++)
  {
    printf("%d\n",list_prime[i]);
  }
  

  return 0;
}
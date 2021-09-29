/*----------------------------------------------------------------------
  Verifica se Numeros eh primo pelo Crivo de Eratostenes.
  ----------------------------------------------------------------------
  O Crivo de Eratóstenes é um método simples e prático de se encontrar
  números primos até um certo valor limite, criado por Eratóstenes.

  Para exemplificá-lo, vamos determinar a lista de números entre 1 e 30.

    * Inicialmente, determina-se o maior número a ser checado. Ele 
      corresponde à raiz quadrada do valor limite, arredondado para 
      baixo. No caso, a raiz de 30, arredondada para baixo, é 5.
    * Crie uma lista de todos os números inteiros de 2 até o valor 
      limite:
          2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 
          21 22 23 24 25 26 27 28 29 30.
    * Encontre o primeiro número da lista. Ele é um número primo, 2.
    * Remova da lista todos os múltiplos do número primo encontrado. 
      No nosso exemplo, a lista fica: 
          2 3 5 7 9 11 13 15 17 19 21 23 25 27 29.
    * O próximo número da lista é primo. Repita o procedimento. No caso,
      o próximo número da lista é 3. Removendo seus múltiplos, a lista 
      fica: 
          2 3 5 7 11 13 17 19 23 25 29. 
      O próximo número, 5, também é primo; a lista fica: 
          2 3 5 7 11 13 17 19 23 29. 
     5 é o último número a ser verificado, conforme determinado 
     inicialmente. Assim, a lista encontrada contém somente 
     números primos.
 */

#include <stdio.h>

int isPrime(unsigned int n);

main()
{
  unsigned int  n, j;

  do { 
    printf("\nEntre com um numero inteiro positivo maior que 0: ");
  } while (scanf("%lu", &n) != 1);
  
  /* Se for indicado 1 ou 0, nao sao primos */
  if( n < 2)
    printf("\nO numero %5u nao eh primo\n\n", n);
  else {
    if ( isPrime(n) )
      printf("\nO numero %5u eh primo\n", n);
    else
      printf("\nO numero %5u nao eh primo\n", n);
  }
}


/* Verifica se eh primo usando o Crivo de Eratostenes */
int isPrime(unsigned int n)
{
  int j = 0;
  
  /* se numero nao for par, aplica o crivo */
  if ( n != 2 &&  n % 2 )
    for (j = 3; (n % j != 0) && (j * j <= n); j += 2);
  
  /* se numero eh 2 ou passou pelo crivo */
  if ( n == 2 ||  j * j > n )
    return 1;
  else
    return 0;
  
}

/*----------------------------------------------------------------------
  Verifica se Numeros eh primo pelo Crivo de Eratostenes.
  ----------------------------------------------------------------------
  O Crivo de Erat�stenes � um m�todo simples e pr�tico de se encontrar
  n�meros primos at� um certo valor limite, criado por Erat�stenes.

  Para exemplific�-lo, vamos determinar a lista de n�meros entre 1 e 30.

    * Inicialmente, determina-se o maior n�mero a ser checado. Ele 
      corresponde � raiz quadrada do valor limite, arredondado para 
      baixo. No caso, a raiz de 30, arredondada para baixo, � 5.
    * Crie uma lista de todos os n�meros inteiros de 2 at� o valor 
      limite:
          2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 
          21 22 23 24 25 26 27 28 29 30.
    * Encontre o primeiro n�mero da lista. Ele � um n�mero primo, 2.
    * Remova da lista todos os m�ltiplos do n�mero primo encontrado. 
      No nosso exemplo, a lista fica: 
          2 3 5 7 9 11 13 15 17 19 21 23 25 27 29.
    * O pr�ximo n�mero da lista � primo. Repita o procedimento. No caso,
      o pr�ximo n�mero da lista � 3. Removendo seus m�ltiplos, a lista 
      fica: 
          2 3 5 7 11 13 17 19 23 25 29. 
      O pr�ximo n�mero, 5, tamb�m � primo; a lista fica: 
          2 3 5 7 11 13 17 19 23 29. 
     5 � o �ltimo n�mero a ser verificado, conforme determinado 
     inicialmente. Assim, a lista encontrada cont�m somente 
     n�meros primos.
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

Program Maior{
   Declarations
      lista -> Array Size 3;
      maior -> Integer;
      cont = 0, read -> Integer;
   Statements
      /* Le tres numeros do stdout */
      while(cont < 3){
         /* Carrega numero para variavel read */
         Ask("Digite um numero\n", read);

         /* Guarda no array */
         lista[cont] = read;

         /* Incrementa o contador */
         Succ cont;
      }
      /* Inicializa a variavel maior com o primeiro elemento do array lista */
      maior = lista[0];

      /* Inicializa contador a 1 */
      cont = 1;

      /* Precorre retantes elementos do array */
      while(cont < 3){
         /* Se elemento no array lista na posicao cont for maior que o valor da variavel maior */
         if(lista[cont] > maior)
            then{
               /* Guarda o valor da posicao cont do array lista na variavel maior */
               maior = lista[cont];
            }

         /* Incrementa o contador */
         Succ cont;
      }

      /* Envia o resultado para o stdout */
      Say("O maior e : ", String);
      Say(maior, Integer);
      Say("\n", String);
}

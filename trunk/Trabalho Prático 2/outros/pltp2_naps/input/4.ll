Program Teste{
   Declarations      
      i -> Integer;
      a -> Array Size 10;
   Statements
      i = 0;
      while(i < 10){
         if((i ** 2) == 0)
            then{
               a[i] = 1;
            }
         else{
            a[i] = 0;
         }
         Succ i;
         
      }
      Say(i, Integer);      
      
}

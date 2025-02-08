

int main() {
    
    // CONSTANTES 
 const int  movimento_bispo = 5;
 const int  movimento_torre = 5;
 const int  movimento_rainha = 8;
 
     // MOVIMENTO DAS PEÇAS
     
     int jogada;
     
      do{
     
     printf ("Informe a sua jogada, informe 0 para sair\n");
     printf ("Digite:");
     scanf ("%d", &jogada);
     
   printf ("Movimento do bispo\n");
   
   for (int i = 1; i <= movimento_bispo; ++i){
   printf ("Cima\n");
   printf ("direita\n");
   }
    printf ("                                \n");
    printf ("movimento da torre\n");
    for (int i = 1; i <= movimento_torre; ++i){
    printf ("direita\n");
    }
    
    printf("                                      \n");
    printf ("movimento da rainha");
     
   for (int i = 1; i <= movimento_rainha; ++i){
    printf ("Esquerda\n");
   }
      } while ( jogada != 0);
  
    printf ("fim da jogada");

    return 0;
}
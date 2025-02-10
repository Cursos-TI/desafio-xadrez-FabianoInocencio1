

int main() {
    
    // CONSTANTES 
 const int  movimento_bispo = 5;
 const int  movimento_torre = 5;
 const int  movimento_rainha = 8;
 
     // MOVIMENTO DAS PEÇAS
     
     int jogada;
    
     
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
      
  
    printf ("fim da jogada");

    return 0;
}
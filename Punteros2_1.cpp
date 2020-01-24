/*Punteros 2.0
  Vamos a hacer un programa de punteros que nos permita realizar una operacion de manera mas 
  dinamica de esta manera podemos reservar exclusivamente el hueco de memoria que vamos a 
  utilizar, de manera que no perdemos memoria RAM al reservar espacio que no vamos a utilizar.
  
  Como guardar info en la memoria dinamica del ordenador; antes (int x;),(float x;), (bool x;), (char c;) ahora (char *palabra[4]).
  En int x[5], estan todas las posiciones seguidas y lo que guardas es el numero de la posicion de memoria
  con un printf ("%x", x)
  char *palabra[nº]: guardas un vector de 4 bloques de memoria en cada uno guardas un puntero que coincide con una 
  letra, 4 direcciones, que apuntan a la primera letra de cada palabra.
  
  
  Con el * entras en la direccion / casilla.
   *(*palabra) para entrar a la primera casilla
   *(*palabra+4) para entrar a la 5ª casilla. = [*((*palabra)+4) = *(*palabra+4)]
   *(*(palabra+3)+6))
*/ 

//Este programa lee 4 nombres sin importar el numero de letras que tiene cada uno, guardara su posicion y luego lo recuperaremos.




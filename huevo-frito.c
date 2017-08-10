#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>



int main(){

  char *nombre,vaciar;
  int tam=100;
  int opt;

  char sarten[20] = "sarten";
  char huevo[20] = "huevo";
  char espumadera[20] = "espumadera";
  char plato[20] = "plato";
  char aceite[20] = "aceite";

  char paso1[100] = "echar el huevo a la sarten";
  char paso2[100] = "con la espumadera, echamos aceite sobre el huevo para que se fria";
  char paso3[100] = "sacamos el huevo de la sarten y lo servimos en un plato";
  char paso4[100];

  char *cad1;
  char *cad2;
  char *cad3;
  char *cad4;
  char *cad5;
  char *cad6;




printf("Bienvenidos a como freir un huevo\n");

nombre = (char *)malloc(sizeof(char)*tam);
printf("Introduzca su nombre usuario:");
//while((vaciar=getchar()) != EOF && vaciar != '\n');
fgets(nombre, tam, stdin);



printf("Muy bien %s, freir un huevo es algo muy sencillo,solo tienes que seguir unos sencillos pasos muy intuitivos, estoy seguro de que loconseguiras ;)\n",nombre);

//11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111

printf("1-Para freir un huevo, lo primero que necesitamos son todos los materiales.\n");

cad1 = (char *)malloc(sizeof(char)*tam);
printf("Empecemos por la herramienta, ¿Que necesitamos?\n");
//while((vaciar=getchar()) != EOF && vaciar != '\n');
fgets(cad1, tam, stdin);


if(strcmp(cad1,"sarten\n") == 0){



    cad2 = (char *)malloc(sizeof(char)*tam);
    printf("Correcto, ¿que otra herrramienta necesitas?\n");
    fgets(cad2, tam, stdin);

      if(strcmp(cad2,"espumadera\n") == 0){

        printf("Correcto\n");

//2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
        cad3 = (char *)malloc(sizeof(char)*tam);
        printf("Ahora vamos a ponernos con los ingredientes, ¿cual crees que es el mas importante?\n");
        fgets(cad3, tam, stdin);

        if(strcmp(cad3,"huevo\n") == 0){

          printf("Correcto, cualquiera lo huebira adivinado ¿no?\n");
          printf("Que mas se necesita\n");
          cad4 = (char *)malloc(sizeof(char)*tam);
          fgets(cad4, tam, stdin);


            if(strcmp(cad4,"aceite\n") == 0){

              printf("Muy bien, no eres tan inutil como pensaba\n");

            }else{

            printf("Menudo inutil eres\n");
            }

        }else{

          printf("NO\n");
        }


      }else{
          printf("¿Seguro?,piensalo mejor\n");
      }





}else{

  printf("Lo siento, pero no es correcto\n");

 }
}

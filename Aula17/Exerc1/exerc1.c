#include<stdio.h>

/* ! Exercicio 1 */

void inicio(){

    printf( "Content-type: text/html\n\n" );
    printf("<!DOCTYPE html>\n");
    printf("<html lang='pt-BR'>\n");
    printf("<head>\n");
    printf("<meta charset=\"UTF-8\">\n");

}

/* ! Exercicio 2 */

void meio(){

    printf("</head>\n");
    printf("<body>\n");
}

/* ! Exercicio 3 */

void fim(){

    printf("</body>\n");
    printf("</html>\n");
}

/* ! Exercicio 4 */

void aba( char *titulo){

    printf("<title> %s </title>\n", titulo);

}

/* ! Exercicio 5 */

void titulo(char *frase){

   printf("<h1> Usando argumentos </h1>");

}

/* ! Exercicio 6 */

int main(){


    inicio();
    aba("Segunda página");
    meio();
    titulo("Usando argumentos");
    fim();


    return 0;
}
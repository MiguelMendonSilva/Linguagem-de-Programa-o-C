#include <stdio.h>
#include <stdlib.h>


int main() {
    char *query = getenv("QUERY_STRING");
    printf( "Content-type: text/html\n\n" );
    printf("Recebido: %s\n", query);


    return 0;
}

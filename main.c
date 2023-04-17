#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int main()
{
    // Ejercicio 1
    /*Pila DADA1, AUX1, AUX2;
    inicpila(&DADA1);
    inicpila(&AUX1);
    inicpila(&AUX2);
    for(int i = 0; i<5; i++) {
        leer(&DADA1);
        mostrar(&DADA1);
    }
    mostrar(&DADA1);
    for(int i=0; i<3; i++) {
        apilar(&AUX1, desapilar(&DADA1));

    }
    while(!pilavacia(&DADA1)){
        apilar(&AUX2, desapilar(&DADA1));
    }
    mostrar(&AUX1);
    mostrar(&AUX2);*/

    // Ejercicio 2
    /*int usuario;
    Pila ORIGEN2, DESTINO2;
    inicpila(&ORIGEN2);
    inicpila(&DESTINO2);
    usuario = 1;
    while(usuario == 1) {
        leer(&ORIGEN2);
        mostrar(&ORIGEN2);
        printf("Escribe 1 para ingresar otro numero: \n");
        scanf("%i", &usuario);
    }

    while(!pilavacia (&ORIGEN2)) {
        apilar(&DESTINO2, desapilar(&ORIGEN2));
    }
    mostrar(&DESTINO2);*/

    // Ejercicio 3

    /*Pila DADA3, DISTINTOS3, AUX3;
    inicpila(&DADA3);
    inicpila(&DISTINTOS3);
    inicpila(&AUX3);
    int usuario3 = 1;
    while(usuario3 == 1) {
        leer(&DADA3);
        mostrar(&DADA3);
        printf("Escribe 1 para ingresar otro numero: \n");
        scanf("%i", &usuario3);
    }
    while(!pilavacia (&DADA3)) {
        if(tope(&DADA3)==8){
            apilar(&AUX3, desapilar(&DADA3));
        }else {
            apilar(&DISTINTOS3, desapilar(&DADA3));
        }
    }
    mostrar(&DISTINTOS3);
    mostrar(&AUX3);*/

    //  Ejercicio 4

    /*int usuario4;
    Pila ORIGEN4, DESTINO4, AUX4;
    inicpila(&ORIGEN4);
    inicpila(&DESTINO4);
    inicpila(&AUX4);
    usuario4 = 1;
    while(usuario4 == 1) {
        leer(&ORIGEN4);
        mostrar(&ORIGEN4);
        printf("Escribe 1 para ingresar otro numero: \n");
        scanf("%i", &usuario4);
    }
    while(!pilavacia (&ORIGEN4)) {
        apilar(&AUX4, desapilar(&ORIGEN4));
    }
    while(!pilavacia (&AUX4)) {
        apilar(&DESTINO4, desapilar(&AUX4));
    }
    mostrar(&DESTINO4);*/

    //Ejercicio 5

    /*int usuario5;
    Pila DADA5, DESTINO5, AUX5;
    inicpila(&DADA5);
    inicpila(&DESTINO5);
    inicpila(&AUX5);
    usuario5 = 1;
    while(usuario5 == 1) {
        leer(&DADA5);
        mostrar(&DADA5);
        printf("Escribe 1 para ingresar otro numero: \n");
        scanf("%i", &usuario5);
    }
    while(!pilavacia (&DADA5)) {
        apilar(&AUX5, desapilar(&DADA5));
    }
    while(!pilavacia (&AUX5)) {
        apilar(&DADA5, desapilar(&AUX5));
    }
    mostrar(&DADA5);*/

    // Ejercicio 6

    /*int usuario6;
    Pila DADA6, AUX6, AUX6_2;
    inicpila (&DADA6);
    inicpila (&AUX6);
    inicpila (&AUX6_2);
    usuario6 = 1;

    while(usuario6 == 1) {
        leer(&DADA6);
        mostrar(&DADA6);
        printf("Escribe 1 para ingresar otro numero: \n");
        scanf("%i", &usuario6);
    }
    apilar(&AUX6, desapilar(&DADA6));
    while(!pilavacia (&DADA6)) {
        apilar(&AUX6_2, desapilar(&DADA6));
    }
    apilar(&DADA6, desapilar(&AUX6));
    while(!pilavacia (&AUX6_2)) {
        apilar(&DADA6, desapilar(&AUX6_2));
    }
    mostrar(&DADA6);*/

    // Ejercicio 7

    /*int usuario7;
    Pila DADA7, AUX7, AUX7_2;
    inicpila (&DADA7);
    inicpila (&AUX7);
    inicpila (&AUX7_2);
    usuario7 = 1;

    while(usuario7 == 1) {
        leer(&DADA7);
        mostrar(&DADA7);
        printf("Escribe 1 para ingresar otro numero: \n");
        scanf("%i", &usuario7);
    }
    while(!pilavacia (&DADA7)) {
        apilar(&AUX7, desapilar(&DADA7));
    }
    apilar(&AUX7_2, desapilar(&AUX7));
    while(!pilavacia (&AUX7)) {
        apilar(&DADA7, desapilar(&AUX7));
    }
    apilar(&DADA7, desapilar(&AUX7_2));
    mostrar(&DADA7);*/

    // Ejercicio 8

    /*Pila MAZO8, JUG1, JUG2;
    inicpila(&MAZO8);
    inicpila(&JUG1);
    inicpila(&JUG2);

    char l;
    do {
        leer(&MAZO8);
        printf("Ingrese la letra l para agregar otro numero ");
        fflush(stdin);
        scanf("%c", &l);
    }while(l=='l');

    while(!pilavacia (&MAZO8)) {
            apilar(&JUG1, desapilar(&MAZO8));
        if (!pilavacia (&MAZO8)) {
            apilar(&JUG2, desapilar(&MAZO8));
        }


    }
    mostrar(&JUG1);
    mostrar(&JUG2);*/

    // Ejercicio 9

    /*Pila A, B, AUX9;
    inicpila(&A);
    inicpila(&B);
    inicpila(&AUX9);
    char c, d;
    do {
        leer(&A);
        printf("Ingrese la letra c para agregar otro numero ");
        fflush(stdin);
        scanf("%c", &c);
    }while(c=='c');

    do {
        leer(&B);
        printf("Ingrese la letra d para agregar otro numero ");
        fflush(stdin);
        scanf("%c", &d);
    }while(d=='d'); {
        }
    while(!pilavacia(&A) && !pilavacia(&B)) {
        apilar (&AUX9, desapilar(&A));
        apilar (&AUX9, desapilar(&B));
    }if (pilavacia(&A) && (pilavacia(&B))) {
        printf("La pila A y B tienen la misma cantidad de elementos ");
    }else{
        printf("La pila A y B no tienen la misma cantidad de elementos ");
    }
    mostrar(&AUX9);

    mostrar(&A);
    mostrar(&B);*/

    // Ejercicio 10

    /*Pila A10, B10, AUX10;
    inicpila(&A10);
    inicpila(&B10);
    inicpila(&AUX10);
    char c10, d10;
    do {
        leer(&A10);
        printf("Ingrese la letra c para agregar otro numero ");
        fflush(stdin);
        scanf("%c", &c10);
    }while(c10=='c');

    do {
        leer(&B10);
        printf("Ingrese la letra d para agregar otro numero ");
        fflush(stdin);
        scanf("%c", &d10);
    }while(d10=='d');

    while(!pilavacia(&A10) && !pilavacia(&B10)){
        if (tope(&A10) == tope(&B10)) {
            apilar (&AUX10, desapilar(&A10) && desapilar (&B10));
        }
    }
    printf("Los elementos de las pilas a y b son iguales");
    mostrar(&A10);
    mostrar(&B10);
    mostrar(&AUX10);*/

    // Ejercicio 11

    /*Pila modelo11, dada11, aux11, aux11_2;
    inicpila (&modelo11);
    inicpila (&dada11);
    inicpila (&aux11);
    inicpila (&aux11_2);
    char s, f;
    do {
        leer(&modelo11);
        printf("Ingrese la letra s para agregar otro numero ");
        fflush(stdin);
        scanf("%c", &s);
    }while(s=='s');
    do {
        leer(&dada11);
        printf("Ingrese la letra f para agregar otro numero ");
        fflush(stdin);
        scanf("%c", &f);
    }while(f=='f');

    while(!pilavacia (&dada11)) {
        if (tope(&modelo11) == tope(&dada11)) {
            apilar(&aux11, desapilar(&dada11));
        }else {
            apilar(&aux11_2, desapilar(&dada11));
        }

    }
    while(!pilavacia(&aux11_2)) {
        apilar(&dada11, desapilar(&aux11_2));
    }

    mostrar(&modelo11);
    mostrar(&dada11);*/

    // Ejercicio 12

    /*Pila modelo12, dada12, aux12, aux12_2, auxmodelo12;
    inicpila (&modelo12);
    inicpila (&dada12);
    inicpila (&aux12);
    inicpila (&aux12_2);
    inicpila (&auxmodelo12);
    char r, h;
    printf("Ingrese los elementos de la pila Modelo \n");
    do {
        leer(&modelo12);
        printf("Ingrese la letra r para agregar otro numero ");
        fflush(stdin);
        scanf("%c", &r);
    }while(r=='r');
    printf("Ingrese los datos a comparar, si se encuentran en la pila modelo los eliminara\n");
    do {
        leer(&dada12);
        printf("Ingrese la letra h para agregar otro numero");
        fflush(stdin);
        scanf("%c", &h);
    }while(h=='h');
    while (!pilavacia(&dada12) && !pilavacia(&modelo12)) {

        while (!pilavacia(&dada12)) {
            if(tope(&dada12) == tope(&modelo12)) {
                desapilar(&dada12);
            } else {
                apilar(&aux12, desapilar(&dada12));
            }
        }
        while (!pilavacia(&aux12)) {
            apilar(&dada12, desapilar(&aux12));
        }
        apilar(&aux12_2, desapilar(&modelo12));
    }
    while (!pilavacia(&aux12_2)) {
        apilar(&modelo12, desapilar(&aux12_2));
    }

    mostrar(&modelo12);
    mostrar(&dada12);*/

    // Ejercicio 13

    /*Pila dada13, limite13, mayores13, menores13;
    inicpila (&dada13);
    inicpila (&limite13);
    inicpila (&mayores13);
    inicpila (&menores13);
    char v;
    apilar(&limite13, 10);
    printf("Ingrese los numeros enteros que quiera, si son mayores que diez iran a la pila 'mayores' y si son menores a la pila 'menores'\n");

    do {
        leer(&dada13);
        printf("\nIngrese la letra v para agregar otro numero ");
        fflush(stdin);
        scanf("%c", &v);
    }while(v=='v');

    while(!pilavacia(&dada13)) {
        if (tope(&dada13) >= tope(&limite13)) {
            apilar(&mayores13, desapilar(&dada13));
        }else {
            apilar(&menores13, desapilar(&dada13));
        }
    }
    printf("Estos son los numeros mayores al limite ");
    mostrar(&mayores13);
    printf("Estos son los numeros menores al limite ");
    mostrar(&menores13);*/

    // Ejercicio 14

    /*Pila dada14, aux14, par14, impar14;
    inicpila(&dada14);
    inicpila(&aux14);
    inicpila(&par14);
    inicpila(&impar14);
    char x;

    do {
        leer(&dada14);
        printf("\nIngrese la letra x para agregar otro numero ");
        fflush(stdin);
        scanf("%c", &x);
    }while(x=='x');

    while(!pilavacia(&dada14)){
    apilar(&aux14, desapilar(&dada14));
    if(pilavacia(&dada14)){
        printf("Es impar\n");
        apilar(&impar14, desapilar(&aux14));
    }
    else{
        apilar(&aux14, desapilar(&dada14));
        if(pilavacia(&dada14)){
            printf("Es par\n");
            apilar(&par14, desapilar(&aux14));
        }
    }
   }
    mostrar(&par14);
    mostrar(&impar14);*/

    // Ejercicio 15

    /*La funcion del siguiente ciclo funciona cuando 'pilavacia' devuelve falso, es decir, mientras que la Pila1 no esté vacía.

    Luego, se desapila un elemento de la Pila "Descarte" mediante la función "desapilar", y se apila este elemento en la Pila2 mediante la función "apilar".

    El ciclo no finaliza nunca, ya que no hay una operación o interacción que haga que pila1 se encuentre vacia dentro del while.

    // Ejercicio 16

    El siguiente código realiza la función de iterar mientras la función "pilavacia" devuelva falso, es decir, mientras que la Pila1 no esté vacía.

    Dentro del ciclo, se verifica si el elemento en el tope de la Pila1 es igual a 5 mediante la función "tope". Si el tope es 5, se desapila ese elemento de la Pila1 y se apila en la Pila Aux mediante la función "apilar".

    Luego, se desapila ese mismo elemento de la Pila Aux y se apila en la Pila Result mediante la función "apilar".

    En resumen, el código mueve cualquier elemento igual a 5 que esté en la Pila1 a la Pila Result, y utiliza la Pila Aux temporalmente como almacenamiento para realizar esta tarea. Cualquier otro elemento en la Pila1 se deja en su lugar sin ser modificado o movido.

    // Ejercicio 17

    a. No, el programa no resuelve completamente el problema planteado, ya que solo mueve los elementos de la pila "Origen" a la pila "Distinto" hasta que encuentra un valor de 5, pero no incluye este valor en la pila "Distinto". Además, si la pila "Origen" está vacía, no hace nada.

    b. El principal error es que el valor de 5 se descarta y no se incluye en la pila "Distinto". También falta un manejo adecuado para el caso en que la pila "Origen" está vacía.

    c. Para resolver adecuadamente el problema planteado, se debe modificar el programa de la siguiente manera:


    int main() {
        Pila Origen, Distinto;
        inicpila(&Origen);
        inicpila(&Distinto);
        leer(&Origen);
        while (!pilaVacia(&Origen) && tope(&Origen) != 5) {
            apilar(&Distinto, desapilar(&Origen));
            }
            if (!pilaVacia(&Origen)) {
                apilar(&Distinto, desapilar(&Origen));
            }
        }
    En este programa, se agrega un bucle while que mueve los elementos de la pila "Origen" a la pila "Distinto" hasta que se encuentra un valor de 5 o hasta que la pila "Origen" esté vacía. Si se encuentra un valor de 5, se detiene el bucle y no se incluye en la pila "Distinto". Después del bucle, se verifica si la pila "Origen" aún tiene elementos y si es así, se mueve el valor de 5 a la pila "Distinto".

    d. Los componentes del programa son las pilas "Origen" y "Distinto", las funciones "inicpila", "leer", "apilar", "desapilar" y "pilaVacia", y el bucle while.

    // Ejercicio 18

    a. La condición del ciclo es que ambas pilas "Pila1" y "Pila2" no estén vacías al mismo tiempo. Esto significa que el ciclo se ejecutará siempre y cuando haya elementos en ambas pilas.

    b. Al finalizar el ciclo, las pilas "Pila1" y "Pila2" pueden tener distintos estados dependiendo de la cantidad de elementos que haya en ellas. Si ambas pilas tienen la misma cantidad de elementos, entonces estarán vacías.
    Si una pila tiene más elementos que la otra, entonces la pila que tenga más elementos aún tendrá elementos sin procesar y la pila que tenga menos elementos estará vacía. Si una de las pilas estaba vacía desde el principio, entonces ambas pilas seguirán vacías al finalizar el ciclo.
    La pila "Descarte" contendrá los elementos que fueron desapilados y apilados de las pilas "Pila1" y "Pila2" en cada iteración del ciclo.*/


    return 0;
}

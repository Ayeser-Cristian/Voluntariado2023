/*
Importante:
    *Para colocar comentarios cortos usamos // 
    * Todas las instruciones finalizan con ";"
    * Un identificador no puede llevar caracteres especiales
    * Un identificador debe iniciar siempre con una letra o un "_", no con números
    * Un identificador puede llevar letras, números y "_"
*/


#include <iostream> // Incluimos la biblioteca estándar de entrada/salida.
#include <string> // Incluimos la biblioteca <string> para usar std::string.
#include <cstdio> // Incluimos la biblioteca estándar de entrada/salida en C para usar printf

using namespace std; // Usamos el espacio de nombres "std" para no tener que usar "std::" antes de elementos de la biblioteca estándar.

int variableGlobal_10 = 10; // Declaración de una variable global llamada "variableGlobal_10" con valor 10.

// Comentarios importantes sobre el código.

// Definición de un procedimiento llamado "imprimirMensaje" que toma una cadena y la imprime en la consola.
void imprimirMensaje(const string& mensaje) {
    cout << mensaje << endl;
}

// Explicación de un procedimiento:
// - Un procedimiento es un bloque de código que realiza una tarea específica y no devuelve un valor.
// - En este caso, "imprimirMensaje" toma un parámetro de tipo cadena (string) llamado "mensaje" y lo imprime en la consola.

// Función "sumar" que toma dos números enteros y devuelve su suma.
int sumar(int num1, int num2) {
    return num1 + num2;
}

// Explicación de una función:
// - Una función es un bloque de código que realiza una tarea y devuelve un valor.
// - La función "sumar" toma dos parámetros de tipo entero, "num1" y "num2", y devuelve su suma.

// Función "MultiplicaX10" que toma un número y lo multiplica por la variable global "variableGlobal_10".
int MultiplicaX10(int num1) {
    return num1 * variableGlobal_10;
}

int main() { // La función main es el punto de entrada de nuestro programa.

    //-------------------------Declaración de Variables---------------------
    int numero_entero; // Declaración de una variable entera llamada "numero_entero" sin inicializar.
    int numero_entero2 = 42; // Declaración de una variable entera llamada "numero_entero2" inicializada con 42.

    double numero_decimal; // Declaración de una variable decimal llamada "numero_decimal" sin inicializar.
    double numero_decimal2 = 2.71828; // Declaración de una variable decimal llamada "numero_decimal2" inicializada con 2.71828.

    char caracter; // Declaración de una variable de carácter llamada "caracter" sin inicializar.
    char caracter2 = 'a'; // Declaración de una variable de carácter llamada "caracter2" inicializada con 'a'.

    bool es_verdadero; // Declaración de una variable booleana llamada "es_verdadero" sin inicializar.
    bool es_falso = false; // Declaración de una variable booleana llamada "es_falso" inicializada con el valor false.

    string cadena_texto; // Declaración de una variable de tipo cadena de texto llamada "cadena_texto" sin inicializar.
    std::string cadena_texto2 = "Hola, mundo"; // Declaración de una variable de tipo cadena de texto llamada "cadena_texto2" inicializada con el texto "Hola, mundo".

    //-----------------Asignación de Variables-------------------------
    // Asignación de valores a las variables previamente declaradas, según su tipo.
    numero_entero = 7;
    numero_decimal = 17.71828;
    caracter = 'b';
    es_verdadero = true;
    cadena_texto2 = "Asignando valor";

    // Explicación de asignación de variables:
    // - Se declaran variables con un tipo de dato y se pueden asignar valores a esas variables.

    // Impresión de los valores de las variables en la consola
    cout << "Entero: " << numero_entero << endl;
    cout << "Double: " << numero_decimal << endl;
    cout << "Caracter: " << caracter << endl;
    cout << "Bool Verdadero: " << es_verdadero << endl;
    cout << "Cadena de texto: " << cadena_texto << "\n";

    // Usando printf para imprimir en C
    printf("Entero 2: %d\n", numero_entero2);
    printf("Double 2: %lf\n", numero_decimal2);
    printf("Caracter 2: %c\n", caracter2);
    printf("Bool falso: %d\n", es_falso); // Imprime 0 para false y 1 para true
    printf("Cadena de texto 2: %s\n", cadena_texto2.c_str());

    // Solicitar datos al usuario

    printf("\n");
    printf("---------------Ingreso de datos en consola------------------\n");

    string Myname;
    int Myage;

    cout << "Ingresa tu nombre: ";
    cin >> Myname; // Solicita al usuario que ingrese su nombre y almacena el valor en la variable "Myname".

    cout << "Ingresa tu edad: ";
    scanf("%d", &Myage); // Solicita al usuario que ingrese su edad y almacena el valor en la variable "Myage".

    cout << "Nombre: " << Myname << endl; // Muestra el nombre ingresado.
    cout << "Edad: " << Myage << endl; // Muestra la edad ingresada.

    printf("\n");
    printf("---------------Sentencia If------------------\n");

    // Estructura condicional "if". Comprueba la edad ingresada y muestra mensajes correspondientes.
    if (Myage < 18) { // Si Myage es menor de 18, ejecuta el bloque de código siguiente.
        if (Myage > 0) { // Si Myage es mayor que 0 (edad válida), ejecuta este bloque.
            printf("Eres menor de edad, estás joven :)\n");
        } else { // Si Myage no es mayor que 0, ejecuta este bloque.
            printf("No es una edad válida\n");
        }
    } else if (Myage >= 18 && Myage <= 20) { // Si Myage está entre 18 y 20, ejecuta este bloque.
        printf("Eres mayor de edad, estás empezando la adultez :)\n");
    } else if (Myage >= 21 && Myage <= 25) { // Si Myage está entre 21 y 25, ejecuta este bloque.
        printf("Eres mayor de edad, ya estás en los 20 :)\n");
    } else if (Myage > 25) { // Si Myage es mayor que 25, ejecuta este bloque.
        printf("Ya estás grande\n");
    }

    printf("\n");
    printf("---------------Bucle While ------------------\n");

    int contar = 0;

    // Bucle "while". Itera mientras contar sea menor que 10 y muestra un contador.
    while (contar < 10) { // Mientras contar sea menor que 10, ejecuta el siguiente bloque.
        contar = contar + 1; // Incrementa el valor de contar en 1.
        cout << "contador en while: " << contar << "\n"; // Muestra el valor de contar en la consola.
    }

    int contar_Do = 10;

    printf("\n");
    printf("---------------Bucle Do While ------------------\n");

    // Bucle "do-while". Muestra un contador en orden descendente.
    do { // Ejecuta el siguiente bloque al menos una vez y luego verifica la condición.
        cout << "contador en Do while: " << contar_Do << "\n"; // Muestra el valor de contar_Do.
        contar_Do = contar_Do - 1; // Decrementa el valor de contar_Do en 1.
    } while (contar_Do > 0); // Si contar_Do es mayor que 0, repite el ciclo.

    printf("\n");
    printf("---------------Bucle For ------------------\n");

    int Tabla_Multi;
    int inicio;
    int final_tabla;

    // Solicitar al usuario un número para la tabla de multiplicar y un rango de inicio y fin.
    cout << "Ingrese un número para la tabla de multiplicar: ";
    cin >> Tabla_Multi; // Solicita al usuario el número para la tabla de multiplicar.

    cout << "Ingrese desde donde se verá la tabla: ";
    cin >> inicio; // Solicita al usuario el valor de inicio.

    cout << "Ingrese hasta donde se verá la tabla: ";
    cin >> final_tabla; // Solicita al usuario el valor de final_tabla.

    // Bucle "for" para imprimir la tabla de multiplicar.
    cout << "Tabla de multiplicar del " << Tabla_Multi << ":\n";
    for (int i = inicio; i <= final_tabla; ++i) { // Inicializa i con el valor de inicio y repite mientras i sea menor o igual a final_tabla.
        cout << Tabla_Multi << " x " << i << " = " << Tabla_Multi * i << std::endl; // Muestra la tabla de multiplicar.
    }

    printf("\n");
    printf("---------------Procedimiento------------------\n");

    // Llamada al procedimiento "imprimirMensaje" con un mensaje como argumento.
    imprimirMensaje("Hola desde función");

    printf("\n");
    printf("---------------Función------------------\n");

    // Llamada a la función "sumar" con argumentos y almacenamiento del resultado en "resultado".
    int resultado = sumar(10, 30);

    std::cout << "La suma es: " << resultado << endl; // Muestra el resultado de la suma.

    // Llamada a la función "MultiplicaX10" con un argumento y almacenamiento del resultado en "resultado2".
    int resultado2 = MultiplicaX10(10);

    std::cout << "El resultado de la multiplicación x10 es: " << resultado2 << endl; // Muestra el resultado de la multiplicación.

    return 0; // Devolvemos 0 para indicar que el programa ha terminado con éxito.
}

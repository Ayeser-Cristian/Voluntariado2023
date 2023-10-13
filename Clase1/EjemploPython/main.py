'''
Declaración de variables en Python:
En Python, puedes declarar variables simplemente asignándoles un valor. No necesitas especificar su tipo de antemano.
A continuación, se muestra un ejemplo de cómo declarar variables y asignarles valores:

nombre = "Juan"  # Declaramos una variable llamada "nombre" y le asignamos el valor "Juan".
edad = 30  # Declaramos una variable llamada "edad" y le asignamos el valor 30.

Indentación en Python:
La indentación se utiliza para estructurar el código en bloques o estructuras. En Python, la indentación es obligatoria.
En lugar de usar llaves como en otros lenguajes, Python utiliza la indentación para definir el alcance de las estructuras.
Aquí se muestra un ejemplo de cómo se usa la indentación para crear un bloque de código:

if edad >= 18:
    # Este bloque se ejecutará si la condición (edad mayor o igual a 18) es verdadera.
    print(f"{nombre} es mayor de edad.")  # La función "print" está indentada y pertenece al bloque if.
else:
    # Este bloque se ejecutará si la condición es falsa.
    print(f"{nombre} es menor de edad.")  # La función "print" también está indentada y pertenece al bloque else.

Observa que la indentación (espacios o tabulaciones al principio de una línea) es fundamental en Python para
determinar qué líneas de código pertenecen a un bloque en particular. 

En el código anterior, la indentación es de 4 espacios por convención, pero podría ser otro número de espacios o tabulaciones.
Lo importante es que sea consistente en todo el código.

'''
# Inicializamos una lista vacía llamada "mi_lista" para almacenar datos ingresados por el usuario.
mi_lista = []

# Definimos una función llamada "mostrar_menu" que muestra un menú al usuario y devuelve su selección.
def mostrar_menu():
    # Imprimimos líneas en blanco para una mejor presentación.
    print("")
    print("============Menu======================")
    print("|    1. Calculadora Básica           |")
    print("|    2. Generar Tabla de Multiplicar |")
    print("|    3. Ingresar Datos a la Lista    |")
    print("|    4. Mostrar Datos de la Lista    |")
    print("|    5. Salir                        |")
    print("======================================")
    
    # Solicitamos al usuario que seleccione una opción y guardamos su elección.
    seleccion = input("Selecciona una opción: ")
    print("")  # Imprimimos una línea en blanco para una mejor presentación.
    
    return seleccion

# Definimos la función "generar_tabla_multiplicar" para crear una tabla de multiplicar.
def generar_tabla_multiplicar():
    # Solicitamos al usuario un número base y el límite para la tabla de multiplicar.
    numero = input("Ingresa un número para generar la tabla de multiplicar: ")
    limite = int(input("Ingresa el límite de la tabla de multiplicar: "))

    # Imprimimos la tabla de multiplicar desde 1 hasta el límite especificado.
    print(f"Tabla de multiplicar del {numero} hasta {limite}:")
    for i in range(1, limite + 1):
        resultado = int(numero) * i
        print(f"{numero} x {i} = {resultado}")

# Definimos la función "calculadora_basica" para realizar operaciones matemáticas.
def calculadora_basica(operacion: str, num1: float, num2: float):
    if operacion == "+":
        resultado = num1 + num2
    elif operacion == "-":
        resultado = num1 - num2
    elif operacion == "*":
        resultado = num1 * num2
    elif operacion == "/":
        # Verificamos si el segundo número es cero para evitar una división por cero.
        if num2 == 0:
            print("Error: No se puede dividir por cero.")
            return
        resultado = num1 / num2
    else:
        print("Operación no válida.")
        return

    # Imprimimos el resultado de la operación matemática.
    print(f"Resultado: {num1} {operacion} {num2} = {resultado}")

# Definimos la función "ingresar_datos_a_lista" para agregar datos a la lista "mi_lista".
def ingresar_datos_a_lista():
    dato = input("Ingresa un dato para la lista: ")
    mi_lista.append(dato)  # Agregamos el dato ingresado a la lista.
    print(f"'{dato}' ha sido agregado a la lista.")

# Definimos la función "mostrar_datos_de_lista" para mostrar los datos almacenados en la lista.
def mostrar_datos_de_lista():
    if len(mi_lista) == 0:
        print("La lista está vacía.")
    else:
        print("Contenido de la lista:")
        cantidad = 1
        for item in mi_lista:
            print(str(cantidad) + "). ", item)  # Muestra el número de elemento y el dato
            cantidad += 1

# Inicio del programa principal
if __name__ == "__main__":
    # Bucle principal que se ejecuta mientras el usuario no elija salir.
    while True:
        seleccion = mostrar_menu()  # Llamamos a la función para mostrar el menú y obtener la selección del usuario.
        
        if seleccion == "1":
            operacion = input("Selecciona una operación (+, -, *, /): ")
            num1 = float(input("Ingresa el primer número: "))
            num2 = float(input("Ingresa el segundo número: "))
            
            # Llamamos a la función "calculadora_basica" para realizar operaciones matemáticas.
            calculadora_basica(operacion, num1, num2)
            
        elif seleccion == "2":
            # Llamamos a la función "generar_tabla_multiplicar" para crear una tabla de multiplicar.
            generar_tabla_multiplicar()
        elif seleccion == "3":
            # Llamamos a la función "ingresar_datos_a_lista" para agregar datos a la lista.
            ingresar_datos_a_lista()
        elif seleccion == "4":
            # Llamamos a la función "mostrar_datos_de_lista" para mostrar los datos de la lista.
            mostrar_datos_de_lista()
        elif seleccion == "5":
            # Salimos del programa si el usuario elige la opción 5.
            print("Saliendo del programa. ¡Hasta luego!")
            break
        else:
            print("Opción no válida. Por favor, selecciona una opción válida (1-5).")


'''
Este es un comentario
de múltiples líneas
en Python.
Puedes escribir tantas líneas como desees aquí.
'''

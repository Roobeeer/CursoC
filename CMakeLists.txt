cmake_minimum_required(VERSION 3.29)
project(Curso_C C)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/ejecutables")
set(CMAKE_C_STANDARD 11)

add_executable(Curso_C Teoria/variables.c
        Ejercicios/NameDateNumber.c
        Teoria/MathFuncs.c
        Ejercicios/CircunferenciaCirculo.c
        Ejercicios/Hipotenusa.c
        Teoria/If.c
        Teoria/switch.c
        Ejercicios/ConversionTemperatura.c
        Ejercicios/CalculadoraSimple.c
        Teoria/OperadoresLogicos.c
        Teoria/Funciones.c
        Teoria/Ternarias.c
        Teoria/StringFcs.c
        Teoria/Bucles.c
        Teoria/arrays.c
        Teoria/EstructurasTypedef.c
        Teoria/EstructurasArray.c
        Teoria/enum.c
        Ejercicios/RandomNumbers.c
        Ejercicios/NumerosIguales.c
        Ejercicios/DosMatricesInversas.c
        Ejercicios/DosMatricesInversas.c
        Teoria/Memorias.c
        Teoria/Punteros.c
        Ejercicios/EjerciciosDePunteros/AccesoVariable.c
        Ejercicios/EjerciciosDePunteros/ContarString.c
        Ejercicios/EjerciciosDePunteros/UsodeMalloc.c
        Ejercicios/EjerciciosDePunteros/SumarArrayConPtr.c
        Ejercicios/EjsTema2/1.c
        Ejercicios/EjsTema2/2.c
        Ejercicios/EjsTema2/4.c
        Ejercicios/EjsTema2/5.c
        Ejercicios/EjsTema2/6.c
        Ejercicios/EjsTema2/Asignaturas/NotasAlumno.h
        Ejercicios/EjsTema2/Asignaturas/NotasAlumno.c
        EXAMENES/2223MatricesDiferentes.c
        EXAMENES/2021P4.c
        Ejercicios/ArrayOpsBasicas.c
        Ejercicios/EjsTema2/MatrizTraspuesta.c
        Ejercicios/EjsTema2/ArrayPunteros.c
        Ejercicios/EjsTema2/MallocFreeMedia.c
        Ejercicios/EjsTema2/StructConH.c
        Ejercicios/EjsTema2/StructConH.h
        Teoria/ErAdri.c
)


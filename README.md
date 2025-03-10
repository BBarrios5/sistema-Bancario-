Proyecto de Cuenta Bancaria

Este proyecto implementa un sistema de cuentas bancarias en C++ donde los usuarios pueden realizar depósitos, retiros, consultar saldo y cambiar de cuenta. También se aplican penalizaciones por inactividad y bloqueo de cuenta tras múltiples intentos fallidos de retiro.

Características

Manejo de hasta 30 cuentas bancarias.

Soporte para cuentas normales y especiales.

Depósitos y retiros con restricciones según el tipo de cuenta.

Bloqueo automático tras múltiples intentos fallidos de retiro.

Advertencias de saldo bajo.

Aplicación de tasas de interés tras periodos de inactividad.

Interfaz en consola con menú interactivo.

Requisitos

Compilador C++ (g++, MSVC, Clang, etc.).

Visual Studio o cualquier otro entorno de desarrollo compatible.

Instalación y Ejecución

Clonar el repositorio

git clone https://github.com/tuusuario/cuenta-bancaria.git
cd cuenta-bancaria

Compilar el programa

g++ main.cpp -o banco

Ejecutar el programa

./banco

Uso del Programa

Al ejecutar el programa, se presentará un menú interactivo con las siguientes opciones:

Depositar

Retirar

Consultar saldo

Cambiar cuenta

Salir

El usuario debe ingresar el número de cuenta y luego interactuar con las opciones del menú.

#include <iostream>
#include <iomanip>

using namespace std;

#define MAX_INACTIVIDAD 6 

// Clase que representa una cuenta bancaria
class CuentaBancaria {
private:
	double saldo; // Saldo actual de la cuenta
	bool activa; // Indica si la cuenta esta activa
	bool bloqueada; // Indica si la cuenta esta bloqueada por intentos fallidos
	int retirosFallidos; // Contador de intentos fallidos de retiro
	bool esEspecial; // Indica si la cuenta es especial (restricciones en retiros)
	double tasaInteres; // Tasa de interes aplicada a depositos tras inactividad
	int contadorInactividad; // Contador de ciclos de inactividad
	double penalizacionInactividad; // Monto de penalizacion por inactividad
	double limiteMuyBajo; // Limite para advertencia de saldo extremadamente bajo
	double limiteBajo; // Limite para advertencia de saldo bajo
	int limiteInteresInactividad; // Numero de ciclos antes de aplicar interes

public:
	// Constructor de la cuenta bancaria
	CuentaBancaria(double saldoInicial, bool _activa, bool _esEspecial) {
		saldo = (saldoInicial >= 0) ? saldoInicial : 0;
		activa = _activa;
		bloqueada = false;
		retirosFallidos = 0;
		esEspecial = _esEspecial;
		tasaInteres = 0.02;
		contadorInactividad = 0;
		penalizacionInactividad = 10.0;
		limiteMuyBajo = 20.0;
		limiteBajo = 100.0;
		limiteInteresInactividad = 5;
	}

	// Metodo para depositar dinero en la cuenta
	void depositar(double monto) {
		if (bloqueada || !activa) {
			cout << "Operacion no permitida. Cuenta bloqueada o inactiva." << endl;
			return;
		}
		if (monto <= 0) {
			cout << "Monto invalido." << endl;
			return;
		}
		cout << fixed << setprecision(2);
		if (contadorInactividad >= limiteInteresInactividad) {
			double interes = monto * tasaInteres;
			saldo += (monto + interes);
			cout << "Deposito exitoso. Se aplico interes: " << interes << ". Saldo actual: " << saldo << endl;
		}
		else {
			saldo += monto;
			cout << "Deposito exitoso. Saldo actual: " << saldo << endl;
		}
		contadorInactividad = 0;
	}

	// Metodo para retirar dinero de la cuenta
	void retirar(double monto) {
		if (bloqueada || !activa) {
			cout << "Operacion no permitida. Cuenta bloqueada o inactiva." << endl;
			return;
		}
		if (monto <= 0) {
			cout << "Monto invalido." << endl;
			return;
		}
		if (esEspecial && monto > (saldo * 0.5)) {
			cout << "Cuenta especial: No se puede retirar mas del 50% del saldo." << endl;
			return;
		}
		if (monto > saldo) {
			cout << "Fondos insuficientes. Retiro fallido." << endl;
			if (++retirosFallidos > 3) {
				bloqueada = true;
				cout << "Cuenta bloqueada por multiples intentos fallidos." << endl;
			}
			return;
		}
		saldo -= monto;
		retirosFallidos = 0;
		contadorInactividad = 0;
		cout << fixed << setprecision(2);
		cout << "Retiro exitoso. Saldo actual: " << saldo << endl;
		if (saldo <= limiteMuyBajo) {
			cout << "ADVERTENCIA: Saldo extremadamente bajo." << endl;
		}
		else if (saldo <= limiteBajo) {
			cout << "Advertencia: Saldo bajo." << endl;
		}
	}

	// Metodo para verificar la inactividad de la cuenta y aplicar penalizaciones
	void verificarInactividad() {
		if (++contadorInactividad > MAX_INACTIVIDAD) {
			if (saldo >= penalizacionInactividad) {
				saldo -= penalizacionInactividad;
				cout << "Penalizacion por inactividad aplicada. Nuevo saldo: " << saldo << endl;
			}
			else {
				cout << "Saldo insuficiente para aplicar penalizacion por inactividad." << endl;
			}
			contadorInactividad = 0;
		}
	}

	// Metodo para mostrar informacion de la cuenta
	void mostrarInformacionDeCuenta(int numeroCuenta) {
		cout << fixed << setprecision(2);
		cout << "-----------------------------------\n";
		cout << "Numero de cuenta: " << numeroCuenta << endl;
		cout << "Saldo actual: Q" << saldo << endl;
		cout << "Estado: " << (activa ? "Activa" : "Inactiva") << endl;
		cout << "Estado de la cuenta: " << (bloqueada ? "Bloqueada" : "Operativa") << endl;
		cout << "Tipo de cuenta: " << (esEspecial ? "Especial" : "Normal") << endl;
		cout << "-----------------------------------\n";
	}
};

// Funcion principal que maneja la interaccion con el usuario

int main() {
	int opcion, numCuenta;
	double monto;
	CuentaBancaria cuenta1(1000, false, false);
	CuentaBancaria cuenta2(1000, true, false);
	CuentaBancaria cuenta3(1000, true, true);
	CuentaBancaria cuenta4(1000, true, true);
	CuentaBancaria cuenta5(1000, true, true);
	CuentaBancaria cuenta6(1000, true, true);
	CuentaBancaria cuenta7(1000, true, true);
	CuentaBancaria cuenta8(1000, true, true);
	CuentaBancaria cuenta9(1000, true, true);
	CuentaBancaria cuenta10(1000, false, false);
	CuentaBancaria cuenta11(1000, true, true);
	CuentaBancaria cuenta12(1000, true, true);
	CuentaBancaria cuenta13(1000, true, true);
	CuentaBancaria cuenta14(1000, true, true);
	CuentaBancaria cuenta15(1000, true, true);
	CuentaBancaria cuenta16(1000, true, false);
	CuentaBancaria cuenta17(1000, true, true);
	CuentaBancaria cuenta18(1000, true, true);
	CuentaBancaria cuenta19(1000, true, true);
	CuentaBancaria cuenta20(1000, false, true);
	CuentaBancaria cuenta21(1000, true, true);
	CuentaBancaria cuenta22(1000, true, true);
	CuentaBancaria cuenta23(1000, true, true);
	CuentaBancaria cuenta24(1000, true, true);
	CuentaBancaria cuenta25(1000, false, true);
	CuentaBancaria cuenta26(1000, true, true);
	CuentaBancaria cuenta27(1000, true, true);
	CuentaBancaria cuenta28(1000, true, true);
	CuentaBancaria cuenta29(1000, true, true);
	CuentaBancaria cuenta30(1000, true, true);

	cout << "Ingrese el numero de cuenta: ";
	cin >> numCuenta;

	CuentaBancaria* cuentaActiva = (numCuenta == 1) ? &cuenta1 : &cuenta2;

	do {
		cout << "\n1. Depositar\n2. Retirar\n3. Consultar saldo\n4. Cambiar Cuenta\n5. Salir\n";
		cin >> opcion;

		switch (opcion) {
		case 1:
			cout << "Ingrese monto a depositar: ";
			cin >> monto;
			if (numCuenta == 1) {
				cuenta1.depositar(monto);
			}
			else if (numCuenta == 2) {
				cuenta2.depositar(monto);
			}
			else if (numCuenta == 3) {
				cuenta3.depositar(monto);
			}
			else if (numCuenta == 4) {
				cuenta4.depositar(monto);
			}
			else if (numCuenta == 5) {
				cuenta5.depositar(monto);
			}
			else if (numCuenta == 6) {
				cuenta6.depositar(monto);
			}
			else if (numCuenta == 7) {
				cuenta7.depositar(monto);
			}
			else if (numCuenta == 8) {
				cuenta8.depositar(monto);
			}
			else if (numCuenta == 9) {
				cuenta9.depositar(monto);
			}
			else if (numCuenta == 10) {
				cuenta10.depositar(monto);
			}
			else if (numCuenta == 11) {
				cuenta11.depositar(monto);
			}
			else if (numCuenta == 12) {
				cuenta12.depositar(monto);
			}
			else if (numCuenta == 13) {
				cuenta13.depositar(monto);
			}
			else if (numCuenta == 14) {
				cuenta14.depositar(monto);
			}
			else if (numCuenta == 15) {
				cuenta15.depositar(monto);
			}
			else if (numCuenta == 16) {
				cuenta16.depositar(monto);
			}
			else if (numCuenta == 17) {
				cuenta17.depositar(monto);
			}
			else if (numCuenta == 18) {
				cuenta18.depositar(monto);
			}
			else if (numCuenta == 19) {
				cuenta19.depositar(monto);
			}
			else if (numCuenta == 20) {
				cuenta20.depositar(monto);
			}
			else if (numCuenta == 21) {
				cuenta21.depositar(monto);
			}
			else if (numCuenta == 22) {
				cuenta22.depositar(monto);
			}
			else if (numCuenta == 23) {
				cuenta23.depositar(monto);
			}
			else if (numCuenta == 24) {
				cuenta24.depositar(monto);
			}
			else if (numCuenta == 25) {
				cuenta25.depositar(monto);
			}
			else if (numCuenta == 26) {
				cuenta26.depositar(monto);
			}
			else if (numCuenta == 27) {
				cuenta27.depositar(monto);
			}
			else if (numCuenta == 28) {
				cuenta28.depositar(monto);
			}
			else if (numCuenta == 29) {
				cuenta29.depositar(monto);
			}
			else if (numCuenta == 30) {
				cuenta30.depositar(monto);
			}
			break;
		case 2:
			cout << "Ingrese monto a retirar: ";
			cin >> monto;
			if (numCuenta == 1) {
				cuenta1.retirar(monto);
			}
			else if (numCuenta == 2) {
				cuenta2.retirar(monto);
			}
			else if (numCuenta == 3) {
				cuenta3.retirar(monto);
			}
			else if (numCuenta == 4) {
				cuenta4.retirar(monto);
			}
			else if (numCuenta == 5) {
				cuenta5.retirar(monto);
			}
			else if (numCuenta == 6) {
				cuenta6.retirar(monto);
			}
			else if (numCuenta == 7) {
				cuenta7.retirar(monto);
			}
			else if (numCuenta == 8) {
				cuenta8.retirar(monto);
			}
			else if (numCuenta == 9) {
				cuenta9.retirar(monto);
			}
			else if (numCuenta == 10) {
				cuenta10.retirar(monto);
			}
			else if (numCuenta == 11) {
				cuenta11.retirar(monto);
			}
			else if (numCuenta == 12) {
				cuenta12.retirar(monto);
			}
			else if (numCuenta == 13) {
				cuenta13.retirar(monto);
			}
			else if (numCuenta == 14) {
				cuenta14.retirar(monto);
			}
			else if (numCuenta == 15) {
				cuenta15.retirar(monto);
			}
			else if (numCuenta == 16) {
				cuenta16.retirar(monto);
			}
			else if (numCuenta == 17) {
				cuenta17.retirar(monto);
			}
			else if (numCuenta == 18) {
				cuenta18.retirar(monto);
			}
			else if (numCuenta == 19) {
				cuenta19.retirar(monto);
			}
			else if (numCuenta == 20) {
				cuenta20.retirar(monto);
			}
			else if (numCuenta == 21) {
				cuenta21.retirar(monto);
			}
			else if (numCuenta == 22) {
				cuenta22.retirar(monto);
			}
			else if (numCuenta == 23) {
				cuenta23.retirar(monto);
			}
			else if (numCuenta == 24) {
				cuenta24.retirar(monto);
			}
			else if (numCuenta == 25) {
				cuenta25.retirar(monto);
			}
			else if (numCuenta == 26) {
				cuenta26.retirar(monto);
			}
			else if (numCuenta == 27) {
				cuenta27.retirar(monto);
			}
			else if (numCuenta == 28) {
				cuenta28.retirar(monto);
			}
			else if (numCuenta == 29) {
				cuenta29.retirar(monto);
			}
			else if (numCuenta == 30) {
				cuenta30.retirar(monto);
			}
			break;
		case 3:
			if (numCuenta == 1) {
				cuenta1.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 2) {
				cuenta2.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 3) {
				cuenta3.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 4) {
				cuenta4.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 5) {
				cuenta5.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 6) {
				cuenta6.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 7) {
				cuenta7.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 8) {
				cuenta8.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 9) {
				cuenta9.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 10) {
				cuenta10.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 11) {
				cuenta11.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 12) {
				cuenta12.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 13) {
				cuenta13.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 14) {
				cuenta14.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 15) {
				cuenta15.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 16) {
				cuenta16.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 17) {
				cuenta17.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 18) {
				cuenta18.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 19) {
				cuenta19.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 20) {
				cuenta20.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 21) {
				cuenta21.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 22) {
				cuenta22.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 23) {
				cuenta23.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 24) {
				cuenta24.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 25) {
				cuenta25.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 26) {
				cuenta26.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 27) {
				cuenta27.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 28) {
				cuenta28.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 29) {
				cuenta29.mostrarInformacionDeCuenta(numCuenta);
			}
			else if (numCuenta == 30) {
				cuenta30.mostrarInformacionDeCuenta(numCuenta);
			}
			break;
		case 4:
			cout << "Ingrese el numero de cuenta: ";
			cin >> numCuenta;
			break;
		case 5:
			cout << "Saliendo..." << endl;
			break;
		default:
			cout << "Opcion invalida." << endl;
		}
	} while (opcion != 5);

	return 0;
}


#include <iostream>
using namespace std;

class CuentaBancaria {
private:
    double saldo;

public:
    CuentaBancaria(double _saldo) {
        saldo = _saldo;
    }

    void depositar(double monto) {
        saldo += monto;
        cout << "Deposito exitoso, saldo actual: " << saldo << endl;
    }

    void retirar(double monto) {
        if (monto > saldo) {
            cout << "Fondos insuficientes" << endl;
        }
        else {
            saldo -= monto;
            cout << "Retiro exitoso, saldo actual: " << saldo << endl;
        }
    }

    void mostrarSaldo() {
        cout << "Su saldo es: " << saldo << endl;
    }
};

int main() {
    int opcion;
    double monto;

    CuentaBancaria cuenta1(1000);
    CuentaBancaria cuenta2(1000);
    CuentaBancaria cuenta3(1000);
    CuentaBancaria cuenta4(1000);
    CuentaBancaria cuenta5(1000);
    CuentaBancaria cuenta6(1000);
    CuentaBancaria cuenta7(1000);
    CuentaBancaria cuenta8(1000);
    CuentaBancaria cuenta9(1000);
    CuentaBancaria cuenta10(1000);
    CuentaBancaria cuenta11(1000);
    CuentaBancaria cuenta12(1000);
    CuentaBancaria cuenta13(1000);
    CuentaBancaria cuenta14(1000);
    CuentaBancaria cuenta15(1000);
    CuentaBancaria cuenta16(1000);
    CuentaBancaria cuenta17(1000);
    CuentaBancaria cuenta18(1000);
    CuentaBancaria cuenta19(1000);
    CuentaBancaria cuenta20(1000);
    CuentaBancaria cuenta21(1000);
    CuentaBancaria cuenta22(1000);
    CuentaBancaria cuenta23(1000);
    CuentaBancaria cuenta24(1000);
    CuentaBancaria cuenta25(1000);
    CuentaBancaria cuenta26(1000);
    CuentaBancaria cuenta27(1000);
    CuentaBancaria cuenta28(1000);
    CuentaBancaria cuenta29(1000);
    CuentaBancaria cuenta30(1000);

    int numCuenta;

    cout << "ingrese el numero de cuenta:";
    cin >> numCuenta;

    do {
		cout << "\nBienvenido al Banco XXX\n";
		cout << "Cuenta: " << numCuenta << endl;
		if (numCuenta < 1 || numCuenta > 30) {
			cout << "Numero de cuenta invalido, intente nuevamente" << endl;
			continue;
		}

        cout << "\nIngrese la opcion:\n1. Depositar\n2. Retirar\n3. Consultar saldo\n4. Cambiar Cuenta\n5. Salir\n";
        cin >> opcion;

        switch (opcion) {
        case 1: // Depositar
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
        case 2: // Retirar
            cout << "Ingrese el monto a retirar: ";
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
        case 3: // Consultar saldo
			if (numCuenta == 1) {
				cuenta1.mostrarSaldo();
			}
			else if (numCuenta == 2) {
				cuenta2.mostrarSaldo();
			}
			else if (numCuenta == 3) {
				cuenta3.mostrarSaldo();
			}
			else if (numCuenta == 4) {
				cuenta4.mostrarSaldo();
			}
			else if (numCuenta == 5) {
				cuenta5.mostrarSaldo();
			}
			else if (numCuenta == 6) {
				cuenta6.mostrarSaldo();
			}
			else if (numCuenta == 7) {
				cuenta7.mostrarSaldo();
			}
			else if (numCuenta == 8) {
				cuenta8.mostrarSaldo();
			}
			else if (numCuenta == 9) {
				cuenta9.mostrarSaldo();
			}
			else if (numCuenta == 10) {
				cuenta10.mostrarSaldo();
			}
			else if (numCuenta == 11) {
				cuenta11.mostrarSaldo();
			}
			else if (numCuenta == 12) {
				cuenta12.mostrarSaldo();
			}
			else if (numCuenta == 13) {
				cuenta13.mostrarSaldo();
			}
			else if (numCuenta == 14) {
				cuenta14.mostrarSaldo();
			}
			else if (numCuenta == 15) {
				cuenta15.mostrarSaldo();
			}
			else if (numCuenta == 16) {
				cuenta16.mostrarSaldo();
			}
			else if (numCuenta == 17) {
				cuenta17.mostrarSaldo();
			}
			else if (numCuenta == 18) {
				cuenta18.mostrarSaldo();
			}
			else if (numCuenta == 19) {
				cuenta19.mostrarSaldo();
			}
			else if (numCuenta == 20) {
				cuenta20.mostrarSaldo();
			}
			else if (numCuenta == 21) {
				cuenta21.mostrarSaldo();
			}
			else if (numCuenta == 22) {
				cuenta22.mostrarSaldo();
			}
			else if (numCuenta == 23) {
				cuenta23.mostrarSaldo();
			}
			else if (numCuenta == 24) {
				cuenta24.mostrarSaldo();
			}
			else if (numCuenta == 25) {
				cuenta25.mostrarSaldo();
			}
			else if (numCuenta == 26) {
				cuenta26.mostrarSaldo();
			}
			else if (numCuenta == 27) {
				cuenta27.mostrarSaldo();
			}
			else if (numCuenta == 28) {
				cuenta28.mostrarSaldo();
			}
			else if (numCuenta == 29) {
				cuenta29.mostrarSaldo();
			}
			else if (numCuenta == 30) {
				cuenta30.mostrarSaldo();
			}
            break;
		case 4: // Cambiar de cuenta
			cout << "Ingrese el número de cuenta: ";
			cin >> numCuenta;
			if (numCuenta < 1 || numCuenta > 30) {
				cout << "Numero de cuenta invalido, intente nuevamente" << endl;
				continue;
			}
			break;
		case 5: // Salir
			cout << "Saliendo del sistema..." << endl;
			break;
        default:
            break;
        }
    } while (opcion != 5);

    return 0;
}


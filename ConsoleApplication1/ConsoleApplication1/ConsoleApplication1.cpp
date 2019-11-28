#include <time.h>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int saldoactual, num;
	double  apuesta;
	string nombre, desicion;
	cout << "ingrese su nombre: ";
	cin >> nombre;
	cout << "ingrese su saldo actual: ";
	cin >> saldoactual;
	do
	{
		num = rand() % 2;
		cout << "cuanto desea apostar: ";
		cin >> apuesta;
		if (num == 1)
			if (saldoactual >= apuesta)
			{
				saldoactual = saldoactual + apuesta;
				cout << nombre << " tu ganancia es de " << apuesta << endl;
				saldoactual = saldoactual - apuesta;
				cout << nombre << "tu perdida es de " << apuesta << endl;
				cout << "saldoactual => " << saldoactual << endl;
			}
			else
			{
				cout << "No puedes apostar";
			}
		if (saldoactual >=1)
		cout << nombre << " deseas seguir apostando: "; cin >> desicion;
		num = rand() % 2;
		cout << "cuanto desea apostar: ";
		cin >> apuesta;
			if (saldoactual >= apuesta)
				if (num == 1)
			{
				saldoactual = saldoactual + apuesta;
				cout << nombre << " tu ganancia es de " << apuesta << endl;
				saldoactual = saldoactual - apuesta;
				cout << nombre << "tu perdida es de " << apuesta << endl;
				cout << "saldoactual => " << saldoactual << endl;
			}
			else
			{
				cout << "No puedes apostar";
			}


	} while (desicion != "no");
	return 0;
}

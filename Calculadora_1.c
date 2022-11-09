#include <iostream>
#include <math.h>

using namespace std;

int main() {
	while (true) {
		int opcao;
		float n1, n2, resultado;
		cout << "Bem vindo a calculadora! Insira a sua escolha para comecar.\n";
		cout << "1-Soma\n";
		cout << "2-subtracao\n";
		cout << "3-Multiplicacao\n";
		cout << "4-Divisao\n";
		cout << "5-Potencia\n";
		cout << "6-Raiz Quadrada\n";
		cout << "7-Media\n\n";
		cout << "> ";
		cin >> opcao;
		if (opcao == 6) {
			cout << "Digite o numero a utilizar\n> ";
			cin >> n1;
			resultado = sqrt(n1);
		}
		else {
			cout << "Digite os numeros a utilizar.\nNumero 1:\n> ";
			cin >> n1;
			cout << "Numero 2:\n> ";
			cin >> n2;
			switch (opcao) {
			case 1:
				resultado = n1 + n2;
			case 2:
				resultado = n1 - n2;
			case 3:
				resultado = n1 * n2;
			case 4:
				resultado = n1 / n2;
			case 5:
				resultado = pow(n1, n2);
			case 7:
				resultado = (n1 + n2) / 2;				
			}
			if(!resultado){
				cout << "Opcao invalida! Tente denovo.";
			}
		}

		if (resultado != NULL) {
			cout << "O resultado e "<<resultado;
		}
		else {
			break;
		}
	}
}

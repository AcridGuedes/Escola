#include <iostream>
#include <math.h>

int main(){
	while (true) {
		using namespace std;

		int op, nx, ny;
		float n1, n2;

		cout << "\nBem vindo a calculadora do Ivo, Gui e Joao!\n\n";
		cout << "1-Soma\n";
		cout << "2-Subtracao\n";
		cout <<"3-Multiplicacao\n";
		cout << "4-Divisão\n";
		cout << "5-Potencia\n";
		cout << "6-Raiz Quadrada\n";
		cout << "7-Media\n";
		cout << "8-Resto da divisao\n\n";
		cout << "Para comecar escolha uma operacao -> ";
		cin >> op;
				switch (op) {
		case 1:
			cout << "Escolha os numeros a utilizar\n\n";
			cout << "1-> ";
			cin >> n1;
			cout << "2-> ";
			cin >> n2;
			cout << "O resultado e -> " << n1 + n2;
			break;
		case 2:
			cout << "Escolha os numeros a utilizar\n\n";
			cout << "1-> ";
			cin >> n1;
			cout << "2-> ";
			cin >> n2;
			cout << "O resultado e -> " << n1 - n2;
			break;
		case 3:
			cout << "Escolha os numeros a utilizar\n\n";
			cout << "1-> ";
			cin >> n1;
			cout << "2-> ";
			cin >> n2;
			cout << "O resultado e -> " << n1 * n2;
			break;
		case 4:
			cout << "Escolha os numeros a utilizar\n\n";
			cout << "1-> ";
			cin >> n1;
			cout << "2-> ";
			cin >> n2;
			cout << "O resultado e -> " << n1 / n2;
			break;
		case 5:
			cout << "Escolha os numeros a utilizar\n\n";
			cout << "1-> ";
			cin >> n1;
			cout << "2-> ";
			cin >> n2;
			cout << "O resultado e -> " << pow(n1, n2);
			break;
		case 6:
			cout << "Escolha os numeros a utilizar\n\n";
			cout << "1-> ";
			cin >> n1;
			cout << "2-> ";
			cin >> n2;
			cout << "O resultado e -> " << sqrt(n1) << ";" << sqrt(n2);
			break;
		case 7:
			cout << "Escolha os numeros a utilizar\n\n";
			cout << "1-> ";
			cin >> n1;
			cout << "2-> ";
			cin >> n2;
			cout << "O resultado e -> " << (n1 + n2) / 2;
			break;
		case 8:
			cout << "Escolha os numeros a utilizar\n\n";
			cout << "1-> ";
			cin >> nx;
			cout << "2-> ";
			cin >> ny;
			cout << "O resultado e -> " << nx % ny;
			break;
		}

				cout << "\n\nObrigado por usar esta calculadora mal programada <3!\n\n";
				cout << "\n<=========================================================>\n\n";
	}

		return 0;
	

}

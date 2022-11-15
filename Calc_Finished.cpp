#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	while (true) {
		int choice, op;
		float nums[5], total, operador;

		cout << "Bem vindo a pior calculadora feita. Boa sorte!!\n";
		cout << "1-Soma\n";
		cout << "2-Subtracao\n";
		cout << "3-Multiplicacao\n";
		cout << "4-Divisao\n";
		cout << "5-Media\n\n";
		cout << "Escolhe a operacao.\n> ";
		cin >> op;
		cout << "Quantos numeros gostarias de usar?\n> ";
		cin >> choice;

		switch (op) {
		case 1:
			total = 0;
			for (int i = 0; i < choice; i++) {
				cout << "Escolhe os numeros!\n> ";
				cin >> nums[i];

			}
			for (int x = 0; x < choice; x++) {
				total = total + nums[x];
			}

			cout << "O total e " << total << "\n\n";
			break;
		case 2:
			float operador;
			if (choice > 1) {
				cout << "Escolhe os numeros!\n> ";
				cin >> operador;
				total = operador;
				for (int i = 2; i <= choice; i++) {
					cout << "Escolhe os numeros!\n> ";
					cin >> operador;
					total = total - operador;
				}
				cout << "O total e " << total << "\n\n";

			}
			break;
		case 3:
			total = 1;
			for (int i = 0; i < choice; i++) {
				cout << "Escolhe os numeros!\n> ";
				cin >> nums[i];

			}
			for (int x = 0; x < choice; x++) {
				total = total * nums[x];
			}

			cout << "O total e " << total << "\n\n";
			break;
		case 4:
			if (choice > 1) {
				cout << "Escolhe os numeros!\n> ";
				cin >> operador;
				total = operador;
				for (int i = 2; i <= choice; i++) {
					cout << "Escolhe os numeros!\n> ";
					cin >> operador;
					total = total / operador;
				}
				cout << "O total e " << total << "\n\n";
				break;
		case 5:
			total = 0;
			for (int i = 0; i < choice; i++) {
				cout << "Escolhe os numeros!\n> ";
				cin >> nums[i];

			}
			for (int x = 0; x < choice; x++)
				total = total + nums[x];
			cout << "O resultado e " << total / choice << "\n\n";

			break;
			}
			cout << "Obrigado por usar a calculadora!! Feito por Ivo, Joao, Guilherme.";
		}	
	}
	return 0;
}

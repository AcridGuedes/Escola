#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	while (true) {
		int choice, op;
		float nums[5], total;

		cout << "Welcome to the worst calculator. Have fun!!\n";
		cout << "1-Sum(Working)\n";
		cout << "2-Subtraction(Work in progress)\n";
		cout << "3-Multiplication(Working)\n";
		cout << "4-Division(Working)\n";
		cout << "5-Avarege(Working)\n\n";
		cout << "Choose the operation.\n> ";
		cin >> op;
		cout << "How many numbers would you like to use?\n> ";
		cin >> choice;

		switch (op) {
		case 1:
			total = 0;
			for (int i = 0; i < choice; i++) {
				cout << "Choose the numbers!\n> ";
				cin >> nums[i];

			}
			for (int x = 0; x < choice; x++) {
				total = total + nums[x];
			}

			cout << "O total e " << total << "\n\n";
			break;
		case 2:
			for (int i = 0; i < choice; i++) {
				cout << "Choose the numbers!\n> ";
				cin >> nums[i]; 

			}
			for (int x = 0; x < choice; x++) {
				total = nums[0];
				total = total - nums[x];
				cout << total<<"\n\n";

			}
			cout << "O total e " << total << "\n\n";
			break;
		case 3:
			total = 1;
			for (int i = 0; i < choice; i++) {
				cout << "Choose the numbers!\n> ";
				cin >> nums[i];

			}
			for (int x = 0; x < choice; x++) {
				total = total * nums[x];
			}

			cout << "O total e " << total << "\n\n";
			break;
		case 4:
			total = 0;
			for (int i = 0; i < choice; i++) {
				cout << "Choose the numbers!\n> ";
				cin >> nums[i];

			}
			for (int x = 0; x < choice; x++) {
				total = nums[0];
				total = total / nums[x];
			}
			cout << "O total e " << total << "\n\n";
			break;
		case 5:
			total = 0;
			for (int i = 0; i < choice; i++) {
				cout << "Choose the numbers!\n> ";
				cin >> nums[i];

			}
			for (int x = 0; x < choice; x++)
				total = total + nums[x];
			cout << "The result is " << total / choice << "\n\n";

			break;
		}
	}
	return 0;

}

#include <iostream>
#include <math.h>



using namespace std;



int main() {
    while (true) {
        int opcao, qntd_nr;
        float n1, n2, n3, n4;



       cout << "\nCalculadora criada por Ivo, Guilherme e Joao\n";
        cout << "\nEscolha quantos numeros quer utilizar -> ";
        cin >> qntd_nr;
        switch (qntd_nr) {
        case 1:
            cout << "1-Raiz Quadrada\n\n";
            cout << "Escolha a operacao -> ";
            cin >> opcao;
            cout << "Escolha o numero a utilizar -> ";
            cin >> n1;
            cout << "O resultado e ->" << sqrt(n1) << "\n";
            break;
        case 2:
            cout << "1-Soma\n";
            cout << "2-Subtracao\n";
            cout << "3-Multiplicacao\n";
            cout << "4-Divisao\n";
            cout << "5-Potencia\n";
            cout << "6-Raiz Quadrada\n";
            cout << "7-Media\n";
            cout << "8-Resto da divisao (ainda falta acabar)\n\n";
            cout << "Escolha a operacao -> ";
            cin >> opcao;
            cout << "\n\n";
            cout << "Escolha os numeros a utilizar\n\n";
            cout << "1 -> ";
            cin >> n1;
            cout << "2 -> ";
            cin >> n2;
            switch (opcao) {
            case 1:
                cout << "\nO resultado e " << n1 + n2;
                break;
            case 2:
                cout << "\nO resultado e " << n1 - n2;
                break;
            case 3:
                cout << "\nO resultado e " << n1 * n2;
                break;
            case 4:
                cout << "\nO resultado e " << n1 / n2;
                break;
            case 5:
                cout << "\nO resultado e" << pow(n1, n2);
                break;
            case 6:
                cout << "\nO resultado e " << sqrt(n1) << " ; " << sqrt(n2);
                break;
            case 7:
                cout << "\nO resultado e " << (n1 + n2) / 2;
                break;
            case 8:
                cout <<"\nFalta acabar";
                break;
            }
        break;
        case 3:
            cout << "1-Soma\n";
            cout << "2-Subtracao\n";
            cout << "3-Multiplicacao\n";
            cout << "4-Divisao\n";
            cout << "5-Raiz Quadrada\n";
            cout << "6-Media\n\n";
            cout << "Escolha a operacao -> ";
            cin >> opcao;
            cout << "\n\n";
            cout << "Escolha os numeros a utilizar\n\n";
            cout << "1 -> ";
            cin >> n1;
            cout << "2 -> ";
            cin >> n2;
            cout << "3 -> ";
            cin >> n3;
            switch (opcao) {
            case 1:
                cout << "\nO resultado e " << n1 + n2 + n3;
                break;
            case 2:
                cout << "\nO resultado e " << n1 - n2 - n3;
                break;
            case 3:
                cout << "\nO resultado e " << n1 * n2* n3;
                break;
            case 4:
                cout << "\nO resultado e " << n1 / n2 / n3;
                break;
            case 5:
                cout << "\nO resultado e " << sqrt(n1) << " ; " << sqrt(n2) << " ; " << sqrt(n3);
                break;
            case 6:
                cout << "\nO resultado e " << (n1 + n2 + n3) / 3;
                break;
          
            }
                break;
            
        case 4:
            cout << "1-Soma\n";
            cout << "2-Subtracao\n";
            cout << "3-Multiplicacao\n";
            cout << "4-Divisao\n";
            cout << "5-Raiz Quadrada\n";
            cout << "6-Media\n\n";
            cout << "Escolha a operacao -> ";
            cin >> opcao;
            cout << "\n\n";
            cout << "Escolha os numeros a utilizar\n\n";
            cout << "1 -> ";
            cin >> n1;
            cout << "2 -> ";
            cin >> n2;
            cout << "3 -> ";
            cin >> n3;
            cout << "4 -> ";
            cin >> n4;
            switch (opcao) { 
            case 1:
                cout << "\nO resultado e " << n1 + n2 + n3 + n4;
                break;
            case 2:
                cout << "\nO resultado e " << n1 - n2 - n3 - n4;
                break;
            case 3:
                cout << "\nO resultado e " << n1 * n2 * n3 * n4;
                break;
            case 4:
                cout << "\nO resultado e " << n1 / n2 / n3 / n4;
                break;
            case 5:
                cout << "\nO resultado e " << sqrt(n1) << " ; " << sqrt(n2) << " ; " << sqrt(n3) << " ; " << sqrt(n4);
                break;
            case 6:
                cout << "\nO resultado e " << (n1 + n2 + n3) / 3;
                break;
            }
            
        
            
        }
        cout << "\nObrigado por usar a calculadora";
        cout << "\n\n";
    }
    return 0;
   
}

#include <iostream>
#include <math.h>
using namespace std;





int main() {
    int n1, n2, op;
    n1=0;
    n2=0;
    cout<<"1-Soma\n";
    cout<<"2-Subtração\n";
    cout<<"3-Multiplicação";
    cout<<"4-Divisão\n";
    cout<<"5-Potencia\n";
    cout<<"6-Raiz quadradad\n";
    cout<<"Escolha uma operação -> ";
    cin>>op;
    cout<<"Escolha o primeiro número a utilizar -> ";
  cin>>n1;
      cout<<"Escolha o segundo número a utilizar -> ";
      cin>>n2;
    switch (op){
    case 1:
        cout<<"O resultado é -> "<<n1+n2;
        break;
    case 2:
        cout<<"O resultado é -> "<<n1-n2;
        break;
    case 3:
        cout<<"O resultado é -> "<<n1*n2;
        break;
    case 4:
        cout<<"O resultado é -> "<<n1/n2;
        break;
    case 5:
        cout<<"O resultado é -> "<<pow(n1,n2);
        break;
    case 6:
        cout<<"O resultado é ->"<<sqrt(n1);
    
    }
    
    
    return 0;
}

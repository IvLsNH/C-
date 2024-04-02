#include <iostream>
using namespace std;

int main()
{

    cout << "Calculadora" << endl;
    
    
        while(true) {
            
            char operacao;
            int num1;
            int num2;
            
            cout << "Digite o primeiro valor:" << endl;
            cin >> num1;
            
            cout << "Digite o segundo valor:" << endl;
            cin >> num2;
            
            cout << "Use uma das operações (+, -, *, /)" << endl;
            cin >> operacao;
            
            switch(operacao) {
                case '+':
                    cout << "O resultado da operção foi " << num1 + num2 << endl;
                break;
                case '-':
                    cout << "O resultado da operção foi " << num1 - num2 << endl;
                break;
                case '*':
                    cout << "O resultado da operção foi " << num1 * num2 << endl;
                break;
                case '/':
                    cout << "O resultado da operção foi " << num1 / num2 << endl;
                break;
                default:
                   cout << "Digite --> +, -, *, / <--" << endl;
                   
                break;
            }
        }
        
}

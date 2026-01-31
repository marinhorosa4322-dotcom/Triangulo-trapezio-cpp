#include <iostream>

using namespace std;

int main() {
    int opcao;
    float base, haltura, basemenor, basemaior, area;

    cout << "--- Calculador de Areas ---" << endl;
    cout << "1 - Calcular area de um triangulo" << endl;
    cout << "2 - Calcular area de um trapezio" << endl;
    cout << "3 - Sair" << endl;
    cout << "Escolha uma opcao: ";
    cin >> opcao;

    if (opcao == 1) {
        cout << "Digite a base: ";
        cin >> base;
        cout << "Digite a altura: ";
        cin >> haltura;

        if (base <= 0 || haltura <= 0) {
            cout << "Erro: Valores invalidos!" << endl;
        } else {
            area = (base * haltura) / 2.0;
            cout << "A area do triangulo e: " << area << endl;
        }
    } 
    else if (opcao == 2) {
        cout << "Digite a base maior: ";
        cin >> basemaior;
        cout << "Digite a base menor: ";
        cin >> basemenor;
        cout << "Digite a altura: ";
        cin >> haltura;

        if (basemaior <= 0 || basemenor <= 0 || haltura <= 0) {
            cout << "Erro: Valores invalidos!" << endl;
        } else {
            area = ((basemaior + basemenor) * haltura) / 2.0;
            cout << "A area do trapezio e: " << area << endl;
        }
    } 
    else if (opcao == 3) {
        cout << "Saindo..." << endl;
    } 
    else {
        cout << "Escolha invalida!" << endl;
    }

    return 0;
}

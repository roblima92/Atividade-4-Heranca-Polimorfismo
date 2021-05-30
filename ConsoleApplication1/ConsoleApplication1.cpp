#include "Circulo.hpp"
#include "Retangulo.hpp"
#include "Triangulo.hpp"

int main() {
	int opcao, raio, base, altura;

	Circulo circulo;
	Retangulo retangulo;
	Triangulo triangulo;

	do {
		cout << "\n**** Menu CALCULO DE AREA ****\n";
		cout << "\n**** Selecione a forma geometrica: ****\n";
		cout << "1> Circulo\n";
		cout << "2> Retangulo\n";
		cout << "3> Triangulo\n";
		cout << "4> Sair\n";
		cout << "\n\nDigite a opcao da forma geometrica que voce gostaria de calcular a area: \n";
		cin >> opcao;

		switch (opcao) {
		case 1:
			cout << "Informe o raio do circulo:\n";
			cin >> raio;
			cout << "Area do Circulo:" << circulo.caculaArea(raio, 0) << "\n\n\n\n\n\n\n";
			break;
		case 2:
			cout << "Informe a altura do retangulo:\n";
			cin >> altura;
			cout << "Informe a base do retangulo:\n";
			cin >> base;
			cout << "Area do Retangulo:" << retangulo.caculaArea(base, altura) << "\n\n\n\n\n\n\n";
			break;
		case 3:
			cout << "Informe a altura do triangulo:\n";
			cin >> altura;
			cout << "Informe a base do triangulo:\n";
			cin >> base;
			cout << "Area do Triangulo:" << triangulo.caculaArea(base, altura) << "\n\n\n\n\n\n\n";
			break;
		case 4:
			cout << "Obrigado pela participacao!!! \n\n\n\n\n\n\n";
			break;
		default:
			cout << "Opcao invalida.\n\n\n";
			break;
		}

	} while (opcao != 4);


	return (0);
}
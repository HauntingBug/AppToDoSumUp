// ConsoleApplication1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

//#include <iostream> // Biblioteca para entrada e saída de dados.

#include "pch.h"
#include <iostream> // Biblioteca para entrada e saída de dados.

#include <string> // Biblioteca para manipulação de strings.

using namespace std; // Usamos o namespace para simplificar a sintaxe.

// Função principal do programa.

int main() {

	// Passo 2: Declaração das variáveis para armazenar os valors.


	int valor1; // Variável para armazenar o primeiro valor.

	int valor2; // Variável para armazenar o segundo valor.

	// Passo 3: Solicitar ao usuário o primeiro valor.

	cout << "Por favor, insira o primeiro valor para a soma: ";

	cin >> valor1; // Lê uma linha completa de entrada do usuário.

	// Passo 4: Solicitar ao usuário o segundo valor.

	cout << "Por favor, insira o seu segundo valor para a soma";

	cin >> valor2; // Lê outra linha completa de entrada do usuário.

	// Passo 5: Combinar e exibir o valor completo.

	int resultado; // Variável para armazenar o resultado da soma.

	resultado = valor1 + valor2;


	cout << "Os valores somados sao: " << valor1 << " e " << valor2

		<< "." << endl;

	cout << "O resultado da soma e: " << resultado << endl;


	return 0;

}

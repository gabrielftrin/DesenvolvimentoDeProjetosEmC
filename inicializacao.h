#include "validacoes.h"

//Inicializar a execucao do programa
bool inicializarPrograma() {

	//Configurar local para permitir acentuacao de caracteres especiais
	if (!configurarLocal())
	{
		imprimirListaDeErros();
		pausa();
		sairDoPrograma();
		return false;
	}

	//Executar programa...


	return true;
}

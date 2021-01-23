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
			
	int numero= 0;
	if(validarNumeroNatural(numero)){
		printf("verdadeiro");
	} else {
		printf("falso");
	}
	
	
	
	
	
	return true;
}

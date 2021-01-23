#include <stdio.h> //Biblioteca padrao
#include <stdbool.h> //Definicao do tipo Booleano
#include <stdlib.h> //define varias funcoes para executar funcoes gerais (malloc, system, etc.)
#include <string.h> // Manipular strings
#include <ctype.h> //declara varias funcoes que sao úteis para manipular caracteres. (isdigit() por exemplo)
#include <locale.h> //Configurar local/regiao/país
#include "funcoesdosistema.h"

//Definir constantes a serem usadas no projeto
#define MENSAGEM_DE_ERRO "Mensagem de erro do compilador"

//Definicao tipo string como ponteiro de caractere
typedef char* string;

/*//Definicao tipos de dado abstrato
typedef struct tipoDeDado
{
	struct tipoDeDado* tipo;
}tipoDeDado;*/

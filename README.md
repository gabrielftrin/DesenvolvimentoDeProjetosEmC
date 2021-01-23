# DesenvolvimentoDeProjetosEmC
Bibliotecas e orientações sobre desenvolvimento de projetos em linguagem C

## Primeiros passos
Montagem do ambiente

Primeiro passo: Possuir conta no GitHub
Se não possuir, basta criá-la seguindo os passos

Acessar o endereço: https://github.com/join?ref_cta=Sign+up&ref_loc=header+logged+out&ref_page=%2F&source=header-home

Criar repositório do projeto
Criar readme
licensa MIT
gitigore usando template do C

Instalar programas necessários

Ambiente Windows

Instalar o Visual Studio básico

Instalar o gcc via MinGW (pacote basico gcc)

Clonar o repositório no visual studio via conta no git
(Verificar caminho em que o repositório está sendo salvo)

Usar as janela "gerenciador de soluções", "Alterações do git" e "Power Sheel do desenvolvedor" (terminal)

Escrever o readme com informações do projeto
sempre enviar alterações através da aba "alterações do git" através do push

Criar arquivo main.c com estrutura básica
'#include <stdio.h>

void main (){

}

Salvar ATALHO do executavel do gcc no repositório com nome "gcc.lnk"

Abra o termina. Verifique se o terminal está aberto na pasta do repositório. Se não estiver, procure-a.
A pasta padrão que normalmente o repositório fica armazenado é C:/User/%USERNAME%/source/repos/NOME_DO_REPOSITORIO)

execute o comando "gcc.lnk -o executavel.exe %CD%\main.c" (sem as aspas) para compilar o código

Na pasta em que o gcc está instalado (normalmente C:/MinGW/Bin), procure pelo arquivo "executavel.exe"
Crie um atalho deste arquivo na pasta do repositório com o nome "executavel.lnk"

execute o arquivo "compilar.bat". este arquivo vai compilar o código, copiar e abrir o executavel

para executar o arquivo compilar.bat escreva na linha de comando .\compilar.bat
pode acontecer de algum antivirus barrar o programar por suspeita de virus.
caso isso aconteça, desative o antivirus enquanto estiver trabalhando no projeto
agora sempre que quiser compilar o código basta executar este arquivo .bat

montagem do ambiente concluída

#Arquivos

primeiro arquivo: funcoesdosistema.h

Esta biblioteca possui 3 funcoes que usam apenas metodos/funcoes reservadas do C e que não depende de nenhum outro arquivo para funcionar.
pausa: Exibe uma pausa na tela para que o usuario possa ler e tomar decisoes
limparTela: Limpa tudo que estiver na tela
sairDoPrograma: Fecha o programa

segundo arquivo: estruturas.h

Esta biblioteca é responsavel por incluir as bibliotecas padrão do C que serão utilizadas. Além de definir contantes, variáveis globais e tipos abstratos de dados.
Nenhuma função deve ser implementada nestabiblioteca. Apenas includes e declarações de variáveis. este arquivo possui um include da biblioteca funcoesdosistema.h

terceiro arquivo: excecao.h

essa biblioteca possui um controle de tratamento de erros (exceções). esse arquivo possui um include da biblioteca estruturas.h
ela possui 4 funções

lançarErro: Armazenar codigo de erro num vetor de erros
mostrarErrosNaTela: Imprimir lista de mensagens de erro lancadas
imprimirListaDeErros: Preencher vetor de mensagens de erro de acordo com o codigo e mostrar erros na tela
limparErros: Limpar a lista de mensagens de erro e a lista de codigos de erro

próximo arquivo: validacoes.h
esta biblioteca possui valições mais genéricas de situações comuns no uso da linguagem. São diversar funções úteis. esse arquivo possui um include do biblioteca excecao.h

configurarLocal: Alterar localizacao do programa para a localizacao do sistema para permitir uso de caracteres especiais
limparBufferDoTeclado: Limpa o buffer do teclado (entrada padrao)
validarAlocacaoDeMemoria: Validar alocacao de memoria, retorna falso se o ponteiro for nulo
validarNumeroNatural: Retorna verdadeiro se for um número natural
validarNumeroNaturalPositivo: Retorna verdadeiro se for um número natural maior que zero
lerNumeroInteiroDoTeclado: Retorna o ponteiro do número lido ou NULL em caso de erro (caso leia um número maior que int o ponteiro retornara o VALOR -1)
lerNumeroNaturalDoTeclado: Retorna o número NATURAL lido ou EOF (-1) em caso de erro
lerTextoDoTeclado: Recebe a quantidade de caracteres que devem ser lidos. Retorna nulo se der erro ou o ponteiro da string lida.

proximo arquivo: inicialização.h

esta biblioteca contem as funcoes iniciais do programa. nele escrevemos o que o programa deve fazer inicialmente.
este arquivo tem um include pra biblioteca validacoes.h. Porém, caso seja necessário, podem ser criados novos arquivos para modularizar o código.
se for este o caso, o arquivo inicialização deve ter um include deste novo arquivo (apenas 1 include) e o novo arquivo deve ter o include de validações.h

por fim, o arquivo main.c 
este arquivo apenas roda o programa e xibe erros na tela caso existam

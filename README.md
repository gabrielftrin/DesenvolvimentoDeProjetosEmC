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

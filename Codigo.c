#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menu = 1;
int comc = 0;
int escolha = 100;
int dicaca = 1;
int sair;

int main(){
setlocale (LC_ALL, "Portuguese");

while(menu == 1){

printf(" Escolha uma das op��es de busca a baixo!\n 1) Dicas de linguagem C.\n 2) Dicas de linguagem C++.\n 3) Dicas de linguagem Python.\n 4) Dicas de linguagem Java.\n 5) Dicas de linguagem JavaScript.\n 6) Dicas de linguagem Ruby.\n 7) Dicas de linguagem PHP.\n 8) Dicas de linguagem TypeScript.\n 9) Nenhuma das op��es!\n");
scanf("%d", &escolha);

sair = escolha;

if (escolha == 1){
    printf(" voc� escolheu a op��o 1\n");
    dicac();
}

if (sair == 9){
    printf(" voc� escolheu a op��o 9.\n");
    printf(" Para fechar repita o 9.\n Se deseja retornar, digite outro numero.\n");
scanf("%d", &menu);
        if(menu == 9){
            return 0;
        } else {
            menu = 1;
        }
}

}


}

int dicac () {
int define1 = 0;
escolha = 3;
    while (dicaca == 1) {
        printf("Aqui voc� encontrar� algumas dicas sobre comandos de linguagem C.\n 1) para defini��o de: tipos de variaveis, variaveis, arrays e struct.\n 2) para defini��o de: biblioteca, fun��es e grupos.\n 3) para defini��o de: ponteiros e manipuladores de aloca��o.\n");
        scanf("%d", &define1);
            while (define1 == 1){
                printf(" Os tipos de vari�veis determinam como os dados s�o armazenados na mem�ria e quais opera��es podem ser realizadas com eles. Exemplos comuns de tipos de vari�veis incluem inteiros (int), n�meros de ponto flutuante (float), texto (string), booleanos (bool), entre outros. A escolha do tipo de vari�vel a ser usada depende do tipo de dado que voc� deseja representar e das opera��es que deseja realizar.\n\n Vari�veis s�o espa�os na mem�ria reservados para armazenar valores que podem ser usados e manipulados em um programa.\n\n Os arrays s�o usados para armazenar m�ltiplos valores em uma �nica vari�vel, organizados em uma sequ�ncia indexada. Cada elemento do array pode ser acessado por um �ndice espec�fico. Os arrays s�o �teis quando voc� precisa lidar com cole��es de dados, como listas de n�meros, strings ou objetos. Eles fornecem uma maneira eficiente de gerenciar e acessar esses dados de forma organizada.\n\n");
                printf(" Se deseja voltar ao menu anterior digite 1.\n Caso deseje voltar ao menu principal digite 0\n");
                scanf("%d", &escolha);
                while (escolha != 1 && escolha != 0){
                    printf(" Escolha invalida, voc� precisa digitar 1 ou 0\n");
                    scanf("%d", &escolha);
                    if (escolha == 1){
                    define1 = 0;
                    break;
                } else if (escolha == 0) {
                    define1 = 0;
                    return 0;
                }

                    }
                if (escolha == 1){
                    define1 = 0;
                    break;
                } else if (escolha == 0){
                    define1 = 0;
                    return 0;
                }
                }
    }
}

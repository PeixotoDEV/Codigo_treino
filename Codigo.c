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

printf(" Escolha uma das opções de busca a baixo!\n 1) Dicas de linguagem C.\n 2) Dicas de linguagem C++.\n 3) Dicas de linguagem Python.\n 4) Dicas de linguagem Java.\n 5) Dicas de linguagem JavaScript.\n 6) Dicas de linguagem Ruby.\n 7) Dicas de linguagem PHP.\n 8) Dicas de linguagem TypeScript.\n 9) Nenhuma das opções!\n");
scanf("%d", &escolha);

sair = escolha;

if (escolha == 1){
    printf(" você escolheu a opção 1\n");
    dicac();
}

if (sair == 9){
    printf(" você escolheu a opção 9.\n");
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
        printf("Aqui você encontrará algumas dicas sobre comandos de linguagem C.\n 1) para definição de: tipos de variaveis, variaveis, arrays e struct.\n 2) para definição de: biblioteca, funções e grupos.\n 3) para definição de: ponteiros e manipuladores de alocação.\n");
        scanf("%d", &define1);
            while (define1 == 1){
                printf(" Os tipos de variáveis determinam como os dados são armazenados na memória e quais operações podem ser realizadas com eles. Exemplos comuns de tipos de variáveis incluem inteiros (int), números de ponto flutuante (float), texto (string), booleanos (bool), entre outros. A escolha do tipo de variável a ser usada depende do tipo de dado que você deseja representar e das operações que deseja realizar.\n\n Variáveis são espaços na memória reservados para armazenar valores que podem ser usados e manipulados em um programa.\n\n Os arrays são usados para armazenar múltiplos valores em uma única variável, organizados em uma sequência indexada. Cada elemento do array pode ser acessado por um índice específico. Os arrays são úteis quando você precisa lidar com coleções de dados, como listas de números, strings ou objetos. Eles fornecem uma maneira eficiente de gerenciar e acessar esses dados de forma organizada.\n\n");
                printf(" Se deseja voltar ao menu anterior digite 1.\n Caso deseje voltar ao menu principal digite 0\n");
                scanf("%d", &escolha);
                while (escolha != 1 && escolha != 0){
                    printf(" Escolha invalida, você precisa digitar 1 ou 0\n");
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

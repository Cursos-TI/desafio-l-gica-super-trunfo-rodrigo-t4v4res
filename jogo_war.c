// ======================================================================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --- Constantes Globais ---
#define MAX_TERRITORIOS 5

// --- Definição da Estrutura (Struct) ---
struct Territorio
{
    char nome[30];
    char cor[10];
    int tropas;
};

// --- Função para limpar o buffer de entrada ---
void limparBufferEntrada()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// --- Função principal (main) ---
int main()
{
    system ("chcp 65001"); // Adiciona suporte a UTF-8 no console do Windows

    struct Territorio territorios[MAX_TERRITORIOS];
    int totalTerritorios = 0;

    // --- Cadastro de territórios ---
    do
    {
        printf("Digite o nome do %dº território: ", totalTerritorios + 1);
        fgets(territorios[totalTerritorios].nome, sizeof(territorios[totalTerritorios].nome), stdin);

        printf("Digite a cor do %dº território: ", totalTerritorios + 1);
        fgets(territorios[totalTerritorios].cor, sizeof(territorios[totalTerritorios].cor), stdin);

        printf("Digite a quantidade de tropas do %dº território: ", totalTerritorios + 1);
        scanf("%d", &territorios[totalTerritorios].tropas);

        printf("------------------------------------------\n");

        limparBufferEntrada();
        totalTerritorios++;
    } while (totalTerritorios < 5);
    
    printf("Territórios cadastrados com sucesso!\n");

    printf("==========================================\n");

    printf("Pressione Enter para exibir os territórios cadastrados:\n");
    getchar(); // Espera o usuário pressionar Enter antes de continuar

    for (int i = 0; i < totalTerritorios; i++)
    {
        printf("%dº território:\n", i + 1);
        printf("Nome: %s", territorios[i].nome);
        printf("Cor: %s", territorios[i].cor);
        printf("Tropas: %d", territorios[i].tropas);

        printf("\n------------------------------------------\n");
    }
}
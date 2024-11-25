#include <stdio.h>
#include <string.h>
#include <locale.h>


#define MAX_GAME 50
#define FILE_NAME "jogos.dat"

typedef struct {
    int id;
    char nome[50];
    char genero[50];
    int ano;
    double preco;
} Jogos;

int nextId = 1;
Jogos jogos[MAX_GAME];
int totalJogos = 0;

void menu();
void addJogo();
void showJogos();
void updateJogo();
void deleteJogo();
void saveToFile();
void loadFromFile();

int main() {
	setlocale(LC_ALL, ""); 

    int option;
    loadFromFile();

    do {
        menu();
        printf("\nEscolha a opção do menu: \n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                addJogo();
                break;
            case 2:
                showJogos();
                break;
            case 3:
                updateJogo();
                break;
            case 4:
                deleteJogo();
                break;
            case 5:
                menu();
                break;
            case 6:
                saveToFile(); 
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (option != 6);

    return 0;
}

void menu() {
    printf("====================================================\n");
    printf("*       SISTEMA DE JOGOS DE PLAYSTATION 2          *\n");
    printf("*  1. Adicionar um Jogo                            *\n");
    printf("*  2. Visualizar todos os Jogos                    *\n");
    printf("*  3. Atualizar algum Jogo                         *\n");
    printf("*  4. Excluir um Jogo                              *\n");
    printf("*  5. Mostrar o Menu novamente                     *\n");
    printf("*  6. Sair                                         *\n");
    printf("====================================================\n");
}

void addJogo() {
    if (totalJogos >= MAX_GAME) {
        printf("Limite de jogos atingido!\n");
        return;
    }

    Jogos novoJogo;
    novoJogo.id = nextId++;

    printf("Informe o nome do jogo: \n");
    scanf(" %[^\n]%*c", novoJogo.nome);

    printf("Informe o gênero do jogo: \n");
    scanf(" %[^\n]%*c", novoJogo.genero);

    printf("Informe o ano de lançamento do jogo: \n");
    scanf("%d", &novoJogo.ano);

    printf("Informe o preço do jogo: \n");
    scanf("%lf", &novoJogo.preco);

    jogos[totalJogos++] = novoJogo;

    printf("Jogo adicionado com sucesso!\n");
}

void showJogos() {
    int i; 
    if (totalJogos == 0) {
        printf("Nenhum jogo foi adicionado.\n");
        return;
    }

    printf("====================================================\n");
    printf("Lista de Jogos:\n");
    for (i = 0; i < totalJogos; i++) {
        printf("ID: %d\nNome: %s\nGênero: %s\nAno: %d\nPreço: %.2f\n",
               jogos[i].id, jogos[i].nome, jogos[i].genero, jogos[i].ano, jogos[i].preco);
        printf("----------------------------------------------------\n");
    }
}

void updateJogo() {
    int id, found = 0, i; 
    printf("Informe o ID do jogo que deseja atualizar: \n");
    scanf("%d", &id);

    for (i = 0; i < totalJogos; i++) {
        if (jogos[i].id == id) {
            found = 1;
            printf("Atualizando jogo ID %d\n", id);
            printf("Novo nome: ");
            scanf(" %[^\n]%*c", jogos[i].nome);
            printf("Novo gênero: ");
            scanf(" %[^\n]%*c", jogos[i].genero);
            printf("Novo ano: ");
            scanf("%d", &jogos[i].ano);
            printf("Novo preço: ");
            scanf("%lf", &jogos[i].preco);
            printf("Jogo atualizado com sucesso!\n");
            break;
        }
    }

    if (!found) {
        printf("Jogo com ID %d não encontrado.\n", id);
    }
}

void deleteJogo() {
    int id, found = 0, i, j;
    printf("Informe o ID do jogo que deseja excluir: \n");
    scanf("%d", &id);

    for (i = 0; i < totalJogos; i++) {
        if (jogos[i].id == id) {
            found = 1;
            for (j = i; j < totalJogos - 1; j++) {
                jogos[j] = jogos[j + 1];
            }
            totalJogos--;
            printf("Jogo excluído com sucesso!\n");
            break;
        }
    }

    if (!found) {
        printf("Jogo com ID %d não encontrado.\n", id);
    }
}

void saveToFile() {
    FILE *file = fopen(FILE_NAME, "wb");
    if (!file) {
        printf("Erro ao abrir o arquivo para salvar os dados.\n");
        return;
    }

    fwrite(&nextId, sizeof(int), 1, file);
    fwrite(&totalJogos, sizeof(int), 1, file);
    fwrite(jogos, sizeof(Jogos), totalJogos, file);

    fclose(file);
    printf("Dados salvos com sucesso!\n");
}

void loadFromFile() {
    FILE *file = fopen(FILE_NAME, "rb");
    if (!file) {
        printf("Nenhum arquivo encontrado, iniciando com dados vazios.\n");
        return;
    }

    fread(&nextId, sizeof(int), 1, file);
    fread(&totalJogos, sizeof(int), 1, file);
    fread(jogos, sizeof(Jogos), totalJogos, file);

    fclose(file);
    printf("Dados carregados com sucesso!\n");
}


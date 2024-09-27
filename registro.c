#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int id;
    float valor;
    char nome[50];
} Registro;


void adicionarRegistro(const char *nomeArquivo, Registro registro) {
    FILE *arquivo = fopen(nomeArquivo, "ab"); 
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }
    fwrite(&registro, sizeof(Registro), 1, arquivo);
    fclose(arquivo);
}


void lerRegistros(const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "rb"); 
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }
    
    Registro registro;
    printf("Registros armazenados:\n");
    while (fread(&registro, sizeof(Registro), 1, arquivo) == 1) {
        printf("ID: %d, Valor: %.2f, Nome: %s\n", registro.id, registro.valor, registro.nome);
    }
    fclose(arquivo);
}

int main() {
    const char *nomeArquivo = "registros.dat";
    int escolha;
    Registro registro;

    do {
        printf("Escolha uma opcao:\n");
        printf("1. Adicionar novo registro\n");
        printf("2. Visualizar registros existentes\n");
        printf("0. Sair\n");
        printf("Sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Digite o ID: ");
                scanf("%d", &registro.id);
                printf("Digite o Valor: ");
                scanf("%f", &registro.valor);
                printf("Digite o Nome: ");
                scanf("%s", registro.nome);
                adicionarRegistro(nomeArquivo, registro);
                break;

            case 2:
                lerRegistros(nomeArquivo);
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Escolha invalida. Tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}

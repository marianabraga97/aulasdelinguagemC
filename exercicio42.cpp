#include <stdio.h>
#include <string.h>

struct atleta {
    char nome[50], sexo;
    int idade;
    float peso, altura;
};

int main() {
    struct atleta atletas[20];
    int i;

    float somaIdades = 0, somaPesos = 0, mediaIdades, mediaPesos;

    for (i = 0; i < 20; i++) {
        printf("\nCadastro do Atleta %d de %d\n", i + 1, 20);

        printf("Nome: ");
        scanf(" %49[^\n]", atletas[i].nome);

        do {
            printf("Idade: ");
            scanf("%d", &atletas[i].idade);

            if (atletas[i].idade < 1 || atletas[i].idade > 120) {
                printf("Valor invalido! A idade deve estar entre 1 e 120.\n");
            }
        } while (atletas[i].idade < 1 || atletas[i].idade > 120);


        do {
            printf("Peso: ");
            scanf("%f", &atletas[i].peso);

            if (atletas[i].peso <= 0) {
                printf("Valor invalido! O peso deve ser maior que zero.\n");
            }
        } while (atletas[i].peso <= 0);

        do {
            printf("Sexo (M/F): ");
            scanf(" %c", &atletas[i].sexo);

            if (atletas[i].sexo == 'm') atletas[i].sexo = 'M';
            if (atletas[i].sexo == 'f') atletas[i].sexo = 'F';

            if (atletas[i].sexo != 'M' && atletas[i].sexo != 'F') {
                printf("Valor invalido! Digite 'M' para Masculino ou 'F' para Feminino!\n");
            }
        } while (atletas[i].sexo != 'M' && atletas[i].sexo != 'F');

        do {
            printf("Altura (m): ");
            scanf("%f", &atletas[i].altura);

            if (atletas[i].altura < 0.5 || atletas[i].altura > 2.5) {
                printf("Valor invalido! A altura deve estar entre 0.5 e 2.5 (use ponto).\n");
            }
        } while (atletas[i].altura < 0.5 || atletas[i].altura > 2.5);
        
        somaIdades += atletas[i].idade;
        somaPesos += atletas[i].peso;
    }

    mediaIdades = somaIdades / 20;
    mediaPesos = somaPesos / 20;

    printf("\nRELATORIO DE ATLETAS\n");

    printf("\nTodos os Atletas Cadastrados\n");
    for (i = 0; i < 20; i++) {
        printf("Atleta %d: %s | Idade: %d | Peso: %.2fkg | Sexo: %c | Altura: %.2f\n",
               i + 1, atletas[i].nome, atletas[i].idade, atletas[i].peso,
               atletas[i].sexo, atletas[i].altura);
    }

    printf("\nEstatisticas Gerais\n");
    printf("Media das idades: %.2f anos\n", mediaIdades);
    printf("Media dos pesos: %.2f kg\n", mediaPesos);

    printf("\nAtletas do Sexo Feminino\n");
    int encontrouFem = 0;
    for (i = 0; i < 20; i++) {
        if (atletas[i].sexo == 'F') {
            printf("%s (Idade: %d, Altura: %.2f)\n",
                   atletas[i].nome, atletas[i].idade, atletas[i].altura);
            encontrouFem = 1;
        }
    }
    if (!encontrouFem) {
        printf("Nenhum atleta do sexo feminino cadastrado.\n");
    }

    printf("\nAtletas Masculinos (Altura > 1.8m e Peso <= 80kg)\n");
    int encontrouMascEsp = 0;
    for (i = 0; i < 20; i++) {
        if (atletas[i].sexo == 'M' && atletas[i].altura > 1.80 && atletas[i].peso <= 80.0) {
            printf("%s | Altura: %.2fm | Peso: %.2fkg\n",
                   atletas[i].nome, atletas[i].altura, atletas[i].peso);
            encontrouMascEsp = 1;
        }
    }
    if (!encontrouMascEsp) {
        printf("Nenhum atleta masculino atende a estes criterios.\n");
    }

    return 0;
}

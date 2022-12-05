#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao, valor, valor_owner, valor_export;


    float compact_owner = 0.07, compact_export = 0.3;
    float coupe_owner = 0.0, coupe_export = 0.0;
    float sedan_owner = 0.0, sedan_export = 0.0;
    float suv_owner = 0.0, suv_export = 0.0;
    float esportivo_owner = 0.0, esportivo_export = 0.0;
    float super_owner = 0.0, super_export = 0.0;
    float utilitarios_owner = 0.0, utilitarios_export = 0.0;

    char nome_carro[15];

    printf("\n----------------------------------------\n \tCÁLCULO DO VEÍCULO\n----------------------------------------\n");


    do{
        printf("\n\n\tDigite o número modelo do carro:");
        printf("\n1. Compact\n2. Coupe\n3. Sedan\n4. Suv\n5. Esportivo\n6. Super\n7. Utilitários\n");
        printf("\n8. Sair do programa\n");
        printf("Modelo: ");
        scanf("%d", &opcao);

        if (opcao!=8){
            printf("\nNome do carro: ");
            scanf("%s", &nome_carro);
            printf("\nValor do carro: ");
            scanf("%d", &valor);}

        switch(opcao){
        case 1: // compact
            valor_owner = valor-(valor*compact_owner);
            valor_export = valor-(valor*compact_export);

            printf("\n\nCarro: %s\nValor Costumer: %d\nValor Owner: %d\nValor Export: %d", nome_carro, valor, valor_owner, valor_export);
        break;

        case 2: // coupe
            valor_owner = valor-(valor*coupe_owner);
            valor_export = valor-(valor*coupe_export);

            printf("\n\nCarro: %s\nValor Costumer: %d\nValor Owner: %d\nValor Export: %d", nome_carro, valor, valor_owner, valor_export);
        break;

        case 3: // sedan
            valor_owner = valor-(valor*sedan_owner);
            valor_export = valor-(valor*sedan_export);

            printf("\n\nCarro: %s\nValor Costumer: %d\nValor Owner: %d\nValor Export: %d", nome_carro, valor, valor_owner, valor_export);
        break;
        case 4: // suv
            valor_owner = valor-(valor*suv_owner);
            valor_export = valor-(valor*suv_export);

            printf("\n\nCarro: %s\nValor Costumer: %d\nValor Owner: %d\nValor Export: %d", nome_carro, valor, valor_owner, valor_export);
        break;
        case 5: // esportivo
            valor_owner = valor-(valor*esportivo_owner);
            valor_export = valor-(valor*esportivo_export);

            printf("\n\nCarro: %s\nValor Costumer: %d\nValor Owner: %d\nValor Export: %d", nome_carro, valor, valor_owner, valor_export);
        break;
        case 6: // super
            valor_owner = valor-(valor*super_owner);
            valor_export = valor-(valor*super_export);

            printf("\n\nCarro: %s\nValor Costumer: %d\nValor Owner: %d\nValor Export: %d", nome_carro, valor, valor_owner, valor_export);
        break;
        case 7: // utilitários
            valor_owner = valor-(valor*utilitarios_owner);
            valor_export = valor-(valor*utilitarios_export);

            printf("\n\nCarro: %s\nValor Costumer: %d\nValor Owner: %d\nValor Export: %d", nome_carro, valor, valor_owner, valor_export);
        break;
        case 8:
        break;
        default:
            printf("\n\n Opção inválida\n");
        break;

        }
    }while(opcao!=8);

    printf("\n-----------------------------------------\n \tFael\n-----------------------------------------\n");
    system("pause");
}

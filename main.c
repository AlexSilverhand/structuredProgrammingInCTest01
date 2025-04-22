#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    system("Color 0a");
    setlocale(LC_CTYPE, "Spanish");

    int nip, opc;
    char opcc;
    char com;
    int intentos = 3;

    printf("***********************************************************************************");
    printf("\n\t\t\t\tBIENVENIDO");
    printf("\n***********************************************************************************");
    printf("\n\t\t\tProgramación estructurada\n");
    printf("\tExamen práctico 1: SISTEMA ZAPATERIA “FANNY”\n");
    printf("\t\t\tPalos Gaytán Diego Alejandro\n");
    printf("\n***********************************************************************************\n");
    //sleep(5);
    system("cls");

    printf("\n\t\t\tSISTEMA ZAPATERIA “FANNY”");
    while (intentos > 0)
    {

        printf("\n\n\t\tESCRIBA SU NIP: ");
        scanf("%i", &nip);

        if (nip == 123)
        {
            system("cls");
            do
            {
                printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                printf("\t\t1.- ZAPATO DE DESCANZO\n");
                printf("\t\t2.- ZAPATO CON TACON\n");
                printf("\t\t3.- TENIS\n");
                printf("\t\t4.- SALIR DEL SISTEMA\n");

                printf("\n\n\tELIGE UNA OPCION: ");
                scanf("%i", &opc);

                if (opc == 1)
                {
                    system("cls");
                    printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                    printf("\t\tZAPATO DE DESCANZO\n");
                    printf("\t\t1.- Color\n");
                    printf("\t\t2.- Números\n");
                    printf("\t\t3.- Material\n");
                    printf("\t\t4.- Modelo\n");
                    printf("\t\t5.- Precio\n");
                    printf("\t\t6.- observaciones\n");

                    printf("\n\n\tELIGE UNA OPCION: ");
                    scanf("%i", &opc);

                    if (opc == 1)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tColor\n");
                        printf("\t\t1.- Azul\n");
                        printf("\t\t2.- Rojo\n");
                        printf("\t\t3.- Café\n");
                        printf("\t\t4.- Blanco\n");
                        printf("\t\t5.- Negro\n");
                        printf("\t\t6.- Gris\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 2)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tNúmeros\n");
                        printf("\t\t1.- 21 ( 1 par )\n");
                        printf("\t\t2.- 22 ( 2 pares )\n");
                        printf("\t\t3.- 23 ( 3 pares )\n");
                        printf("\t\t4.- 24 ( 4 pares )\n");
                        printf("\t\t5.- 25 y 26 ( 5 pares )\n");
                        printf("\t\t6.- 27 y 28 ( 6 pares )\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 3)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tMaterial\n");
                        printf("\t\t1.- Sintetico\n");
                        printf("\t\t2.- Piel\n");
                        printf("\t\t3.- Mezclilla\n");
                        printf("\t\t4.- Tela\n");
                        printf("\t\t5.- Gamuza\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 4)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tModelos\n");
                        printf("\t\t1.- 11456\n");
                        printf("\t\t2.- 23567\n");
                        printf("\t\t3.- MN45\n");
                        printf("\t\t4.- 12908\n");
                        printf("\t\t5.- 34569\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 5)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tPrecios\n");
                        printf("\t\t1.- 11456: 100.00\n");
                        printf("\t\t2.- 23567: 150.00\n");
                        printf("\t\t3.- MN45: 250.00\n");
                        printf("\t\t4.- 12908: 300.00\n");
                        printf("\t\t5.- 34569: 400:00\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 6)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\tIngrese su comentario: \n");
                        scanf("%s", &com);
                        printf("\n\tcomentario guardado");
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                }
                else if (opc == 2)
                {
                    system("cls");
                    printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                    printf("\t\tZAPATO CON TACON\n");
                    printf("\t\t1.- Color\n");
                    printf("\t\t2.- Números\n");
                    printf("\t\t3.- Material\n");
                    printf("\t\t4.- Modelo\n");
                    printf("\t\t5.- Precio\n");
                    printf("\t\t6.- observaciones\n");

                    printf("\n\n\tELIGE UNA OPCION: ");
                    scanf("%i", &opc);

                    if (opc == 1)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tColor\n");
                        printf("\t\t1.- Azul\n");
                        printf("\t\t2.- Rojo\n");
                        printf("\t\t3.- Café\n");
                        printf("\t\t4.- Blanco\n");
                        printf("\t\t5.- Negro\n");
                        printf("\t\t6.- Gris\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        printf("\n\t¿Seguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        fflush(stdin);
                        system("cls");
                    }
                    else if (opc == 2)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tNúmeros\n");
                        printf("\t\t1.- 21 ( 1 par )\n");
                        printf("\t\t2.- 22 ( 2 pares )\n");
                        printf("\t\t3.- 23 ( 3 pares )\n");
                        printf("\t\t4.- 24 ( 4 pares )\n");
                        printf("\t\t5.- 25 y 26 ( 5 pares )\n");
                        printf("\t\t6.- 27 y 28 ( 6 pares )\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 3)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tMaterial\n");
                        printf("\t\t1.- Sintetico\n");
                        printf("\t\t2.- Piel\n");
                        printf("\t\t3.- Mezclilla\n");
                        printf("\t\t4.- Tela\n");
                        printf("\t\t5.- Gamuza\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 4)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tModelos\n");
                        printf("\t\t1.- 11456\n");
                        printf("\t\t2.- 23567\n");
                        printf("\t\t3.- MN45\n");
                        printf("\t\t4.- 12908\n");
                        printf("\t\t5.- 34569\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 5)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tPrecios\n");
                        printf("\t\t1.- 11456: 100.00\n");
                        printf("\t\t2.- 23567: 150.00\n");
                        printf("\t\t3.- MN45: 250.00\n");
                        printf("\t\t4.- 12908: 300.00\n");
                        printf("\t\t5.- 34569: 400:00\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 6)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\tIngrese su comentario: \n");
                        scanf("%s", &com);
                        printf("\n\tcomentario guardado");
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                }
                else if (opc == 3)
                {
                    system("cls");
                    printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                    printf("\t\tTENIS\n");
                    printf("\t\t1.- Color\n");
                    printf("\t\t2.- Números\n");
                    printf("\t\t3.- Material\n");
                    printf("\t\t4.- Modelo\n");
                    printf("\t\t5.- Precio\n");
                    printf("\t\t6.- observaciones\n");

                    printf("\n\n\tELIGE UNA OPCION: ");
                    scanf("%i", &opc);

                    if (opc == 1)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tColor\n");
                        printf("\t\t1.- Azul\n");
                        printf("\t\t2.- Rojo\n");
                        printf("\t\t3.- Café\n");
                        printf("\t\t4.- Blanco\n");
                        printf("\t\t5.- Negro\n");
                        printf("\t\t6.- Gris\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 2)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tNúmeros\n");
                        printf("\t\t1.- 21 ( 1 par )\n");
                        printf("\t\t2.- 22 ( 2 pares )\n");
                        printf("\t\t3.- 23 ( 3 pares )\n");
                        printf("\t\t4.- 24 ( 4 pares )\n");
                        printf("\t\t5.- 25 y 26 ( 5 pares )\n");
                        printf("\t\t6.- 27 y 28 ( 6 pares )\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 3)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tMaterial\n");
                        printf("\t\t1.- Sintetico\n");
                        printf("\t\t2.- Piel\n");
                        printf("\t\t3.- Mezclilla\n");
                        printf("\t\t4.- Tela\n");
                        printf("\t\t5.- Gamuza\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 4)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tModelos\n");
                        printf("\t\t1.- 11456\n");
                        printf("\t\t2.- 23567\n");
                        printf("\t\t3.- MN45\n");
                        printf("\t\t4.- 12908\n");
                        printf("\t\t5.- 34569\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 5)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\t\tPrecios\n");
                        printf("\t\t1.- 11456: 100.00\n");
                        printf("\t\t2.- 23567: 150.00\n");
                        printf("\t\t3.- MN45: 250.00\n");
                        printf("\t\t4.- 12908: 300.00\n");
                        printf("\t\t5.- 34569: 400:00\n");

                        printf("\n\n\tELIGE UNA OPCION: ");
                        scanf("%i", &opc);
                        fflush(stdin);
                        printf("\n\tSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                    else if (opc == 6)
                    {
                        system("cls");
                        printf("\t\t\tSISTEMA ZAPATERIA “FANNY”\n\n");
                        printf("\tIngrese su comentario: \n");
                        scanf("%s", &com);
                        printf("\ncomentario guardado");
                        fflush(stdin);
                        printf("\nSeguir eligiendo? (s/n): ");
                        scanf("%c", &opcc);
                        system("cls");
                    }
                }
                else if (opc == 4)
                {
                    system("cls");
                    printf("\n\t¡Tenga un buen día!\n\n");
                    printf("\n\n\tPresione <ENTER> para salir...\n\n");
                    return 0;
                }
                else
                {
                    system("cls");
                    fflush(stdin);
                    printf("\n\n\t\tOpción inválida, ¿volver al menú?(s/n): ");
                    scanf("%c", &opcc);
                    system("cls");
                }

            } while (opcc == 's' || opcc == 'S');

        }
        else
        {
            system("cls");

            printf("\n\t\t\tSISTEMA ZAPATERIA “FANNY”");
            printf("\n\n\t\t*******************ERROR*******************\n");
            printf("\n\t\tNIP incorrecto\n");
            intentos--;
            printf("\n\t\tLe quedan %d intentos.\n", intentos);
        }
    }

    if (intentos == 0)
    {
        system("cls");
        printf("\n\t\t\t¡¡¡¡¡¡NIP INCORRECTO!!!!!!…\n");
        printf("\n\tIntentos finalizados\n");
        printf("\n\n\tPRESIONE <ENTER> PARA CONTINUAR…\n\n");
    }
    printf("\n\t¡Tenga un buen día!\n\n");
    printf("\n\n\tPresione <ENTER> para salir...\n\n");
    return 0;
}

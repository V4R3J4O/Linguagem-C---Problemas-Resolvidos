#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int linha, coluna, ligado = 1, jogadas = 0, vencedor = 0;
    int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
    int modo, posicao, adversario = 0;


    int jogo[3][3] = {0};
    
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%02d ",jogo[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    while (jogadas <= 9 && vencedor == 0)
    {
        printf("\nQual a LINHA da casa que deseja jogar: ");
        scanf(" %02d",&linha);
        printf("\nQual a COLUNA da casa que deseja jogar: ");
        scanf(" %02d",&coluna);

        if (jogo[linha][coluna]!=0)
        {
            printf("Esta casa ja esta preechida, por favor tente novamente!\n");
        }
        else
        {
            jogo[linha][coluna] = 1; // JOGADA DO JOGADOR
            jogadas++;

            for (size_t i = 0; i < 3; i++)      // CICLO VERIFICA AS CONDICOES DE VITORIA;
            {
                for (size_t j = 0; j < 3; j++)
                {
                    soma1 += jogo[i][j]; // SOMA AS OS VALORES DA LINHA;
                    soma2 += jogo[j][i]; // SOMA OS VALORES DA COLUNA;
                    if (i == j)
                    {
                        soma3 += jogo[i][j]; // SOMA OS VALORES DA DIAGONAL PRINCIPAL;
                    }
                    if (i + j == 2)
                    {
                        soma4 += jogo[i][j]; // SOMA OS VALORES DA DIAGONAL SECUNDARIA;
                    }    
                }
                
                if (soma1 == 3 || soma1 == -3 || soma2 == 3 || soma2 == -3) // VITORIA LINHA OU COLUNA
                    {
                        if (soma1 == 3)
                        {
                            vencedor = 1;
                            modo = 0;
                            posicao = i;
                        }
                        if (soma1 == - 3)
                        {
                            vencedor = 2;
                            modo = 0;
                            posicao = i;
                        }
                        if (soma2 == 3)
                        {
                            vencedor = 1;
                            modo = 1;
                            posicao = i;
                        }
                        if (soma2 == - 3)
                        {
                            vencedor = 2;
                            modo = 1;
                            posicao = i;
                        }    
                    }
                soma1 = 0;
                soma2 = 0;
            }
            
            if (soma3 == 3 || soma3 == -3 || soma4 == 3 || soma4 == -3) // VITORIA DIAGONAL PRINCIPAL OU DIAGONAL SECUNDARIA
            {
                if (soma3 == 3)
                {
                    vencedor = 1;
                    modo = 2;    
                }
                if (soma3 == - 3)
                {
                    vencedor = 2;
                    modo = 2;    
                }
                if (soma4 == 3)
                {
                    vencedor = 1;
                    modo = 3;    
                }
                if (soma4 == - 3)
                {
                    vencedor = 2;
                    modo = 3;    
                }
                
            }            
            soma3 = 0;
            soma4 = 0;
                                            //     ----------->FIM DO CICLO DE VERIFICACAO! <-----------
            system("cls");
            
            for (size_t i = 0; i < 3; i++)
            {
                for (size_t j = 0; j < 3; j++)
                {
                    printf("%02d  ",jogo[i][j]);
                }
                printf("\n\n");
            }
            printf("\n\n");
            
            sleep(1);
            
            if (vencedor == 0) // JOGADA DO COMPUTADOR;
            {
                for (size_t i = 0; i < 3; i++)
                {
                    for (size_t j = 0; j < 3; j++)
                    {
                        if (jogo[i][j] == 0 && adversario == 0)
                        {
                            jogo[i][j] = -1;
                            jogadas++;
                            adversario = 1;
                        }
                        
                    }
                    
                }
                
            }
            
            adversario = 0;
            
            system("cls");
            for (size_t i = 0; i < 3; i++)
            {
                for (size_t j = 0; j < 3; j++)
                {
                    printf("%02d  ",jogo[i][j]);
                }
                printf("\n\n");
            }
            printf("\n\n");
            
            sleep(1);
            
        }
        

    }
    
    switch (vencedor) // IMPRIMINDO RESULTADO DO JOGO!;
    {
    case 0:
        printf("EMPATE!\n\n");
        break;
    case 1:
        printf("Voce venceu esse jogo!");
        switch (modo)
        {
        case 0:
            printf("\n A linha %02d foi totalmente preenchida por voce!\n\n",posicao);
            break;
        case 1:
            printf("\n A coluna %02d foi totalmente preenchida por voce!\n\n",posicao);
            break;
        case 2:
            printf("\n diagonal principal foi totalmente preenchida por voce!\n\n");
            break;
        case 3:
            printf("\n A diagonal secundaria foi totalmente preenchida por voce!\n\n");
            break;
        
        default:
            break;
        }
        break;
    case 2:
        printf("A maquina venceu esse jogo!");
        switch (modo)
        {
        case 0:
            printf("\n A linha %02d foi totalmente preenchida pela maquina!\n\n",posicao);
            break;
        case 1:
            printf("\n A coluna %02d foi totalmente preenchida pela maquina!\n\n",posicao);
            break;
        case 2:
            printf("\n diagonal principal foi totalmente preenchida pela maquina!\n\n");
            break;
        case 3:
            printf("\n A diagonal secundaria foi totalmente preenchida pela maquina!\n\n");
            break;
        
        default:
            break;
        }
        break;
    default:
        break;
    }
}
    

         
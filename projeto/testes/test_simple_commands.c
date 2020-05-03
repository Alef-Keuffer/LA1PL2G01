/// @file test_simple_commands.c
/// @brief Contém as definições funções que testam se alguns comandos do projeto estão a serem executados corretamente.

#include "Camadas/logica/logica.h"
#include "Camadas/dados/dados.h"
#include <assert.h>
#include "Camadas/interface/io.h"

void commands_winner_is_player1(){
    ESTADO *e = inicializar_estado();
    COORDENADA coord1 =  {'c'-'a','3' -'1'};
    jogar (e, coord1);
    COORDENADA coord2 = {'b'-'a', '2'-'1'};
    jogar (e, coord2);
    COORDENADA coord3 = {'a'-'a', '1'-'1'};
    jogar (e, coord3);
    assert (fim_de_jogo(e)==1 && "commands_winner_is_player1()");
}

void commands_winner_is_player2(){
    ESTADO *e = inicializar_estado();
    COORDENADA coord1 =  {'f'-'a','6' -'1'};
    jogar (e, coord1);
    COORDENADA coord2 = {'g'-'a', '7'-'1'};
    jogar (e, coord2);
    COORDENADA coord3 = {'h'-'a', '8'-'1'};
    jogar (e, coord3);
    assert (fim_de_jogo(e)==2 && "commands_winner_is_player2()");
}

void commands_jogada_invalida(){
    ESTADO *e = inicializar_estado();
    COORDENADA coord1 =  {'e'-'a','7' -'1'};
    assert (jogada_valida(e, coord1)==0 && "commands_jogada_invalida()");
}

void commands_gr_ler_branca(){
    ESTADO *e = inicializar_estado();
    COORDENADA coord1 =  {'d'-'a','5' -'1'};
    jogar (e, coord1);
    COORDENADA coord2 = {'d'-'a', '6'-'1'};
    jogar (e, coord2);
    COORDENADA coord3 = {'c'-'a', '6'-'1'};
    jogar (e, coord3);
    gr(e, "save");
    ler (e, "save");
    assert ((*e).tab[5][2]==BRANCA && "commands_gr_ler_branca");
}

void commands_gr_ler_pretas(){
    ESTADO *e = inicializar_estado();
    COORDENADA coord1 =  {'d'-'a','6' -'1'};
    jogar (e, coord1);
    COORDENADA coord2 = {'d'-'a', '5'-'1'};
    jogar (e, coord2);
    COORDENADA coord3 = {'c'-'a', '5'-'1'};
    jogar (e, coord3);
    gr(e, "save");
    ler (e, "save");
    assert ((*e).tab[5][3]==PRETA &&
            (*e).tab[4][3]==PRETA && "commands_gr_ler_pretas");
}

//void commands_gr_ler_vaias();

void test_simple_commands(){
    commands_winner_is_player1();
    commands_winner_is_player2();
    commands_jogada_invalida();
    commands_gr_ler_branca();
    commands_gr_ler_pretas();
    //commands_gr_ler_vazias();
}

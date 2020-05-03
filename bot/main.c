/// @file main.c
/// @brief As funções do bot são as mesmas do que estão documentadas nas camadas do projeto.

#include "dados.h"
#include "logicaBot.h"
#include "ioBot.h"
#include "interfaceBot.h"

int main(int argc, char *argv[]){
    if(argc == 3){
        char *ficheiroler = argv[1];
        char *ficheirogr = argv[2];
        ESTADO *e = inicializar_estado();
        ler(e, ficheiroler);
        if(!fim_de_jogo(e)) jog(e);
        mensagem_fimdejogo(e);
        gr(e, ficheirogr);
    }
}
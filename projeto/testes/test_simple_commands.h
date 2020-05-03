/// @file test_simple_commands.h
/// @brief Contém comentários para documentação e declaração das funções em test_simple_commands.c

/// @defgroup groupAlpha3 Testes

#ifndef RASTROS_C_TEST_SIMPLE_COMMANDS_H
#define RASTROS_C_TEST_SIMPLE_COMMANDS_H

/// Essa funão deve testar fim_de_jogo().
/// @ingroup groupAlpha3
/// A função executa alguns movimentos e verifica que se fim_de_jogo(e)==1
void commands_winner_is_player1();

/// Essa funão deve testar fim_de_jogo().
/// @ingroup groupAlpha3
//// A função executa alguns movimentos e checa se fim_de_jogo==2
void commands_winner_is_player2();

/// Testa jogada_valida() para um movimento inválido.
/// @ingroup groupAlpha3
void commands_jogada_invalida();

/// Testa se no ficheiro que foi salvo e depois aberto se a casa experada está com a peça branca.
/// @ingroup groupAlpha3
void commands_gr_ler_branca();

/// Verifica que algumas casas estão pretas em um ficheiro que foi salvo de depois lido
/// @ingroup groupAlpha3
void commands_gr_ler_pretas();

/// Função principal a ser chamada para executar todos os testes.
/// @ingroup groupAlpha3
void test_simple_commands();
#endif //RASTROS_C_TEST_SIMPLE_COMMANDS_H

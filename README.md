# Rastros_C

## Identificação dos criadores
### Alunos da Universidade do Minho:
Grupo 01 do turno PL2 (Laboratório de Algoritmia), composto por:
 * Alef Pinto Keuffer         - A91683
 * Pedro Paulo Costa Pereira  - A88062
 
## Objetivo
  Pretende-se implementar o jogo Rastros. Para descobrir as regras do jogo, clique [aqui](http://ludicum.org/jogos/abstr/rastros/ludus-jogos-rastros.pdf/view). O seu programa deverá permitir que dois jogadores, partilhando o mesmo teclado, o possam jogar. Os comandos deverão ser introduzidos através de um interpretador de comandos.

## Estruturação do programa
### Camada de dados
 * acessar_estado
 * dados
 * modificar_estado
### Lógica do programa
 * io
 * logica
### Camada de interface
 * interface

## Progresso por semanas
### Semana 1 (guião 5):
 * *Criação dos módulos*: A princípio, foram criados 4 módulos: 1 para a camada de dados, 2 para a lógica do programa e 1 para a camada de interface. Decidiu-se dividir a lógica do programa em dois módulos para se ter uma melhor ideia de quais funções modificam o estado.
 
 * *Inicializar o estado do jogo*: Tal função se encontra no módulo "dados". Num estado inicial, temos que o jogador 1 é o atual jogador; o número de jogadas é igual a zero; a peça branca se encontra na casa de coordenada e5 e todas as outras casas estão vazias. Como forma de facilitar o processo, inicializou-se, também, a última jogada como e5. **Nota:** houve dificuldade em utilizar o *typedef enum* para enumerar o estado de cada casa, por isso definiu-se *BRANCA*, *PRETA* e *VAZIA* como valores inteiros (utilizando *#define BRANCA 1*, por exemplo).
 
 * *Colocar uma peça branca na casa jogada*: Tal função se encontra no módulo "modificar_estado" (_void atualizar_tab(ESTADO *e, COORDENADA c)_). Consiste simplesmente em mudar o estado da casa no array e->tab. Foi definida de forma que, assumindo que a última jogada já tenha sido atualizada, a peça preta é colocada no lugar da casa branca. Falta validar a jogada.
 
 * *Mostrar o tabuleiro com a jogada efetuada*: Tal função se encontra no módulo "interface". A função imprime o atual estado do tabuleiro (usando o array e->tab), por meio de um ciclo que verifica o estado de cada casa e imprime o char desejado para cada estado.
 
### Semana 2 (guião 6):
#### Contribuições do Alef:
1. Iniciei o processo de documentação com o Doxygen.
   1. Criei o grupo Camada de dados e adicionei os subgrupos "modificar dados" e "accesar dados".
   1. Coloquei as funções de modificar_estado no grupo "Camada de dados" e adicionei breve descrições para cada uma.
1. Implementei o comando Q.
1. Implementei o comando ler.
1. Implementei o comando gr.
1. Implementei o comando movs.

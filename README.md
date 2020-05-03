# Rastros_C

## Identificação dos criadores
### Alunos da Universidade do Minho:
Grupo 01 do turno PL2 (Laboratório de Algoritmia), composto por:
 * Alef Pinto Keuffer         - A91683
 * Pedro Paulo Costa Pereira  - A88062
 * Fernando Maria Bicalho     - A93546
 
## Objetivo
  Pretende-se implementar o jogo Rastros. Para descobrir as regras do jogo, clique [aqui](http://ludicum.org/jogos/abstr/rastros/ludus-jogos-rastros.pdf/view). O seu programa deverá permitir que dois jogadores, partilhando o mesmo teclado, o possam jogar. Os comandos deverão ser introduzidos através de um interpretador de comandos.

## Estruturação do programa
### Camada de dados
 * dados
 * acessar_estado
 * modificar_estado
### Lógica do programa
 * logica
 * auxiliares
### Camada de interface
 * interface
 * io

## Progresso por semanas
### Semana 1 (guião 5):
 * *Criação dos módulos*: A princípio, foram criados 4 módulos: 1 para a camada de dados, 2 para a lógica do programa e 1 para a camada de interface. Decidiu-se dividir a lógica do programa em dois módulos para se ter uma melhor ideia de quais funções modificam o estado.
 
 * *Inicializar o estado do jogo*: Tal função se encontra no módulo "dados". Num estado inicial, temos que o jogador 1 é o atual jogador; o número de jogadas é igual a zero; a peça branca se encontra na casa de coordenada e5 e todas as outras casas estão vazias. Como forma de facilitar o processo, inicializou-se, também, a última jogada como e5. **Nota:** houve dificuldade em utilizar o *typedef enum* para enumerar o estado de cada casa, por isso definiu-se *BRANCA*, *PRETA* e *VAZIA* como valores inteiros (utilizando *#define BRANCA 1*, por exemplo).
 
 * *Colocar uma peça branca na casa jogada*: Tal função se encontra no módulo "modificar_estado" (_void atualizar_tab(ESTADO *e, COORDENADA c)_). Consiste simplesmente em mudar o estado da casa no array e->tab. Foi definida de forma que, assumindo que a última jogada já tenha sido atualizada, a peça preta é colocada no lugar da casa branca. Falta validar a jogada.
 
 * *Mostrar o tabuleiro com a jogada efetuada*: Tal função se encontra no módulo "interface". A função imprime o atual estado do tabuleiro (usando o array e->tab), por meio de um ciclo que verifica o estado de cada casa e imprime o char desejado para cada estado.
 
### Semana 2 (guião 6):
#### Contribuições do Alef:
 * Iniciei o processo de documentação com o Doxygen.
   1. Criei o grupo "Camada de dados" e adicionei os subgrupos "modificar dados" e "accesar dados".
   1. Coloquei as funções de modificar_estado no grupo "Camada de dados" e adicionei breve descrições para cada uma.
 * Implementei o comando Q.
 * Implementei o comando ler.
 * Implementei o comando gr.
 * Implementei o comando movs.

#### Contribuições do Pedro:
 * *Validação da jogada*: Criação da função *jogada_valida* no módulo "logica", que consiste verificar se a casa escolhida está vazia e se é adjacente à casa da última jogada.
 * *Deteção do fim de jogo*: Criação da função *fim_de_jogo* no módulo "logica", que verifica se a peça branca encontra-se na casa final de um dos jogadores ou numa casa onde não há nenhuma casa adjacente vazia. A função é chamada antes do interpretador imprimir o prompt e ficar à espera do comando.
 * *Implementação do prompt*: Função *prompt*, no módulo "interface".
 
**Nota:** também foram adicionadas, por ambos integrantes, funções que acessam as informações contidas no estado e que serão usadas por todo o programa. Tais funções se encontram no módulo "acessar_estado".

### Semana 3 (guião 7):
Como já se tinha o comando movs a funcionar e o comando gr já estava completo, nesta semana trabalhou-se em otimizar o comando ler.

Na definição da função ler, ignorava-se o tabuleiro dos ficheiros e faziam-se jogadas com as coordenadas dispostas a partir de um estado novo, que tinha acabado de ser inicializado. Esta definição não era muito eficiente, pois para cada vez que o comando ler era chamado, alocava-se um novo espaço na memória.

Criou-se, então, a nova definição dessa função, que lê e armazena no tabuleiro as 8 primeiras linhas do ficheiro e depois faz as atualizações necessárias para que o jogo continue (i.e., último jogador, número de jogadas, jogadas).

### Semana 4 (guião 8):
 * *Implementação do comando pos*, que permite que o usuário aceda a jogadas anteriores. É possível realizar o comando *pos* consecutivamente até que uma nova jogada seja feita ou seja realizada a leitura de um novo tabuleiro.

 * *Alterações necessárias*, conforme sugerido pelo professor. 
 
 * *Adição de screenshots das funcionalidades do programa*.

 * *Reorganização das camadas e seus módulos*.

### Semana 5 (guião 9):
 * *Criação do módulo independente para as funções genéricas de listas ligadas/encadeadas.*

 * *Implementação do comando jog*: Foi utilizada a heurística Minimax para a implementação deste comando. Através de uma função recursiva, o computador prevê até 8 jogadas à frente e verifica qual das jogadas possíveis tem o melhor *score* (é atribuído -1 quando em alguma jogada seguinte o jogador adversário ganha o jogo, 1 quando o jogador atual ganha o jogo e 0 quando o jogo não chegou ao fim).

 * *Ajustes e atualização nas camadas e nos módulos.*

### Semana 6 (guião 10):
* *Implementação do comando jog2*: Implementação do comando jog2. Neste comando optamos por utilizar a heurística de jogadas Aleatórias, onde a peça analiza as casas vizinhas VAZIAS e faz o movimento para uma qualquer.

* *Implementação do Bot*: Foi implementado um novo main "mainBot.c" para a execução desta tarefa.

* *Atualização da Documentation com a Doxygen*: Esta a ser feita uma atualização nos ficheiros de documentação.

* *Atualização da Camada Testes*: O módulo testes esta a ser atualizado para os novos comandos.

### Semana 7 (guião Final) - Sprint Backlog:

|    História    |    Tarefas    |  Status/Obs.  |
|  ---  |  ---  |  ---  |
|    Documentação    |  Verificar se todas as estruturas de dados e Macros estão documentadas.  |  ✅  |
|    |    |    |
|  Modularidade e legibilidade  |  Funções que caibam no ecrã.  |  ✅  |
|    |  Funçnoes aux com nome sugestivo.  |  ✅  |
|    |  NÃO aceder diretamente o módulo dados.  |  ✅  |
|    |  Estrutura em módulos estanques.  |  ✅  |
|    |  NÃO utilizar variaveis globais.  |  ✅  |
|    |  NÃO misturar a camada interface com o resto.  |  ✅  |
|    |  NÃO misturar a camada dados com o resto.  |  ✅  |
|    |    |    |
|  Deteção dos fins de jogo  |  O projeto deverá detetar todas as instâncias de fim de jogo.  |  ✅  |
|    |    |    |
|  Compilar sem warnings  |  Compilar sem warnings com o comando: -std=gnu11 -Wall -Wextra -pedantic-errors -O no gcc.  |  ✅  |
|    |    |    |
|  Bot  |  Entrega do Bot finalizado através da BB.  |  ✅  |
|    |    |
|  Projeto  |  Entrega do Projeto finalizado através da BB com a seguinte definição: la1PL2G01.zip.  |  ✅  |

# Trabalho B1 Lógica de programação e algoritmos

## Descrição
Programa em linguagem C desenvolvido para simular o cálculo de solicitações de entregas locais de uma empresa de acordo com o problema. 

O sistema processa os dados informados pelo usuário, como: distância, peso, modalidade, proteção (caso queira) e tentativas adicionais, validando as entradas de acordo com as regras de negócio propostas, e no final exibe o valor final de cada entrega, além do resumo ao encerrar a sessão de atendimento. 

## Funcionalidades
* Validação de entradas numéricas de domínio (impedindo o prosseguimento com valores inválidos).
* Cálculo do subtotal inicial baseado em faixas de distância predefinidas e acréscimo por quilometragem.
* Cálculo de adicionais percentuais baseados no peso da encomenda e na modalidade de envio escolhida (econômica, expressa ou prioridade).
* Aplicação de taxas fixas para serviços opcionais (proteção adicional e tentativas extras de entregas).
* Processamento contínuo de múltiplas entregas em uma única sessão, sem armazenamento permanente na memória.
* Exibição de um resumo final.

## Organização da solução
Para garantir a modularização exigida e não concentrar todas as responsabilidades na função principal, o código foi dividido nas funções: 
* calcular_valor_base: função com retorno de valor e passagem de parâmetro, recebendo a distância validada e identifica qual é o valor-base da tarifa de acordo com a faixa.
* obter_percentual_peso: função com retorno de valor e passagem de parâmetro, recebendo o peso da entrega e retorna o multiplicador correspondente à regra de negócio.
* obter_percentual_modalidade: função com retorno de valor e passagem de parâmetro, recebendo o código validado da modalidade e retorna o multiplicador aplicável.
* exibir_resumo: função isolada para gerenciar a saída de dados do encerramento da sessão de atendimento, recebendo os contadores, acumuladores e indicadores de máximo e mínimo por parâmetro, e por fim mostrando o relatório final.
* main: coordenando o fluxo do programa, possuindo os laços de repetição e pela chamada das funções acima.

## Compilação
Para compilar o código fonte utilizando gcc, abra o terminal na pasta raiz do projeto e execute o comando: gcc src/main.c -o simulador_entregas

## Execução
Após a compilação, execute o programa no terminal com o comando: ./simulador_entregas

## Uso de IA
* Ferramenta utilizada: Google Gemini.
* Finalidade: Melhorias e correções no código C e ajuda na criação desse repositório, bem como os markdowns no README.
* Exemplos de prompts: "Como passar mais de um parâmetro em uma função em linguagem C", "Como criar um repositório no GitHub e realizar os commits" e "Como fazer títulos e itens com markdowns no README do GitHub"
* Sugestões aproveitadas: Passagem dos parâmetros, criação de repositório e uso de markdowns.
* Correções: Passagens dos parâmetros.

## Fontes consultadas
* Roteiro da atividade. 
* Documentação padrão da linguagem C para funções e parâmetros. 

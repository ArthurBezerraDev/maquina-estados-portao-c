# Máquina de Estados: Portão Automático em C 🚪

Aprofundando os conhecimentos em `switch-case` e criação de biblioteca em C. Projeto desenvolvido em sala de aula apenas para fins de aprendizado.

## 📌 Sobre o Projeto
Este repositório contém a simulação do controlo de um portão automático através de uma Máquina de Estados Finitos (FSM). O código demonstra a criação e utilização de uma biblioteca própria, separando as definições da implementação lógica.

## 📁 Estrutura dos Ficheiros
* **`portao.h`**: A biblioteca (cabeçalho) que armazena as estruturas de enumeração (`enum`) para os estados do portão e os eventos associados.
* **`portao.c`**: Implementação das funções. Utiliza declarações `switch-case` para definir qual será o próximo estado do portão com base no estado atual e no evento recebido.
* **`main.c`**: Ficheiro principal para testar o comportamento da biblioteca, imprimindo no ecrã as mudanças de estado (ex: simulação de abertura, fecho e interrupção por obstáculo).

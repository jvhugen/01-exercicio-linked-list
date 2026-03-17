# 01 - Lista Simplesmente Encadeada (Linked List)

## Descrição
Implementação de uma Lista Simplesmente Encadeada (Linked List) em C++ como exercício da disciplina de Estruturas de Dados.

A lista permite inserir, remover, inverter e visualizar elementos utilizando nós encadeados.

## Funcionalidades
- [x] Criação/Inicialização da lista
- [x] Mostrar lista
- [x] Verificar se a lista está vazia
- [x] Número de elementos da lista
- [x] Inserção no início
- [x] Inserção em posição específica
- [x] Remoção em posição específica
- [x] Inversão da lista
- [x] Destruição da lista (liberar memória)

## Pré-requisitos

Para compilar o projeto é necessário:

- Compilador C++
    - Linux: g++
    - Windows: MinGW ou Visual Studio
- CMake (opcional)

## Instalação

Clone o repositório:

git clone https://github.com/jvhugen/01-exercicio-linked-list.git

Entre na pasta do projeto:

cd 01-exercicio-linked-list

## Compilação

Linux ou Mac:

g++ main.cpp src/linked_list.cpp -o linked_list

Windows (MinGW):

g++ main.cpp src/linked_list.cpp -o linked_list.exe

## Execução

Após compilar o projeto:

Linux/Mac:

./linked_list

Windows:

linked_list.exe

Exemplo de saída:

Exercicio de Linked List
------------------------

Lista criada e esta vazia.

Inserindo elementos na lista...
30 20 10

Numero de elementos: 3

Inserindo 15 na posicao 1...
30 15 20 10

Removendo elemento da posicao 2...
30 15 10

Invertendo lista...
10 15 30

Destruindo lista...
Lista destruida com sucesso!

## Testes

Para compilar os testes:

g++ tests/test.cpp src/linked_list.cpp -o tests

Executar testes:

./tests

Saída esperada:

=========================================
INICIANDO TESTES DE LINKED LIST
=========================================

Testando criaLista()...
criaLista() passou em todos os testes
Testando insere()...
insere() passou em todos os testes
Testando destroiLista()...
destroiLista() passou em todos os testes

=========================================
TODOS OS TESTES PASSARAM COM SUCESSO!
=========================================

## Autor

Aluno: João Vitor Hugen  
Disciplina: Estrutura de Dados
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node {
    int conteudo;
    Node* proximo;
};

struct ListaSimplesmenteEncadeada {
    int cardinalidade;
    Node* inicio;
};

ListaSimplesmenteEncadeada* criaLista();

void destroiLista(ListaSimplesmenteEncadeada &lista);

void insere(ListaSimplesmenteEncadeada &lista, int conteudo);

void mostrarLista(ListaSimplesmenteEncadeada &lista);

bool listaVazia(ListaSimplesmenteEncadeada &lista);

int numeroElementos(ListaSimplesmenteEncadeada &lista);

void inserePosicao(ListaSimplesmenteEncadeada &lista, int conteudo, int posicao);

void removePosicao(ListaSimplesmenteEncadeada &lista, int posicao);

void inverterLista(ListaSimplesmenteEncadeada &lista);

#endif // LINKED_LIST_H
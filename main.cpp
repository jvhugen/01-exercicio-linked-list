#include <iostream>
#include "include/linked_list.h"

using namespace std;

int main() {

    cout << "Exercicio de Linked List" << endl;
    cout << "------------------------" << endl;

    ListaSimplesmenteEncadeada* lista = criaLista();

    if (listaVazia(*lista)) {
        cout << "\nLista criada e esta vazia." << endl;
    }

    cout << "\nInserindo elementos na lista..." << endl;
    insere(*lista, 10);
    insere(*lista, 20);
    insere(*lista, 30);

    cout << "Lista atual: ";
    Node* atual = lista->inicio;
    while (atual != NULL) {
        cout << atual->conteudo << " ";
        atual = atual->proximo;
    }
    cout << endl;

    cout << "\nNumero de elementos: " << numeroElementos(*lista) << endl;

    cout << "\nInserindo 15 na posicao 1..." << endl;
    inserePosicao(*lista, 15, 1);

    atual = lista->inicio;
    while (atual != NULL) {
        cout << atual->conteudo << " ";
        atual = atual->proximo;
    }
    cout << endl;

    cout << "\nRemovendo elemento da posicao 2..." << endl;
    removePosicao(*lista, 2);

    atual = lista->inicio;
    while (atual != NULL) {
        cout << atual->conteudo << " ";
        atual = atual->proximo;
    }
    cout << endl;

    cout << "\nInvertendo lista..." << endl;
    inverterLista(*lista);

    atual = lista->inicio;
    while (atual != NULL) {
        cout << atual->conteudo << " ";
        atual = atual->proximo;
    }
    cout << endl;

    cout << "\nDestruindo lista..." << endl;
    destroiLista(*lista);

    if (listaVazia(*lista)) {
        cout << "Lista destruida com sucesso!" << endl;
    }

    free(lista);

    return 0;
}
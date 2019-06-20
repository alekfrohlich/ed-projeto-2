/*!
* @file trie.h
* @author Alek Frohlich, Nícolas Goeldner
* @brief Código da trie.
* @version 1.0
* @date 2019-06-20
*
* @copyright Copyright (c) 2019
*/
#ifndef STRUCTURES_TRIE_H
#define STRUCTURES_TRIE_H

#include <string>

#define ALPHABET_SIZE 26

namespace structures {

/*!
* @brief Calcula o número de componentes conexos na matriz usando vizinhança-4.
*
* Utiliza a técnica de rotulação de formas, para tal criando uma matriz temporária
* do mesmo tamanho da de entrada: este algoritmo utiliza memória na ordem O(w*h).
*
* Cada "pixel" é processado em uma fila (FIFO) de tamanho dinâmico, assim como
* seus vizinhos e assim por diante ate percorrer todos os caminhos do componente.
*
* @param E Matriz de entrada.
* @param height Número de linhas da matriz.
* @param width Número de colunas da matriz.
* @return int Número de componentes conexos (formas) encontrados. Zero implica
* que a matriz é nula/vazia.
*/
struct TrieNode {
	struct TrieNode* children[ALPHABET_SIZE];
	int pos, length;
};

/*!
* @brief Cria um novo node.
*
* Faz com que a pos e o len de cada TrieNode sejam zerados e  
* os seus ponteiros para filhos sejam nulos.
*
* @return struct TrieNode* Ponteiro para o novo node criado.
*/
struct TrieNode*
initNode();
/*!
* @brief Adiciona a string word na trie.
*
* @param root Root da trie.
* @param word Palavra para inserir.
* @param pos Posicao no dicionario da palavra a ser inserida.
* @param len Comprimento da linha no dicionario que possui a palavra a ser inserida.
*/
void insert(struct TrieNode* root, std::string word, int pos, int len);
/*!
* @brief Procura uma palavra na trie.
*
* @param word Palavra a ser procurada na trie.
* @param root Root da trie.
*
* @return pair<int,int> Par que indica se a palavra pertence ao dicionário, é apenas um prefixo ou que
* não pertence ao dicionário. Se a palavra pertence ao dicionário o primeiro 
* representa a posição da palavra e o segundo o comprimeto da linha. 
*/
std::pair<int, int> search(struct TrieNode*, std::string word);

// implementacao incluida aqui
#include "trie.inc"

}  // namespace structures

#endif

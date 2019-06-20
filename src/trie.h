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
struct TrieNode*
getNode();
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
std::pair<int, int> search(struct TrieNode*, std::string);

// implementacao incluida aqui
#include "trie.inc"

}  // namespace structures

#endif

/*!
 * @file trie.h
 * @author Alek Frohlich, Nicolas Goeldner
 * @brief Arquivo de declarações e interface da Trie.
 * @version 1.0
 * @date 2019-06-20
 *
 * @copyright Copyright (c) 2019
 */

#ifndef STRUCTURES_TRIE_H
#define STRUCTURES_TRIE_H

#include <stdexcept>
#include <string>

//! Estruturas de Dados.
namespace structures {

//! Trie.
class Trie {
public: 
    //! Construtor.
    Trie();
    //! Destrutor.
    ~Trie();
    //! Insere chave na Trie.
    void insert(const std::string& key, unsigned long pos, unsigned long length);
    //! Busca chave na Trie.
    std::pair<int,int> search(const std::string& key);
private:
	//! Lista de sub-Tries.
	Trie *children[26];
	//! Posicao da chave no dicionario.
	unsigned long pos{0u};
	//! Comprimento da chave no dicionario.
	unsigned long length{0u};
}

};

// implementacao incluida aqui
#include "trie.inc"

}  // namespace structures

#endif

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

struct TrieNode {
	struct TrieNode* children[ALPHABET_SIZE];
	int pos, length;
};

struct TrieNode*
getNode();
void insert(struct TrieNode*, std::string, int, int);
std::pair<int, int> search(struct TrieNode*, std::string);

// implementacao incluida aqui
#include "trie.inc"

}  // namespace structures

#endif

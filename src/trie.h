#ifndef STRUCTURES_TRIE_H
#define STRUCTURES_TRIE_H

#include <string>

struct TrieNode {
    struct TrieNode* children[];
    int pos, length; 
}

struct TrieNode* getNode();
void insert(struct TrieNode*, std::string, int, int);
std::pair<int, int> search(struct TrieNode*, std::string);

#endif

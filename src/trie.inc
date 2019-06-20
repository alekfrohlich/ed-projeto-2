/*!
 * @file linked_queue.inc
 * @author Alek Frohlich, Gabriel B. Sant'Anna
 * @brief Implementações da Fila Encadeada.
 * @version 1.0
 * @date 2019-05-19
 *
 * @copyright Copyright (c) 2019
 */

Trie::Trie() {
    for (int i = 0; i < 26; i++)
        children[i] = nullptr;
}

Trie(unsigned long p, unsigned long l) {
    for (int i = 0; i < 26; i++)
        children[i] = nullptr;
    pos = p;
    length = l;
}

void Trie::insert(const std::string& key, unsigned long pos, unsigned long length) {
    for (int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a';
        if (!children[index])
            children[index] = new Trie();
        
    }
}

std::pair<int,int> Trie::search(const std::string& key) {

}

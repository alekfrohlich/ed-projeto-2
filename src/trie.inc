struct TrieNode* structures::getNode() {
	struct TrieNode* pNode = new TrieNode;

	pNode->pos = 0;
	pNode->length = 0;

	for (int i = 0; i < ALPHABET_SIZE; i++)
		pNode->children[i] = NULL;

	return pNode;
}

void structures::insert(struct TrieNode* root,
                        string key, int pos, int len) {
	struct TrieNode* pCrawl = root;

	for (int i = 0; i < key.length(); i++) {
		int index = key[i] - 'a';
		if (!pCrawl->children[index])
			pCrawl->children[index] = getNode();

		pCrawl = pCrawl->children[index];
	}

	pCrawl->pos = pos;
	pCrawl->length = len;
}


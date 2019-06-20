struct TrieNode* getNode() {
	struct TrieNode* pNode = new TrieNode;

	pNode->pos = 0;
	pNode->length = 0;

	for (int i = 0; i < ALPHABET_SIZE; i++)
		pNode->children[i] = NULL;

	return pNode;
}

void insert(struct TrieNode* root, string key, int pos, int len) {
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

std::pair<int, int> search(struct TrieNode* root, string key) {
	std::pair<int, int> p;
	auto pCrawl = root;

	for (int i = 0; i < key.length(); i++) {
		int index = key[i] - 'a';
		if (!pCrawl->children[index]) {
			p.first = -1;
			p.second = -1;
			return p;
		}

		pCrawl = pCrawl->children[index];
	}

	if (pCrawl && pCrawl->length == 0) {
		p.first = 0;
		p.second = 0;
		return p;
	}

	p.first = pCrawl->pos;
	p.second = pCrawl->length;

	return p;
}

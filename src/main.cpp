#include <iostream>

int main() {
    
    using namespace std;

    string filename;
    string word;

    cin >> filename;  // entrada

    string line;
    ifstream myfile (filename);
    if (myfile.is_open()) {
        while ( getline (myfile,line) ) {
            string word;
            int i;
            for(i=1;i<line.length();i++){
            word+=line[i];
                if(line(i) == ']')
                    break;
            }
            word[i] = '\0';
            length = line.length();
            trie.insert(word, posProx, length);
            posProx += line.length();
        }
        myfile.close();
    }

    cout << filename << endl;  // esta linha deve ser removida
    
    while (1) {  // leitura das palavras ate' encontrar "0"
        cin >> word;
        if (word.compare("0") == 0) {
            break;
        }
        cout << word << endl;
    }

    return 0;
}

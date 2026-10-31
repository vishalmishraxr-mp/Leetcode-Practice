// Title: Implement Trie (Prefix Tree)
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/implement-trie-(prefix-tree)/

                Node* children = new Node(ch);
                curr->child[ch] = children;
                curr = children;
            }
        }
        curr->makeTerminal();
    }
    bool search(string word) {
        Node* curr = root;
        for (int i = 0; i < word.size(); i++) {
            char ch = word[i];

            if (curr->child.count(ch)) {
                curr = curr->child[ch];
            }

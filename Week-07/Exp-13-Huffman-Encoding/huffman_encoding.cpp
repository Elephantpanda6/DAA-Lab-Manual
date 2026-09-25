#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <unordered_map>

using namespace std;

// A Huffman tree node
struct HuffmanNode {
    char data;
    unsigned freq;
    HuffmanNode *left, *right;

    HuffmanNode(char data, unsigned freq) {
        this->left = this->right = nullptr;
        this->data = data;
        this->freq = freq;
    }
};

// Comparison object to order the min-heap
struct Compare {
    bool operator()(HuffmanNode* l, HuffmanNode* r) {
        return l->freq > r->freq;
    }
};

// Traverse the Huffman Tree and store codes in a map
void storeCodes(HuffmanNode* root, string str, unordered_map<char, string>& huffmanCode) {
    if (!root) return;

    // If it's a leaf node, it contains a character
    if (!root->left && !root->right) {
        huffmanCode[root->data] = str;
    }

    storeCodes(root->left, str + "0", huffmanCode);
    storeCodes(root->right, str + "1", huffmanCode);
}

// Builds a Huffman Tree and generates unique prefix codes
void HuffmanCodes(const string& text) {
    // 1. Count frequencies of each character
    unordered_map<char, unsigned> freqMap;
    for (char ch : text) {
        freqMap[ch]++;
    }

    // 2. Create a min-heap & push all leaf nodes
    priority_queue<HuffmanNode*, vector<HuffmanNode*>, Compare> minHeap;
    for (auto pair : freqMap) {
        minHeap.push(new HuffmanNode(pair.first, pair.second));
    }

    // 3. Iterate until the size of heap becomes 1
    while (minHeap.size() != 1) {
        // Extract the two lowest frequency nodes
        HuffmanNode *left = minHeap.top();
        minHeap.pop();

        HuffmanNode *right = minHeap.top();
        minHeap.pop();

        // Create internal node with sum of frequencies
        HuffmanNode *top = new HuffmanNode('$', left->freq + right->freq);
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }

    // 4. Traverse the tree to generate codes
    HuffmanNode* root = minHeap.top();
    unordered_map<char, string> huffmanCode;
    storeCodes(root, "", huffmanCode);

    // Output results
    cout << "--- Huffman Codes ---\n";
    for (auto pair : huffmanCode) {
        cout << "'" << pair.first << "' : " << pair.second << "\n";
    }

    cout << "\n--- Compressed Data Stream ---\n";
    string encodedStr = "";
    for (char ch : text) {
        encodedStr += huffmanCode[ch];
    }
    cout << encodedStr << "\n";
}

int main() {
    string text = "huffman encoding greedy algorithm";
    cout << "Original Text: " << text << "\n\n";
    HuffmanCodes(text);

    return 0;
}

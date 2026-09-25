/*
 * EXPERIMENT 13: Huffman Encoding (Greedy Strategy)
 * Aim: Apply the greedy strategy using a min-heap (priority_queue) to generate
 *      an optimal prefix Huffman Tree and compress textual input data.
 *
 * Complexity: Tree construction O(d log d), Encoding O(n), Space O(d)
 *
 * Compilation: g++ -std=c++17 -Wall experiment_13_huffman_encoding.cpp -o experiment_13.exe
 */

#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <unordered_map>

using namespace std;

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

struct Compare {
    bool operator()(HuffmanNode* l, HuffmanNode* r) {
        return l->freq > r->freq;
    }
};

void storeCodes(HuffmanNode* root, string str, unordered_map<char, string>& huffmanCode) {
    if (!root) return;

    if (!root->left && !root->right) {
        huffmanCode[root->data] = str;
    }

    storeCodes(root->left, str + "0", huffmanCode);
    storeCodes(root->right, str + "1", huffmanCode);
}

void HuffmanCodes(const string& text) {
    unordered_map<char, unsigned> freqMap;
    for (char ch : text) {
        freqMap[ch]++;
    }

    priority_queue<HuffmanNode*, vector<HuffmanNode*>, Compare> minHeap;
    for (auto pair : freqMap) {
        minHeap.push(new HuffmanNode(pair.first, pair.second));
    }

    while (minHeap.size() != 1) {
        HuffmanNode *left = minHeap.top();
        minHeap.pop();

        HuffmanNode *right = minHeap.top();
        minHeap.pop();

        HuffmanNode *top = new HuffmanNode('$', left->freq + right->freq);
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }

    HuffmanNode* root = minHeap.top();
    unordered_map<char, string> huffmanCode;
    storeCodes(root, "", huffmanCode);

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

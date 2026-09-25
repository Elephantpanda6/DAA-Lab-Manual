# Experiment 13: Huffman Encoding (Greedy Strategy)

## Aim
Apply the greedy algorithmic strategy using a min-heap (`std::priority_queue`) to build an optimal prefix Huffman Tree and compress textual data into a variable-length bit stream.

## Algorithm
1. Compute the frequency of each character in the input string.
2. Insert each unique character as a leaf node into a min-priority queue keyed by frequency.
3. While `heap.size() > 1`:
   - Pop the two nodes with the lowest frequencies ($left, right$).
   - Create a new interior node with frequency equal to the sum of $left$ and $right$.
   - Assign $left$ and $right$ as children and insert the interior node back into the min-heap.
4. Traverse the resulting binary tree from the root:
   - Assign `0` to left edges and `1` to right edges.
   - At each leaf, record the prefix code for that character.
5. Encode the original text using the generated prefix codes.

## Complexity
- **Building the Tree**: $\mathcal{O}(d \log d)$ where $d$ is the number of distinct characters.
- **Encoding**: $\mathcal{O}(n)$ where $n$ is total text length.
- **Space Complexity**: $\mathcal{O}(d)$ for tree nodes and code tables.

## Compilation & Execution
```bash
g++ -std=c++17 -Wall huffman_encoding.cpp -o huffman_encoding.exe
./huffman_encoding.exe
```

## Sample Output
```
Original Text: huffman encoding greedy algorithm

--- Huffman Codes ---
'a' : 001
'd' : 1100
'e' : 1101
'f' : 010
'g' : 0110
'h' : 11100
'i' : 0111
'l' : 11101
'm' : 1000
'n' : 101
'o' : 11110
'p' : 11111
'r' : 1001
't' : 0000
'u' : 0001
'y' : 0010
' ' : 0011

--- Compressed Data Stream ---
11100000101001010000011010011110110111000111111110011001101001110111010010001100111101011110100001110111101000
```

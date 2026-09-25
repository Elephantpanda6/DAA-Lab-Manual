# Design and Analysis of Algorithms (DAA) Lab Manual

This repository contains the complete, divided, and verified laboratory experiments for the **Design and Analysis of Algorithms (DAA)** laboratory course, implemented in **C++17**.

---

## 📚 Experiment Index

| Week | Experiment | Title | Description | Code Files |
| :---: | :---: | :--- | :--- | :--- |
| **Week 1** | **Exp 01** | [Sample Programs Using C++ Concepts](Week-01/Exp-01-Sample-CPP-Concepts/) | Encapsulation, Abstraction, Inheritance, and Runtime Polymorphism using Smart Pointers (`std::unique_ptr`). | [`sample_cpp_concepts.cpp`](Week-01/Exp-01-Sample-CPP-Concepts/sample_cpp_concepts.cpp) |
| **Week 1** | **Exp 02** | [Classes and Inheritance](Week-01/Exp-02-Classes-and-Objects/) | Class blueprint definitions, object instantiation, and base/derived class inheritance. | [`01_class_basics.cpp`](Week-01/Exp-02-Classes-and-Objects/01_class_basics.cpp), [`02_inheritance_basics.cpp`](Week-01/Exp-02-Classes-and-Objects/02_inheritance_basics.cpp) |
| **Week 2** | **Exp 03** | [Parameters, Inline, Static, Access Specifiers](Week-02/Exp-03-Parameters-Inline-Static-Access/) | Call by value, call by reference/address, inline member functions, static class members, access specifiers. | [`01_call_by_value.cpp`](Week-02/Exp-03-Parameters-Inline-Static-Access/01_call_by_value.cpp) to [`05_access_specifiers.cpp`](Week-02/Exp-03-Parameters-Inline-Static-Access/05_access_specifiers.cpp) |
| **Week 2** | **Exp 04** | [Constructors, Destructors, Default Args, `this`](Week-02/Exp-04-Constructors-Destructors-DefaultArgs/) | Default arguments, constructors, constructor overloading, destructors, and `this` pointer chaining. | [`01_default_arguments.cpp`](Week-02/Exp-04-Constructors-Destructors-DefaultArgs/01_default_arguments.cpp) to [`05_this_pointer.cpp`](Week-02/Exp-04-Constructors-Destructors-DefaultArgs/05_this_pointer.cpp) |
| **Week 3** | **Exp 05** | [Function and Operator Overloading](Week-03/Exp-05-Overloading/) | Compile-time polymorphism: overloading member functions and overloading unary prefix `++` operator. | [`01_function_overloading.cpp`](Week-03/Exp-05-Overloading/01_function_overloading.cpp), [`02_operator_overloading.cpp`](Week-03/Exp-05-Overloading/02_operator_overloading.cpp) |
| **Week 3** | **Exp 06** | [Function and Class Templates](Week-03/Exp-06-Templates/) | Generic programming with function templates (`add<T>`) and class templates (`Number<T>`). | [`01_function_template.cpp`](Week-03/Exp-06-Templates/01_function_template.cpp), [`02_class_template.cpp`](Week-03/Exp-06-Templates/02_class_template.cpp) |
| **Week 4** | **Exp 07** | [Selection Sort Analysis](Week-04/Exp-07-Selection-Sort-Analysis/) | In-place selection sort with exact tracking of comparisons ($45$) and swaps on $N=10$. | [`selection_sort_analysis.cpp`](Week-04/Exp-07-Selection-Sort-Analysis/selection_sort_analysis.cpp) |
| **Week 4** | **Exp 08** | [Factorial Computation (Iterative vs Recursive)](Week-04/Exp-08-Factorial-Computation/) | Comparative runtime benchmarking (nanoseconds) and stack call depth tracking (Constant vs Linear). | [`factorial_comparison.cpp`](Week-04/Exp-08-Factorial-Computation/factorial_comparison.cpp) |
| **Week 5** | **Exp 09** | [Insertion Sort Evaluation](Week-05/Exp-09-Insertion-Sort-Evaluation/) | Empirical analysis across Best $\mathcal{O}(n)$, Average $\mathcal{O}(n^2)$, and Worst $\mathcal{O}(n^2)$ cases for $N=10,000$. | [`insertion_sort_evaluation.cpp`](Week-05/Exp-09-Insertion-Sort-Evaluation/insertion_sort_evaluation.cpp) |
| **Week 5** | **Exp 10** | [GCD via Recursion](Week-05/Exp-10-GCD-Euclidean-Recursion/) | Euclidean algorithm implemented recursively with step counters tracking recursion depth. | [`gcd_recursion.cpp`](Week-05/Exp-10-GCD-Euclidean-Recursion/gcd_recursion.cpp) |
| **Week 6** | **Exp 11** | [Quick Sort Performance Study](Week-06/Exp-11-Quick-Sort-Performance/) | Randomized Quick Sort performance study across input sizes $N=10,000$ to $100,000$ with CSV data output. | [`quick_sort_performance.cpp`](Week-06/Exp-11-Quick-Sort-Performance/quick_sort_performance.cpp) |
| **Week 6** | **Exp 12** | [Graph Connectivity Check (DFS)](Week-06/Exp-12-Graph-Connectivity-DFS/) | Graph representation using adjacency lists and Depth-First Search connectivity verification. | [`graph_connectivity_dfs.cpp`](Week-06/Exp-12-Graph-Connectivity-DFS/graph_connectivity_dfs.cpp) |
| **Week 7** | **Exp 13** | [Huffman Encoding](Week-07/Exp-13-Huffman-Encoding/) | Greedy prefix-free encoding using min-heap priority queue and binary tree code generation. | [`huffman_encoding.cpp`](Week-07/Exp-13-Huffman-Encoding/huffman_encoding.cpp) |

---

## 🛠️ Build and Compilation Guide

All programs are written to be compatible with **C++17** and higher standards. You can compile each program using GCC (`g++`):

```bash
# General syntax
g++ -std=c++17 -Wall <source_file>.cpp -o <executable_name>.exe

# Example: Run Experiment 1
cd Week-01/Exp-01-Sample-CPP-Concepts
g++ -std=c++17 -Wall sample_cpp_concepts.cpp -o sample_cpp_concepts.exe
./sample_cpp_concepts.exe
```

---

## 👤 Author
- **Hemanth Revanth Bonthu** ([@Elephantpanda6](https://github.com/Elephantpanda6))

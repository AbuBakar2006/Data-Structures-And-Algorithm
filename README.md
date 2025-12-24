#  📚 Data Structures & Algorithms

![Language](https://img.shields.io/badge/language-C++-00599C?style=flat-square&logo=c%2B%2B)
![Standard](https://img.shields.io/badge/std-C++17-blue?style=flat-square)
![License](https://img.shields.io/badge/license-MIT-green?style=flat-square)

A comprehensive collection of Data Structures and Algorithms implemented in **C++**. This repository serves as a reference for students, competitive programmers, and software engineers preparing for technical interviews.
This repository is designed to demonstrate understanding of memory management, pointers, and algorithmic efficiency.

---

## 📖 Table of Contents
- [Overview](#-overview)
- [Directory Structure](#-directory-structure)
- [Algorithms Implemented](#-algorithms-implemented)
- [Data Structures Implemented](#-data-structures-implemented)
- [How to Run](#-how-to-run)
- [Contributions](#-contributions)

---

## 🧐 Overview

This repository focuses on clean, readable, and efficient implementations.

* **Modern C++:** Uses C++11/14/17 features where applicable (smart pointers, lambdas, `auto`).
* **Generic Programming:** Many structures are templated to handle various data types.
* **Documentation:** Code is heavily commented to explain the logic, not just the syntax.

---

## 📂 Directory Structure

```text
├── 📁 Algorithms/
│   ├── Backtracking/
│   ├── DynamicProgramming/
│   ├── Greedy/
│   ├── 📁 Searching/
│   └── 📁 Sorting/
|
├── 📁 DataStructures/
│   ├── 📁 Lists/
│   |   ├── 📁 SinglyLinkedList/
|   |   |   └──  Singly-Linked-List.cpp
|   |   ├── 📁 DoublyLinkedList/
|   |   |   └──  Doubly-Linked-List.cpp
|   |   └── 📁 CircularLinkedList/
|   |       ├──  Singly-Linked-Circular-List.cpp
|   |       └──  Doubly-Linked-Circular-List.cpp
|   ├── 📁 Queues/
|   |   ├── Queue.cpp
|   |   └── Priority-Queue.cpp
|   ├── 📁 Stacks
|   |   └── Stack.cpp
│   ├── 📁 Graphs/
|   |   └── Graph.cpp
│   ├── 📁 Hashing/
|   |   └── Hashing.cpp
│   ├── 📁 Heaps/
|   |   ├── MinHeap.cpp
|   |   └── MaxHeap.cpp
│   └── 📁 Trees/
|       ├── Tree.cpp
|       ├── BinarySearchTree.cpp
|       └── AVLTree.cpp
│   
└── LICENCE.md
│   
└── README.md
```

---

## ⚡ Algorithms Implemented

| Category | Algorithm | Complexity / Notes | Status |
| :--- | :--- | :--- | :---: |
| **Sorting** | Bubble Sort | $O(n^2)$ | ✅ |
| | Insertion Sort | $O(n^2)$ | ✅ |
| | Selection Sort | $O(n^2)$ | ✅ |
| | Merge Sort | $O(n \log n)$ | ✅ |
| | Quick Sort | $O(n \log n)$ | ✅ |
| | Heap Sort | $O(n \log n)$ | ✅ |
| **Searching** | Linear Search | $O(n)$ | ✅ |
| | Binary Search | $O(\log n)$ (Iterative & Recursive) | ✅ |
| | Interpolation Search | $O(\log(\log n))$ | ❌ |
| **Graphs** | BFS & DFS | Traversal | 🚧 |
| | Dijkstra's Algorithm | Shortest Path | ❌ |
| | Kruskal’s Algorithm | MST | ❌ |
| | Prim’s Algorithm | MST | ❌ |
| **DP** | Knapsack Problem | 0/1 Knapsack | ❌ |
| | Longest Common Subsequence | LCS | ❌ |
| | Matrix Chain Multiplication | Optimization | ❌ |

> **Legend:** ✅ Completed | 🚧 In Progress | ❌ Todo

---

## 📦 Data Structures Implemented

| Category | Data Structures | Status |
| :--- | :--- | :---: |
| **Linear** | Linked Lists, Stacks, Queues | 🚧 |
| **Trees** | Binary Search Trees (BST), AVL Trees, Segment Trees | ❌ |
| **Heaps** | Min Heap, Max Heap, Priority Queue | ❌ |
| **Graphs** | Adjacency List, Adjacency Matrix | ❌ |
| **Hashing** | Hash Map (Chaining/Open Addressing) | ❌ |

> **Legend:** ✅ Completed | 🚧 In Progress | ❌ Todo

---

### 💻 How to Run
Ensure you have a C++ compiler installed (GCC, Clang, or MSVC).

#### Clone the repository:
```bash
git clone https://github.com/AbuBakar2006/Data-Structures-And-Algorithm.git
```

---

## 🤝 Contributions
Contributions are welcome! If you find a bug or want to add a new algorithm.

### Contributing Guidelines
Thank you for considering contributing to **Data-Structures-And-Algorithm**!
To keep the repository stable and organized, please follow the workflow below.

### 🚀 Contribution Workflow
#### 1. Fork and Clone
Fork the repository to your own GitHub account, then clone it to your local machine.
#### 2. Create a Branch
Always create a new branch for your work. Use a descriptive name regarding the algorithm or structure you are adding.

```bash
git checkout -b <your-branch-name>
```
```text
# Good examples
git checkout -b algo/quick-sort
git checkout -b struct/doubly-linked-list

# Bad examples
git checkout -b update
git checkout -b patch-1
```
#### 3. Implement Your Code
* **Algorithms:** Place new sorting/searching logic in the Algorithms/ folder.
* **Structures:** Place new data types in the Structures/ folder.

**Style:** Please use clear variable names and comments explaining the logic (especially for complex C++ pointers).

#### 4. Push to Your Fork
Push your branch to your forked repository:
```bash
git push origin <your-branch-name>
```
#### 5. Submit a Pull Request (PR)

* Go to the original repository on GitHub.
* Click "New Pull Request".
* Select your branch and compare it with main.
* Describe your changes and submit.

### 🧪 Testing
Before submitting, please ensure your C++ code compiles without errors. If possible, include a small main() function in your file or a screenshot showing it works.

---

### 📜 License
Distributed under the MIT License. See LICENSE for more information.

#### 💡 Recommendation for C++ Repos
Since this is C++, you should update your **`.gitignore`** specifically for C++ build files, as they are different from other Languages.

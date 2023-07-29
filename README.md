# Pattern-in-a-document

This is a project of pattern matching of a given text in a file. 

Algorithm used here is KMP algorithm also known as Knuth–Morris–Pratt algorithm.

It has a time complexity of O(N + M) where N is the length of the the original string and M is the the length of the pattern that need to be searched. 

**APPLICATION IN REAL LIFE** 

`Can be used in DNA sequence matcing`

** C++ LIBRARAY USED**

`iostream` for basic I/O operation .
`fstream`  for File handling.
`string`  for string manipulation.

**SOME INSIGHTS OF THE PROJECT**
The KMP algorithm has been written in a separate file name `patternMatching.cpp`.

To Run the Project:

1) You need to have a C++ Compiler . You can Use Clang or GNU C++ Compiler
2) Clone the project in your local machine.
3) Compile the Project with `g++ main.cpp patternMatching.cpp -o pattern`

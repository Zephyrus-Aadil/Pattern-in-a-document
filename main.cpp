#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "PatternMatching.cpp"
#include "patternMatchnaive.cpp"
using namespace std;

int main(void) {
    // first get the words from file 
    string pattern = "greenh";
    int patternSize = pattern.size();
    ifstream myfile ("test.txt");
    string readLine;
    string words = "";
    vector<string> wordList;
    
    if(myfile.is_open() == false) {
        std::cerr<<"Error Opening the File\n";
        return 0;
    }
    
    while(getline(myfile,readLine)) {
            words+=readLine;
    }
    myfile.close();
    
    extractAllwords(wordList,words);         // sanitize all words and put it in a vector of string
    int countOfMatch = 0;
    for(string &word : wordList) {
        vector<int> lps;
        setLps(lps,word,pattern);
        countOfMatch += getMeCount(lps,patternSize);
    }
    std::cout<<countOfMatch<<"\n";

}
#include <iostream>
#include <vector>
using namespace std;
void extractAllwords(vector<string> &words,const string &readLine) {
    string  word = "";
    int sizeOfreadLine = readLine.size();
    int i = 0;
    while(i < sizeOfreadLine) {
        if( !isalpha(readLine[i]) ) {
            i++;
            continue;
        }
        int j  = i;
        while( j < sizeOfreadLine && isalpha(readLine[j])) {
            word+=readLine[j];
            j++;
        }
        words.push_back(word);
        word = "";
        i = j;
    }
}
void setLps(vector<int> &lps,const string &givenString , const string &pattern){
    int sizeOfString = givenString.size();
    int sizeOfpattern = pattern.size();
    string modifiedString = pattern+"#"+givenString;
    int sizeOfModifiedString = modifiedString.size();    
    
    lps.resize(sizeOfModifiedString+1,0);
    
    int i = 1,len = 0;
    
    while(i < sizeOfModifiedString) {
        if(modifiedString[i] == modifiedString[len]) {
            len++;
            lps[i] = len;
            i++;
        }else{
            if(len > 0) {
                len = lps[len-1];
            }else{
                lps[i] = 0;
                i++;
            }
        }
    }

}
int getMeCount(vector<int>&lps,int sizeOfPattern) {
    int count = 0;
    for(int &i: lps) {
        if(i == sizeOfPattern) {
            count++;
        }
    }
    return count;
}

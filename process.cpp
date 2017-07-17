// Andrew Lee
// processes list of words to be lowercase

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char **argv) {
    char c;
    string str;
    vector<string> vec;
    vector<string>::iterator iter;

    // unclean list of words
    ifstream words;
    words.open(argv[1]);

    // file to write to
    ofstream dict;
    dict.open("temp.txt");

    // make all characters lowercase
    while ((c = words.get()) > 0) {
        dict.put(tolower(c));
    }
    dict.close();

    // remove non-unique words
    ifstream inDict;
    inDict.open("temp.txt");
    ofstream writeDict;
    writeDict.open("dict.txt");
    while (getline(inDict, str)) {
        if (find(vec.begin(), vec.eng(), str) != vec.end()) {
            vec.push_back(str);
        }
    }
    for (iter = vec.begin(); iter < vec.end(); iter++) {
        cout << *iter << endl; 
    }

    return 0;
}

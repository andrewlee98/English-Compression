// Andrew Lee
// processes list of words to be lowercase

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    char c;
    string str;
    vector<string> vec;

    // unclean list of words
    ifstream words;
    words.open("words.txt");

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
        vec.push_back(str);
    }
    for (auto iter = vec.begin(); iter < vec.end(); iter++) {
        cout << *iter << endl;
    }

    return 0;
}

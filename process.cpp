// Andrew Lee
// processes imperfect list of words

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <locale>

using namespace std;

int main(int argc, char **argv) {
    char c;
    vector<string> vec;
    vector<string>::iterator iter;

    // unclean list of words
    ifstream words;
    words.open(argv[1]);

    // file to write to
    ofstream dict;
    dict.open("temp.txt");

    // make all characters lowercase
    while ((c = words.get()) != -1) {
        dict.put(tolower(c));
    }
    dict.close();

    // remove non-unique words
    ifstream inDict;
    inDict.open("temp.txt");
    ofstream writeDict;
    writeDict.open("dict.txt");
   
    int i = 0;
    int j = 0;
    for (string str; getline(inDict, str);) {
        i++;
        if (find(vec.begin(), vec.end(), str) == vec.end()) {
            j++;
            vec.push_back(str);
        }
    }
    inDict.close();
    remove("temp.txt");

    cout << "Number of lines: " << i << endl;
    cout << "Number of unique words: " << j << endl;

    return 0;
}

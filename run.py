# method called for reducing words
def reduce_word(w, s):
    for i in range(0, len(w)):
        ret = w[0:i] + w[i + 1:-1]
    return ret

# open word list and read into list
with open('words.txt') as f:
    wordlist = f.readlines()
    wordlist = [x.strip() for x in wordlist]

# if possible sort by decreasing usage instead
wordlist.sort(key=len)

# maps old word to new word
d = dict()

# tracks new words
s = set()

for w in wordlist:
    sw = reduce_word(w, s)
    d[w] = sw
    s.add(sw)


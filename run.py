
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

def reduce_word(w, s):
    

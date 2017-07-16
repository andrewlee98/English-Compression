CXX = clang
CXXFLAGS = -g -Wall $(INCLUDES)
LDFLAGS = -g

main: main.o

main.o:

.PHONY: clean
clean:
	rm -f *.o a.out core main

.PHONY: all
all: clean main

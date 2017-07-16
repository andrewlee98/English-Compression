CC = clang++
CXXFLAGS = -g -Wall $(INCLUDES)
LDFLAGS = -g

main:

main.o:

process:

process.o:

.PHONY: clean
clean:
	rm -f *.o a.out core main process

.PHONY: all
all: clean main

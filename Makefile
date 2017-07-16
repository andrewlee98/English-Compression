CC = clang++
CXXFLAGS = -Wall $(INCLUDES)
LDFLAGS =

main:

main.o:

process:

process.o:

.PHONY: clean
clean:
	rm -f *.o a.out core main process

.PHONY: all
all: clean main

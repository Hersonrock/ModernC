CC=gcc
CFLAGS=-std=c2x -Wall -g
#----ProgramName----#
NAME=main
#----Dependencies---#
DEP1=fileio
DEP2=generator
DEP3=test
DEP4=merge
DEP5=quick
DEP6=time
#------------#
IDIR=./include
DEPS=$(IDIR)/$(DEP1).h $(IDIR)/$(DEP3).h
OBJ=./src/main.o ./src/$(DEP1).o ./src/$(DEP2).o ./src/$(DEP3).o \
    ./src/$(DEP4).o ./src/$(DEP5).o ./src/$(DEP6).o

%.o:%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) -I$(IDIR)

./bin/$(NAME): $(OBJ)
	$(CC) -o $@ $^

clean:
	rm -rf ./bin/$(NAME) ./src/*.o


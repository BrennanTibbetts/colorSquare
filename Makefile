#Used to add flags to files that need it
CFLAGS = -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g
#All .o files
OBJ = cSquareMain.o display.o option.o directory.o colorRange.o placeItem.o

#make command result
all: cSquare cSquare.zip

#all .c and .h files, the Makefile and the readme
cSquare.zip: *.c *.h Makefile README
	zip $@ $^ #

#for each .o file update with corresponding .c file and all .h files
%.o: %.c *.h
	gcc -g -c $< -o $@ $(CFLAGS)

cSquare: $(OBJ)
	gcc -g $^ -o $@ $(CFLAGS)

clean:
	rm -rf *.o cSquare cSquare.zip

SRC = src/HelloWorld.c
COMP = gcc -std=c99
BIN = HelloWorld

$(BIN) : $(SRC)
	$(COMP) $(SRC) -o $(BIN)

run : 
	make
	./$(BIN)

clean :
	rm $(BIN)

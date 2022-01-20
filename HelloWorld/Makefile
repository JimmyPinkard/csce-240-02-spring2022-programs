SRC = src/*.c
COMP = gcc --std=c99
BIN = build/HelloWorld

$(BIN) : $(SRC)
	mkdir build/
	$(COMP) $(SRC) -o $(BIN)

run : 
	make
	./$(BIN)

clean :
	rm -rf build/

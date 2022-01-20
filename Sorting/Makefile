SRC = src/*.cpp
COMP = g++ --std=c++17
BIN = build/Sort

$(BIN) : $(SRC)
	mkdir build/
	$(COMP) $(SRC) -o $(BIN)

run : 
	make
	./$(BIN)

clean :
	rm -rf build/

SRC = src/*.cpp
COMP = g++ --std=c++17
BIN = FileBasedCalculator

$(BIN) : $(SRC)
	$(COMP) $(SRC) -o $(BIN)

run : 
	make
	./$(BIN)

clean :
	rm $(BIN)

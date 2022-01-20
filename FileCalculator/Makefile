SRC = src/*.cpp
COMP = g++ --std=c++17
BIN = build/FileBasedCalculator

$(BIN) : $(SRC)
	mkdir build/
	$(COMP) $(SRC) -o $(BIN)

run : 
	make
	./$(BIN)

clean :
	rm -rf build/

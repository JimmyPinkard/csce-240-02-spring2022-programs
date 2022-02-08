SRC = src/*.cpp src/shapes/*.cpp
HEAD = src/headers/*.h src/shapes/headers/*.h
OBJS = *.o
COMP = g++ --std=c++17 -g3
BIN = build/OOGeometricPropertyCalculator

$(BIN) : $(OBJS)
	mkdir build/
	$(COMP) $(OBJS) -o $(BIN)
	rm $(OBJS)

$(OBJS) : $(SRC) $(HEAD)
	make clean
	$(COMP) -c $(SRC)

run : 
	make
	./$(BIN)

clean :
	rm -rf build/ *.o

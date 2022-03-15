SRC = src/*.cpp
HEAD = src/headers/*.h
TESTS = tests/*.cpp
TEST = build/Test
OBJS = *.o
COMP = g++ --std=c++17 -g3
BIN = build/FactorialFun

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

test :
	make
	$(COMP) $(TESTS) -o $(TEST)

clean :
	rm -rf build/ $(OBJS)

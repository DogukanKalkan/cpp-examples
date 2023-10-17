CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRC = main.cpp Node.cpp SinglyLinkedList.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = myprogram

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(EXEC)

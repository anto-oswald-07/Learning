# Compiler
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# Target executable
TARGET = login_system

# Source files
SOURCES = main.cpp user.cpp auth.cpp

# Object files
OBJECTS = $(SOURCES:.cpp=.o)

# Default target
all: $(TARGET)

# Link
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Compile
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean
clean:
	rm -f $(OBJECTS) $(TARGET) users.dat

# Run
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run

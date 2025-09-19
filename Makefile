# Compiler
CXX = clang++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -g

# Target executable
TARGET = testArrayType

# Source files
SRCS = testProg.cpp

# Object files (derived from source files)
OBJS = $(SRCS:.cpp=.o)

# Default target: compile and link
all: $(TARGET)

# Rule to link the object files and create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile the source files into object files
%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJS) $(TARGET)

# PHONY targets
.PHONY: all clean

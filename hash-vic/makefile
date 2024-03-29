# Compiler and flags
CC = gcc

# Source file
SRCS = ph.c

# Output
TARGET = ph
THREADS1 = 1
THREADS2 = 2
THREADS4 = 4

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(SRCS)
	$(CC) -pthread $(SRCS) -o $(TARGET)

# Rule to run the program with 1 thread
run1:
	./$(TARGET) $(THREADS1)

# Rule to run the program with 2 threads
run2:
	./$(TARGET) $(THREADS2)

# Rule to run the program with 4 threads
run4:
	./$(TARGET) $(THREADS4)

# Rule to clean generated files
clean:
	rm -f $(TARGET)


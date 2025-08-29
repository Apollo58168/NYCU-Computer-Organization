# Makefile for building dpi_uart.so

# Compiler and flags
CC = gcc
CFLAGS = -shared -fPIC
TARGET = dpi_uart.so
SRC = dpi_uart.c

# Default target
all: $(TARGET)

# Build rule
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<

# Clean rule
clean:
	rm -f $(TARGET)

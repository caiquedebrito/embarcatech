CC = gcc
CFLAGS = -Wall -Wextra -I.

SRC = main.c \
      comprimento/comprimento.c \
      massa/massa.c \
      volume/volume.c 

OBJ = $(SRC:.c=.o)
TARGET = programa

# Regra principal
all: $(TARGET)

# Linka os arquivos objeto para criar o executável
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $@

# Compila os arquivos .c para .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza dos arquivos intermediários
clean:
	rm -f $(OBJ) $(TARGET)
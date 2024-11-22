CC = gcc #Define o compilador a ser utilizado (GCC).
CFLAGS = -I./include -I./cli-lib-main/include -Wall #Contém os flags do compilador. 
LDFLAGS = -L./cli-lib-main -lcli #Contém os flags de ligação, incluindo o caminho para a biblioteca CLI-lib; e o link para a biblioteca 

#$(OBJ) Refere-se aos arquivos-objeto gerados a partir dos arquivos-fonte (.c) listados em SRC.
#$(TARGET) Representa o nome do executável final gerado pelo Makefile.
#Estes arquivos contêm o código C que será compilado
								

SRC = ./src/main.c ./src/jogo.c #Lista os arquivos-fonte do projeto 
OBJ = $(SRC:.c=.o) #Converte arquivos .c em .o automaticamente.
TARGET = forca #Nome do executável que será gerado (forca)

all: $(TARGET) # É o alvo principal. Quando make for executado, ele tenta criar o executável especificado em $(TARGET)

$(TARGET): $(OBJ) # Regra que compila os arquivos-objeto e cria o executável.  
#Regra para limpar arquivos-objeto e o executável gerados pelo make
	$(CC) $(OBJ) -o $@ $(LDFLAGS) 

clean: #É uma regra usada para limpar os arquivos gerados durante a compilação (arquivos .o e o executável).
#rm é o comando para remover arquivos no Linux/Unix.
#-f força a remoção sem pedir confirmação, mesmo que os arquivos não existam.
	rm -f $(OBJ) $(TARGET) 
#$(OBJ): Remove os arquivos-objeto (.o) gerados.
#$(TARGET): Remove o executável (forca).

#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 4 ejercicio 6


BIN = bin
INC = include
SRC = src
OBJ = obj
LIB = lib
DOC = doc

all: $(BIN)/ejercicio6

$(BIN)/ejercicio6: $(OBJ)/ejercicio6.o $(LIB)/libformas.a
	g++ -std=c++11 -o $(BIN)/ejercicio6 $(OBJ)/ejercicio6.o -L$(LIB) -lformas
	@echo Construyendo ejecutable en $(BIN)

$(OBJ)/ejercicio6.o: $(SRC)/ejercicio6.cpp $(INC)/Skyline.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/ejercicio6.o $(SRC)/ejercicio6.cpp


$(OBJ)/Skyline.o: $(SRC)/Skyline.cpp $(INC)/Skyline.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/Skyline.o $(SRC)/Skyline.cpp



$(LIB)/libformas.a: $(OBJ)/Skyline.o
	@echo Construyendo libreria
	ar rvs $(LIB)/libformas.a $(OBJ)/Skyline.o

#_______LIMPIEZA________

clean:
	@echo Limpieza de los archivos objeto y biblioteca...
	rm $(OBJ)/*.o
	rm $(LIB)/*.a

mrproper: clean
	rm $(BIN)/ejercicio6

#_______DOCUMENTACION____

documentacion:
	doxygen $(DOC)/doxys/Doxyfile

#___________RUN_ONLY_WINDOWS_______

run:
	$(BIN)/ejercicio6

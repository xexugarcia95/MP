#Nombre:		Makefile
#Autor:			Jesús Manuel García Palma
#Descripcion:	Practica 4 ejercicio 5


BIN = bin
INC = include
SRC = src
OBJ = obj
LIB = lib
DOC = doc

all: $(BIN)/ejercicio5

$(BIN)/ejercicio5: $(OBJ)/ejercicio5.o $(LIB)/libformas.a
	g++ -std=c++11 -o $(BIN)/ejercicio5 $(OBJ)/ejercicio5.o -L$(LIB) -lformas
	@echo Construyendo ejecutable en $(BIN)

$(OBJ)/ejercicio5.o: $(SRC)/ejercicio5.cpp $(INC)/MatrizDispersa.h $(INC)/Valor.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/ejercicio5.o $(SRC)/ejercicio5.cpp

$(OBJ)/MatrizDispersa.o: $(SRC)/MatrizDispersa.cpp $(INC)/MatrizDispersa.h $(INC)/Valor.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/MatrizDispersa.o $(SRC)/MatrizDispersa.cpp


$(OBJ)/Valor.o: $(SRC)/Valor.cpp $(INC)/Valor.h
	g++ -std=c++11 -c -I$(INC) -o $(OBJ)/Valor.o $(SRC)/Valor.cpp



$(LIB)/libformas.a: $(OBJ)/MatrizDispersa.o $(OBJ)/Valor.o
	@echo Construyendo libreria
	ar rvs $(LIB)/libformas.a $(OBJ)/MatrizDispersa.o $(OBJ)/Valor.o 

#_______LIMPIEZA________

clean:
	@echo Limpieza de los archivos objeto y biblioteca...
	rm $(OBJ)/*.o
	rm $(LIB)/*.a

mrproper: clean
	rm $(BIN)/ejercicio5

#_______DOCUMENTACION____

documentacion:
	doxygen $(DOC)/doxys/Doxyfile

#___________RUN_ONLY_WINDOWS_______

run:
	$(BIN)/ejercicio5

#Makefile

add-nbo.o: add-nbo.cpp
	g++ -o add-nbo.cpp add-nbo.o

clean:
	rm -f add-nbo.o

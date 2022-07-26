#Makefile

add-nbo.o: 
	g++ -o add-nbo.o add-nbo.cpp

clean:
	rm -f add-nbo.o

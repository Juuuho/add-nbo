#Makefile

add-nbo.o: 
	g++ -o add-nbo add-nbo.cpp

clean:
	rm -f add-nbo

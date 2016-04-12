all: lab8

lab8:	driver.o	graph.o
	g++	driver.o	graph.o	-o lab8
	
driver:	driver.cpp
	g++	driver.cpp	-o driver.o
	
graph:	graph.h	graph.cpp
	g++	graph.cpp	-o graph.o
	
clean:
	rm -f *.o lab8

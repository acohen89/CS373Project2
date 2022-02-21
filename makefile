cohen_p2: main.o gate.o centerGate.o gateCollection.o
	g++ -g -O0 -o cohen_p2 main.o gate.o centerGate.o gateCollection.o

main.o: main.cpp
	g++ -g -O0 -c main.cpp

gate.o: gate.cpp
	g++ -g -O0 -c gate.cpp

centerGate.o: centerGate.cpp
	g++ -g -O0 -c centerGate.cpp

gateCollection.o: gateCollection.cpp
	g++ -g -O0 -c gateCollection.cpp



clean: 
	rm -f core *.o 
	rm cohen_p2

	
cleanc: 
	rm -f core *.o 
	rm cohen_p2
	clear
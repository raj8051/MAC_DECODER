run: main.o decoder.o display.o
	g++ main.o decoder.o display.o -o run

main.o: main.cpp
	g++ -c main.cpp

decoder.o: decoder.cpp
	g++ -c decoder.cpp

display.o: display.cpp
	g++ -c display.cpp

clean:
	rm *.o run

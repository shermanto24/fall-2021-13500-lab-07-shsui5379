main: main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o

tests: tests.o unindent.o indent.o
	g++ -o tests tests.o unindent.o indent.o


main.o: main.cpp unindent.h indent.h

tests.o: tests.cpp unindent.h indent.h

unindent.o: unindent.cpp unindent.h

indent.o: indent.cpp indent.h


clean:
	rm -f unindent.o tests.o main.o indent.o
main:


tests: tests.o unindent.o
	g++ -o tests tests.o unindent.o


tests.o: tests.cpp unindent.h

unindent.o: unindent.cpp unindent.h


clean:
	rm -f unindent.o tests.o
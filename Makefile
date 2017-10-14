
output: postfix.o classdef.o
	g++ postfix.o classdef.o -o lab3

postfix.o: postfix.cpp
	g++ -c postfix.cpp

classdef.o: classdef.cpp classdef.h
	g++ -c classdef.cpp

clean:
	rm *.o lab3

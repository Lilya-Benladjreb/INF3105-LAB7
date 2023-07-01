#Lab7

all : testavl lab7

lab6A: lab7.cpp arbreavl.h
	g++ -o lab7 lab7.cpp

testavl: testavl.cpp arbreavl.h
	g++ -o testavl testavl.cpp

clean :
	rm -f testavl
	rm -f lab7


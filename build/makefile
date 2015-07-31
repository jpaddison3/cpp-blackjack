SRC = ../src/

all: bj

bj: card.o blackjack.o
	g++ card.o blackjack.o -o bj

card.o: $(SRC)card.cpp
	g++ -c $(SRC)card.cpp -o card.o

blackjack.o: $(SRC)blackjack.cpp
	g++ -c $(SRC)blackjack.cpp -o blackjack.o

clean:
	rm -f *.o bj
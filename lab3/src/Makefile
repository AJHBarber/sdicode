ALLOUT = cards 
INCLUDEDIR = ../headers
CXXFLAGS   = -std=c++11 -I $(INCLUDEDIR) -Wall -Wfatal-errors
vpath %.h $(INCLUDEDIR)

all: $(ALLOUT)

cards: main.cpp card.o deck.o
	g++ $(CXXFLAGS) main.cpp card.o deck.o -o cards

card.o : card.cpp card.h
	g++ $(CXXFLAGS) -c card.cpp -o card.o

deck.o : deck.cpp deck.h
	g++ $(CXXFLAGS) -c deck.cpp -o deck.o

clean:
	rm -f card.o deck.o $(ALLOUT)


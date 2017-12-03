ALLOUT = factoral tour
INCLUDEDIR = ../headers
CXXFLAGS   = -std=c++11 -I $(INCLUDEDIR) -Wall -Wfatal-errors
vpath %.h $(INCLUDEDIR)

all: $(ALLOUT) 

factoral: factoral.cpp facto.o
	g++ $(CXXFLAGS) factoral.cpp facto.o -o factoral

tour: tour.cpp
	g++ $(CXXFLAGS) tour.cpp -o tour

facto.o : getFactoral.cpp factoral.h
	g++ $(CXXFLAGS) -c getFactoral.cpp -o facto.o

clean:
	rm -f prime.o facto.o $(ALLOUT)


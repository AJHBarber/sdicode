ALLOUT = tour
INCLUDEDIR = ../headers
CXXFLAGS   = -std=c++11 -I $(INCLUDEDIR) -Wall -Wfatal-errors
vpath %.h $(INCLUDEDIR)

all: $(ALLOUT) 

tour: tour.cpp tour.o
	g++ $(CXXFLAGS) tour.cpp tour.o -o tour

tour.o : listTour.cpp tour.h
	g++ $(CXXFLAGS) -c listTour.cpp -o tour.o
clean:
	rm -f tour.o $(ALLOUT)


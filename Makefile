CC=g++ -std=c++11
LFLAGS = -g3 -Wall -Wextra
EXEC=lotr

ODIR = build
IDIR = include
SDIR = src

all: dirs $(EXEC)

dirs:
	mkdir -p build

$(EXEC): $(ODIR)/main.o $(ODIR)/creature_society.o $(ODIR)/creature.o $(ODIR)/good_creature.o $(ODIR)/bad_creature.o
	$(CC) $(LFLAGS) $^ -o $@

$(ODIR)/main.o: $(SDIR)/main.cpp $(IDIR)/creature_society.h $(IDIR)/creature.h $(IDIR)/good_creature.h $(IDIR)/bad_creature.h
	$(CC) -c $(LFLAGS) $< -o $@

$(ODIR)/creature_society.o: $(SDIR)/creature_society.cpp $(IDIR)/creature_society.h $(IDIR)/creature.h $(IDIR)/good_creature.h $(IDIR)/bad_creature.h
	$(CC) -c $(LFLAGS) $< -o $@

$(ODIR)/good_creature.o: $(SDIR)/good_creature.cpp $(IDIR)/creature.h $(IDIR)/good_creature.h 
	$(CC) -c $(LFLAGS) $< -o $@

$(ODIR)/bad_creature.o: $(SDIR)/bad_creature.cpp $(IDIR)/creature.h $(IDIR)/bad_creature.h 
	$(CC) -c $(LFLAGS) $< -o $@

$(ODIR)/creature.o: $(SDIR)/creature.cpp $(IDIR)/creature.h 
	$(CC) -c $(LFLAGS) $< -o $@

clean:
	rm $(EXEC)
	rm -r $(ODIR)

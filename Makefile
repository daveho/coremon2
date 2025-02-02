CXX = g++
CXXFLAGS = -g -Wall -Iinclude $(shell pkg-config gtkmm-4.0 --cflags)

SRCS = coremon2.cpp
OBJS = $(SRCS:%.cpp=build/%.o)

EXE = build/coremon2

build/%.o : src/%.cpp
	$(CXX) $(CXXFLAGS) -c src/$*.cpp -o build/$*.o

$(EXE) : $(OBJS)
	$(CXX) -o $@ $+ $(shell pkg-config gtkmm-4.0 --libs)

clean :
	rm -f build/*.o $(EXE)

depend :
	$(CXX) $(CXXFLAGS) -M $(SRCS:%=src/%) > depend.mak

depend.mak :
	touch $@

include depend.mak

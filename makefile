IDIR  = include
ODIR  = obj
SDIR  = src

CXX 	  = g++
CXXFLAGS  = -g -I$(IDIR)

DEPS = $(shell find $(IDIR) -name '*.h')
OBJ = $(subst $(SDIR),$(ODIR),$(subst cpp,o,$(shell find $(SDIR) -name '*.cpp')))


main: $(OBJ) $(DEPS)
	$(CXX) -o $@ $^ $(CFLAGS)

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<


.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~
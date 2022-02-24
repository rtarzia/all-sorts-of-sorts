IDIR  = include
ODIR  = obj
SDIR  = src

CXX 	  = g++
CXXFLAGS  = -g -Wall -I$(IDIR)

OBJ = $(subst $(SDIR),$(ODIR),$(subst cpp,o,$(shell find $(SDIR) -name '*.cpp')))


main: $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

$(ODIR)/%.o: $(SDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<


.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~
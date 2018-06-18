IVDEPTH = ../../..
include $(IVDEPTH)/makeincs/ivcommondefs

DSO = GeneralizedCylinder.so

CXXFILES = \
	GeneralizedCylinder.c++ Triangulator.c++ \
	NurbMaker.c++

LLDLIBS = -L$(IVDEPTH)/libInventor -lInventor -L$(IVDEPTH)/libSoXt -lInventorXt

all install: all_ivbin

include $(IVCOMMONRULES)

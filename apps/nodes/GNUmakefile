IVDEPTH = ../..
include $(IVDEPTH)/makeincs/ivcommondefs

SUBDIRS = BarChart Decal GeneralizedCylinder

all install:
	+$(SUBDIRS_MAKERULE)

COMMONPREF = xxx
$(COMMONTARGS): %: $(COMMONPREF)%
	+$(SUBDIRS_MAKERULE)

include $(IVCOMMONRULES)

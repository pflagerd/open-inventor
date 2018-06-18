IVDEPTH = ../..
include $(IVDEPTH)/makeincs/ivcommondefs

SUBDIRS = common widgets 4view clock ivNodeKitStructure ivToInclude linkages lod manip spaceball twoDisplays viewers vortex widgets

all install:
	+$(SUBDIRS_MAKERULE)

COMMONPREF = xxx
$(COMMONTARGS): %: $(COMMONPREF)%
	+$(SUBDIRS_MAKERULE)

include $(IVCOMMONRULES)

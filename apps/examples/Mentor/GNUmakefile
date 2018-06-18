IVDEPTH = ../../..
include $(IVDEPTH)/makeincs/ivcommondefs

SUBDIRS = src

all install:
	+$(SUBDIRS_MAKERULE)

COMMONPREF = xxx
$(COMMONTARGS): %: $(COMMONPREF)%
	+$(SUBDIRS_MAKERULE)

include $(IVCOMMONRULES)

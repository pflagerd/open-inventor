IVDEPTH = ../..
include $(IVDEPTH)/makeincs/ivcommondefs

SUBDIRS = ivAddVP ivcat ivfix ivinfo ivnorm ivperf ivview

all install:
	+$(SUBDIRS_MAKERULE)

COMMONPREF = xxx
$(COMMONTARGS): %: $(COMMONPREF)%
	+$(SUBDIRS_MAKERULE)

include $(IVCOMMONRULES)

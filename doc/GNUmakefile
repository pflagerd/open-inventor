IVDEPTH = ..
include $(IVDEPTH)/makeincs/ivcommondefs

ifdef BUILDMAN
SUBDIRS = help man
else
SUBDIRS = help
endif

all install:
	+$(SUBDIRS_MAKERULE)

COMMONPREF = xxx
$(COMMONTARGS): %: $(COMMONPREF)%
	+$(SUBDIRS_MAKERULE)

include $(IVCOMMONRULES)

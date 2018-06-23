IVDEPTH = ../../..
include $(IVDEPTH)/makeincs/ivcommondefs

PROGRAM = viewerTest

LCXXINCS += -I$(IVDEPTH)/libSoXt/src/viewers

CXXFILES = \
	MyExamVwr.c++ \
	MyFullVwr.c++ \
	MyViewer.c++ \
	MyBitmapButton.c++ \
	viewerTest.c++

LLDLIBS = -lInventor -lInventorXt -lGLU -lGL -lX11 -lXm -lXt

all: all_ivbin

HF = MyExaminerViewer.h MyFullViewer.h MyViewer.h
CF = MyExamVwr.c++ MyFullVwr.c++ MyViewer.c++ MyBitmapButton.c++ MyBitmapButton.h

LTARGETS = $(HF) $(CF)

$(HF): My%: $(IVDEPTH)/libSoXt/include/Inventor/Xt/viewers/SoXt%
	sed -f ./nameScript \
		$(IVDEPTH)/libSoXt/include/Inventor/Xt/viewers/$(subst My,SoXt,$@) > $@
$(CF): My%: $(IVDEPTH)/libSoXt/src/viewers/SoXt%
	sed -f ./nameScript \
		$(IVDEPTH)/libSoXt/src/viewers/$(subst My,SoXt,$@) > $@

#LDIRT += $(HF) $(CF)

include $(IVCOMMONRULES)

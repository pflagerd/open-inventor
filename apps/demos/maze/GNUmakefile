IVDEPTH = ../../..
include $(IVDEPTH)/makeincs/ivcommondefs

PROGRAM = maze
DEMO = $(PROGRAM)

LCXXDEFS += -DNO_AUDIO

CXXFILES = maze.c++

LLDLIBS = -lInventor -lInventorXt -lGL -lXm -lXt -lX11

all: all_ivbin

install: install_ivdemo

include $(IVCOMMONRULES)

Open Inventor
=============

Open Inventor is an object oriented scene graph library implemented in C++
layered on top of OpenGL. It was originally developed by
[SGI](http://www.sgi.com/).

This Repository
===============

This repository is a fork of the original one which was put on github here: https://github.com/aumuell/open-inventor.

The initial work here is being done on Ubuntu 17.10 using eclipse oxygen for C/C++.  Hence the .project and .cproject files.

There is a directory called `LabBook` in which work progress is summarized and tracked.



# 1st Goal

The first goal of this project is to get the current gnu-make build working in both release and debug modes, and to correct any misinformation in the makefiles or other documentation. 

## Progress
180623T182800 PST 
	gnu make build works in debug mode.  
	Many many errors and warnings fixed.
	Allow C and C++ to have different flags. esp. for -std=
	Turn on debugging as default
	prevent automatic deletion of shape node .c++ files like SoCone.c++ as intermediate files by make.
	renamed make/ to makeincs/
	renamed lib/ to libInventor/
	fixed a couple broken makefiles
	made sure everything compiles fine on Ubuntu 17.10
	moved some random artifacts into better locations.
	replaced many exit(1) with return 1 in main()s.

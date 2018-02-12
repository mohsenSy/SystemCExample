TARGET_ARCH = gccsparcOS5
MODULE = simplex
SRCS = channel.cpp display.cpp packet.cpp receiver.cpp
timer.cpp transmit.cpp main.cpp
OBJS = $(SRCS:.cc=.o)
include ./Makefile.defs

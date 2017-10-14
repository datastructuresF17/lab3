# Generic Makefile for osc2325

#what are we building
APP     := app
TST     := test
LIB     := cpukit.a

# tools used in this build
CXX     := g++
AR      := ar
RM      := rm -f

# locate sourcefiles
APPSRCS := $(wildcard src/*.cpp)
LIBSRCS := $(wildcard lib/*.cpp)
TSTSRCS := $(wildcard tests/*.cpp)

# generate object file lists
APPOBJS := $(APPSRCS:.cpp=.o)
LIBOBJS := $(LIBSRCS:.cpp=.o)
TSTOBJS :=  $(TSTSRCS:.cpp=.o)

# flags for tools
CFLAGS  := -std=c++0x -I include
LFLAGS  := -L lib $(LIB)

# explicit targets follow --------------------------
.PHONY: all
all:    $(LIB) $(APP) $(TST)

$(APP): $(LIB) $(APPOBJS)
	$(CXX) -o $(APP) $(APPOBJS) $(LFLAGS)

$(TST): $(LIB) $(TSTOBJS)
	$(CXX) -o test $(TSTOBJS) $(LFLAGS)

$(LIB):   $(LIBOBJS)
	$(AR) rvs $(LIB) $(LIBOBJS)

# implicit targets follow --------------------------
%.o:    %.cpp
	$(CXX) -c $< -o $@ $(CFLAGS)

# utlity targets follow
.PHONY: clean
clean:
	$(RM) $(TSTOBJS) $(LIBOBJS) $(APP) $(TST) $(LIB)

.PHONY: run
run:    all
	./$(APP)
	./$(TST)

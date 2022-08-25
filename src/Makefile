#################################################
##              Makefile template              ##
#################################################

#     These special targets are called phony     #
.PHONY: dist clean build tests style

#################### Exec file ###################
EXEC := SmartCalc_v2_0

#################### Test name ###################
TEST := SmartCalc_v2_test

# Choosing a compiler and setting the main flags #
CC := g++
STANDART :=-std=c++17
INCLUDE := -I ./include
CFLAGS := -Wall -Werror -Wextra $(STANDART)
LKFLAGS := -g -fprofile-arcs -ftest-coverage

# CPPCHECK # - We connect all the rules for checks
CPPCHECKFLAG := --enable=all
# CPPCHECK # - Additional modules to check
CPPCHECKFLAG += --inconclusive
# CPPCHECK # - Language and standard indications
CPPCHECKFLAG += --language=c++ -$(STANDART)
# CPPCHECK # - Quiet mode
CPPCHECKFLAG += -q
# CPPCHECK # - Suppression of directory search errors
CPPCHECKFLAG += --suppress=missingInclude
# CPPCHECK # - Explicitly specifying a directory with headers
CPPCHECKFLAG += $(INCLUDE)
# CPPCHECK # - Error suppression of unused functions
CPPCHECKFLAG += --suppress=unusedFunction

LDFLAGS := -lgtest
VFLAG := --leak-check=full --show-leak-kinds=all -s
TEST_FLAGS = -fprofile-arcs -ftest-coverage

OS := $(shell uname)
ifeq ($(OS), Darwin)
LEAKS := leaks --atExit -- ./$(EXEC)
endif
ifeq ($(OS), Linux)
LEAKS := valgrind $(VFLAG) ./$(EXEC)
LDFLAGS += -lpthread -lgtest_main -L/usr/lib
endif

##################      Path     #################
P_LINT := ../materials/linters
P_INC := ./include
P_SRC := ./source
P_BLD := ./build
P_TEST := ./tests
P_TBLD := ./tests/build
P_COVERAGE := $(P_TBLD)/CMakeFiles/$(TEST).dir

################# Resource files #################
CSOURCES :=$(wildcard $(P_SRC)/*.cpp)
CHEADERS :=$(wildcard $(P_INC)/*.hpp)
LINT_SRC :=$(filter-out $(P_SRC)/qcustomplot.cpp, $(CSOURCES))
LINT_INC :=$(filter-out $(P_INC)/qcustomplot.hpp, $(CHEADERS))
CTEST_SRC :=$(wildcard $(P_TEST)/*.cpp)
CTEST_FILES := $(P_SRC)/calculation.cpp
COBJ :=$(CSOURCES:.cpp=.o)
HOBJ :=$(CHEADERS:.hpp=.gch)

################### Main target ##################
all: instal

################## Style check ###################
style:
	-cp $(P_LINT)/CPPLINT.cfg .
	-python3 $(P_LINT)/cpplint.py $(LINT_INC) $(LINT_SRC)
	-rm -rf CPPLINT.cfg
	-cppcheck $(CPPCHECKFLAG) $(LINT_INC) $(LINT_SRC)

################## Leaks check ###################
leaks: $(EXEC)
	$(LEAKS)

############ Cleaning up unused files ############
clean:
	# -@rm -rf *.o
	# -@rm -rf *.gch
	# -@rm -rf *.a
	# -@rm -rf *.gcno
	# -@rm -rf *.gcda
	# -@rm -rf report
	# -@rm -rf *.info
	-@rm -rf *.tgz

##############  Project archiving   ##############
dist:
	tar -czf $(EXEC).tgz ./*

##############         Tests        ##############
tests:
	cmake -S $(P_TEST) -B $(P_TBLD)
	cmake --build $(P_TBLD)
	cd $(P_TBLD); ctest

##############     gcov report      ##############
lcov: tests
	lcov -t "$(TEST)" -o $(TEST).info -c -d $(P_COVERAGE)
	# genhtml -o report $(TEST).info

##############     Main Assembly    ##############
instal:
	-@cmake -S . -B $(P_BLD)
	-@cmake --build $(P_BLD)

##############       Unistall       ##############
unistall:
	-@rm -rf $(P_BLD)

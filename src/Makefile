#     These special targets are called phony     #
.PHONY: dist clean build tests style

#################### Exec file ###################
EXEC := SmartCalc_v2_0

#################### Test name ###################
TEST := SmartCalc_v2_test

##################      Path     #################
P_LINT := ../materials/linters
P_INC := ./include
P_SRC := ./source
P_BLD := ./build
P_TEST := ./tests
P_TBLD := ./tests/build
P_COVERAGE := $(P_TBLD)/CMakeFiles/$(TEST).dir
P_RUN := ./build/SmartCalc_v2_0

# Choosing a compiler and setting the main flags #
STANDART := -std=c++17
INCLUDE := -I ./include

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

VFLAG := --leak-check=full --show-leak-kinds=all -s

OS := $(shell uname)
ifeq ($(OS), Darwin)
LEAKS := leaks --atExit -- ./$(P_TBLD)/$(TEST)
endif
ifeq ($(OS), Linux)
LEAKS := valgrind $(VFLAG) ./$(P_TBLD)/$(TEST)
endif

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

############ Cleaning up unused files ############
clean: unistall
	-@rm -rf $(P_TBLD)
	-@rm -rf report
	-@rm -rf *.tgz

##############  Project archiving   ##############
dist:
	tar -czf $(EXEC).tgz ./*

##############         Tests        ##############
tests:
	cmake -S $(P_TEST) -B $(P_TBLD)
	cmake --build $(P_TBLD)
	cd $(P_TBLD); ctest

################## Leaks check ###################
leaks: tests
	$(LEAKS)

##############     gcov report      ##############
lcov: tests
	lcov -t "$(TEST)" -o $(P_COVERAGE)/$(TEST).info -c -d $(P_COVERAGE)
	genhtml -o report $(P_COVERAGE)/$(TEST).info

##############     Main Assembly    ##############
install:
	-@cmake -S . -B $(P_BLD)
	-@cmake --build $(P_BLD)

##############       Unistall       ##############
unistall:
	-@rm -rf $(P_BLD)

##############         dvi          ##############
dvi:
	-@doxygen
	open doxygen/html/index.html

##############         run          ##############
run:
	-@$(P_RUN)
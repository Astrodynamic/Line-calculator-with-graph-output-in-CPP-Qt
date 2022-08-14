#################################################
##              Makefile template              ##
#################################################

#     These special targets are called phony     #
# .PHONY: all dist clean build test style

#################### Exec file ###################
EXEC := s21_matrix_oop_test

############# Name of static library #############
SLIB := s21_matrix_oop.a

#################### Test name ###################
TEST := test.cpp

# Choosing a compiler and setting the main flags #
CC := g++
STANDART :=-std=c++17
CFLAGS := -Wall -Werror -Wextra $(STANDART)
LKFLAGS := -g -fprofile-arcs -ftest-coverage
CPPCHECKFLAG := --enable=all --language=c++ -$(STANDART) --suppress=missingIncludeSystem
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

################# Resource files #################
CSOURCES :=$(wildcard s21*.cpp)
CHEADERS :=$(wildcard s21*.hpp)
COBJ :=$(CSOURCES:.cpp=.o)
HOBJ :=$(CHEADERS:.hpp=.gch)

################### Main target ##################
all: $(SLIB)

################## Style check ###################
style:
	-cp $(P_LINT)/CPPLINT.cfg .
	-python3 $(P_LINT)/cpplint.py *.h *.cpp
	-rm -rf CPPLINT.cfg
	-cppcheck $(CPPCHECKFLAG) *.h *.cpp

################## Leaks check ###################
leaks: $(EXEC)
	$(LEAKS)

############ Cleaning up unused files ############
clean:
	-@rm -rf $(EXEC)
	-@rm -rf *.o
	-@rm -rf *.gch
	-@rm -rf *.a
	-@rm -rf *.gcno
	-@rm -rf *.gcda
	-@rm -rf report
	-@rm -rf *.info

####### Template for creating object files #######
%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

### Template for creating header object files ###
%.gch : %.hpp
	$(CC) $(CFLAGS) -c $< -o $@

##############  Project archiving   ##############
dist:
	tar -czf $(EXEC).tgz ./*

##############   Create exit file   ##############
$(EXEC): $(CSOURCES)
	$(CC) $(CFLAGS) --coverage -o $(EXEC) $< $(TEST) $(LDFLAGS)

##############         Tests        ##############
test: $(EXEC)
	./$(EXEC)

##############     gcov report      ##############
lcov: test
	lcov -t "$(EXEC)" -o $(EXEC).info -c -d .
	genhtml -o report $(EXEC).info

##############   s21_matrix_oop.a   ##############
$(SLIB): $(COBJ) $(HOBJ)
	ar -rvs $(SLIB) $<

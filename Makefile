# compiler options
CXXFLAGS = -g -Wall -Wextra
CXXFLAGS += -std=c++20 -fmodules-ts -pedantic -pedantic-errors
CXXFLAGS += -Wfloat-equal -Wredundant-decls -Wshadow -Wconversion -Wuninitialized

# list your .h files here
HEADERS =

# list .cpp files here according to main program, tests, or both
PROGRAM_FILES = main.cpp
TEST_FILES = tests.cpp
SHARED_FILES = 

.PHONY: all
all: program.exe tests.exe

.PHONY: program.exe # Always force rebuild of tests
program.exe: $(SHARED_FILES) $(PROGRAM_FILES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SHARED_FILES) $(PROGRAM_FILES) -o $@

.PHONY: tests.exe # Always force rebuild of tests
tests.exe:  $(SHARED_FILES) $(TEST_FILES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SHARED_FILES) $(TEST_FILES) -o $@

.PHONY: clean
clean:
	rm -f program.exe tests.exe

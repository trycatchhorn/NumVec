#
# Makefile for building the test program using the vec API.
#
# Author: Brian Horn
# Email: trycatchhorn@gmail.com
# Version: 1.0.0

# Name of compiler and standard compiler flags.
CXX = g++
CPP_FLAGS_DEBUG = -std=c++14 -DNDEBUG -g -O0 -Wall -Wextra -Wconversion -pedantic -pthread
CPP_FLAGS_RELEASE = -std=c++14 -O2 -Wall -Wextra -Wconversion -pedantic -pthread

# Directory structure for the build.
BUILD_DIR = ./build
DEBUG_DIR = $(BUILD_DIR)/debug
RELEASE_DIR = $(BUILD_DIR)/release

# List of source file(s).
CPP_FILES = vector_test.cpp

# List of object files.
O_FILE_TEST_DEBUG = $(DEBUG_DIR)/vector_testd.o
O_FILE_TEST_RELEASE = $(RELEASE_DIR)/vector_test.o
O_FILES_DEBUG = $(O_FILE_TEST_DEBUG)
O_FILES_RELEASE = $(O_FILE_TEST_RELEASE)

# The name of the executables to build.
PROGRAM_DEBUG = vector_testd
PROGRAM_RELEASE = vector_test

# Path to include directory.
INCLUDE_DIR = ../include/

# Include flags.
INCLUDE_FLAGS = -I$(INCLUDE_DIR)

# Backup files.
H_BACKUP_FILES = *.h~
CPP_BACKUP_FILES = *.cpp~

.PHONY: all debug release clean

all: debug release

vector_testd.o:
	@mkdir -p $(BUILD_DIR)
	@mkdir -p $(DEBUG_DIR)
	$(CXX) -c $(CPP_FILES) $(CPP_FLAGS_DEBUG) $(INCLUDE_FLAGS) -o $(O_FILE_TEST_DEBUG)

vector_test.o:
	@mkdir -p $(BUILD_DIR)
	@mkdir -p $(RELEASE_DIR)
	$(CXX) -c $(CPP_FILES) $(CPP_FLAGS_RELEASE) $(INCLUDE_FLAGS) -o $(O_FILE_TEST_RELEASE)	

debug:	vector_testd.o
	$(CXX) $(O_FILES_DEBUG) -o $(DEBUG_DIR)/$(PROGRAM_DEBUG)

release: vector_test.o
	$(CXX) $(O_FILES_RELEASE) -o $(RELEASE_DIR)/$(PROGRAM_RELEASE)

clean:
	@rm -f $(H_BACKUP_FILES)
	@rm -f $(CPP_BACKUP_FILES)
	@rm -rf $(BUILD_DIR)

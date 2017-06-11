
CC = g++
CFLAGS = -Wall -std=c++17

SOURCE_DIR = src
PACKAGE_DIRS = 	. \
								common

BUILD_DIR = build
OBJ_DIR = $(BUILD_DIR)/obj

vpath %.cpp $(foreach dir, $(PACKAGE_DIRS), $(SOURCE_DIR)/$(dir))

SOURCES = $(foreach dir, $(PACKAGE_DIRS), $(wildcard $(SOURCE_DIR)/$(dir)/*.cpp))
DEPFILES = $(patsubst %.cpp, $(BUILD_DIR)/%.d, $(SOURCES))
OBJS = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(notdir $(SOURCES)))

$(BUILD_DIR)/main: $(OBJS)
	$(CC) $^ -o $@

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

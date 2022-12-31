#声明变量
BIN=./bin
OBJ=./obj
INC=./include
SRC=./src


#查找src目录下的所有cpp文件
SRCS=$(wildcard $(SRC)/*.cpp)
#匹配.cpp文件,放到OBJ下面,让它转化为.o文件
OBJS=$(patsubst %.cpp,$(OBJ)/%.o,$(notdir $(SRCS)))

TARGET=main
TARGET_PATH=$(BIN)/$(TARGET)

#编译器
CC=g++
#编译参数 -g 调试, -Wall 警告信息  -I 头文件
CFLAGS=-g -Wall -I$(INC)

LIB_PATH=-L$(BIN)
LIB_FLAGS=-lmymath_dll

# $@ 表示:前面的  $^ 表示:后面的
$(OBJ)/%.o:$(SRC)/%.cpp
	$(CC) -c $(CFLAGS) $^ -o $@


$(TARGET_PATH):$(OBJS)
	$(CC) $^ $(LIB_PATH) $(LIB_FLAGS) -o $@



.PHONY:clean

clean:
	del /Q /F obj
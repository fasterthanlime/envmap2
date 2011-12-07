# Source files
SRC      = Camera.cpp Color.cpp HdrApp.cpp Image.cpp ImageManager.cpp main.cpp ZMath.cpp Matrix4.cpp MemoryManager.cpp OpenGLApp.cpp OpenGLFBO.cpp OpenGLRenderer.cpp OpenGLShader.cpp OpenGLTextureCube.cpp TriMesh.cpp TriMeshManager.cpp Vector3.cpp File.cpp DownSampler.cpp OpenGLFont.cpp OpenGLTexture2D.cpp
OBJ      = $(SRC:.cpp=.o)
OUT      = IN55_HDR_demo

# Include
INCLUDES = -I. `sdl-config --cflags`

# Libraries path
# LIBS     = -lGL -lGLU -lboost_thread-mt `sdl-config --libs`
LIBS = -framework OpenGL -lboost_thread-mt `sdl-config --libs`

# Compiler
CCC      = clang
CXX      = clang++

# C++ Compiler flags
# CXXFLAGS = -O2 -W -Wall -pipe
CXXFLAGS = -O0 -g -W -Wall -pipe

.SUFFIXES: .cpp

default: $(OUT)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

GLee.o:
	$(CCC) $(CXXFLAGS) $(INCLUDES) -c GLee.c -o GLee.o

rgbe.c:
	$(CCC) $(CXXFLAGS) $(INCLUDES) -c rgbe.c -o rgbe.o

$(OUT): $(OBJ) GLee.o rgbe.o
	$(CXX) $(OBJ) GLee.o rgbe.o -o $(OUT) $(LIBS)

clean:
	rm -f $(OBJ) GLee.o rgbe.o $(OUT)


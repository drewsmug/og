#include <stdio.h>
#include <stdlib.h>

#include <GL/glew.h>
#include <glm/glm.hpp>
using namespace glm;

int main() {
	// Initialise GLFW
	if( !glfwInit() )
	{
		    fprintf( stderr, "Failed to initialize GLFW\n" );
		        return -1;
	}
}

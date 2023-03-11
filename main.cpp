#include <iostream>
#include <GLFW/glfw3.h>


int main(){
    int running = GL_TRUE;

    GLFWwindow *window;

    // initialize GLFW
    if( !glfwInit() )
    {
        fprintf(stderr, "Failed to initialize GLFW\n");
        exit (EXIT_FAILURE);
    }

    // open an OpenGL window
    window = glfwCreateWindow(300, 300, "Geares", NULL, NULL);

    if(!window){
        perror("Failed  to open GLFW window \n");
        glfwTerminate();
        exit(EXIT_FAILURE);
    }


    while( !glfwWindowShouldClose(window)){
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}
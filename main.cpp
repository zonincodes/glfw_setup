#include <iostream>
#include <GLFW/glfw3.h>


int main(){
    int running = GL_TRUE;

    // initialize GLFW
    if( !glfwInit)
    {
        exit (EXIT_FAILURE);
    }

    // open an OpenGL window
    GLFWwindow *window;
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
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

#include <SDL.h>      // for window management, input, ect
#include <GL/glew.h>  // for opengl extensions
#include <GL/gl.h>    // core opengl functions


// global variables
SDL_Window* window = NULL;
SDL_GLContext glContext = NULL;


// function declaration
bool init();
void kill();
bool loop();


// main program
int main(){

}


// definition for init process
bool init(){

  // initialisation and validation of sdl
  if (SDL_Init( SDL_INIT_EVERYTHING) < 0){
    std::cout << "Error initialising SDL: " << SDL_Get_Error() << std::endl;
    system("pause");
    return false;
  }

  // set opengl attributes
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
  SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
  SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
  SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);

  
  // creating window, opengl context, error handling
  window = SDL_CreateWindow( "MotionSQRD", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, SDL_WINDOW_SHOWN );
  SDL_GLContext context = SDL_GL_CreateContext(window); // links opengl to window (provides context :3)
  
  if(!window){
    std::cout << "Error creating window: " << SDL_GET_ERROR() << std::endl;
    system("pause");
    return false;
  }

  if (!glContext){
    std::cout << "Error creating OpenGL content: " << SDL_GetError() << std::endl;
    system("pause")
    return false;
  }
  
  if ( glewInit() != GLEW_OK ){ // initialisation of glew
    std::cout << "Error initialising GLEW" << std::endl;
    system("pause")
    return false;
  }
  
}


// definition for loop function
bool loop(){

}


// definition for kill function
void kill(){

}




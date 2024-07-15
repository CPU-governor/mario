#include<SDL2/SDL.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
// environmental variables
#define WINDOW_W 800
#define WINDOW_H 600

SDL_Window * window=NULL;
SDL_Renderer * renderer=NULL;
SDL_Texture * texture=NULL;
SDL_Surface *surface=NULL;

bool init(){
	SDL_Init(SDL_INIT_EVERYTHING);
	window=SDL_CreateWindow("mario",0,0,WINDOW_W,WINDOW_H,0);
	renderer=SDL_CreateRenderer(window,-1,0);
}

void quit (){
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}
 void loadSprite(const char *file){
 	SDL_Surface * tempSurface = SDL_LoadBMP(file);
 	texture=SDL_CreateTextureFromSurface(texture,tempSurface);
 	
 }

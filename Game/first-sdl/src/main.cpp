/* Header */
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <string>

/* Constants*/
constexpr int kScreenWidth{1920};
constexpr int kScreenHeight{1080};

/* Function prototype */
/*--------------------*/
// Starts up SDL and create window
bool init();

// Loads media
bool loadMedia();

// Frees media and shuts down SDL
void close();

/* Global variables */
/*------------------*/
// The window we'll be rendering to
SDL_Window *gWindow{nullptr};

// The surface will contained by the window
SDL_Surface *gScreenSurface{nullptr};

// The image we will load and show on the screen
SDL_Surface *gHelloWorld{nullptr};

/* Main Program */
/*--------------*/
int main(int argc, char *args[])
{
    // Final exit code
    int exitCode{0};

    // Initialize
    if (!init())
    {
        SDL_Log("Unable to initialize Program! \n");
        exitCode = 1;
    }
    else
    {
        // Load media
        if (!loadMedia())
        {
            SDL_Log("Unable to load media! \n");
            exitCode = 2;
        }
        else
        {
            // Quit flag
            bool quit{false};

            // The event data
            SDL_Event e;
            SDL_zero(e);

            // Main loop
            while (!quit)
            {
                // Get event data
                while (SDL_PollEvent(&e))
                {
                    // If event is quit type
                    if (e.type == SDL_EVENT_QUIT)
                    {
                        // End the loop
                        quit = true;
                    }
                }

                // Fill the surface white
                SDL_FillSurfaceRect(gScreenSurface, nullptr, SDL_MapSurfaceRGB(gScreenSurface, 0xff, 0xff, 0xff));

                // Render image on screen
                SDL_BlitSurface(gHelloWorld, nullptr, gScreenSurface, nullptr);

                // Update the surface
                SDL_UpdateWindowSurface(gWindow);
            }
        }
    }
    // Clean up
    close();

    return exitCode;
}

/* Functoin implementations*/
/*-------------------------*/
bool init()
{
    // Initialization flag
    bool success{true};

    // Initialize SDL
    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        SDL_Log("SDL couldn't initialized video! SDL error: %s\n", SDL_GetError());
        success = false;
    }
    else
    {
        // Create window
        if (gWindow = SDL_CreateWindow("Learn SDL3", kScreenWidth, kScreenHeight, 0); gWindow == nullptr)
        {
            SDL_Log("SDL couldn't initialized window! SDL error: %s\n", SDL_GetError());
            success = false;
        }
        else
        {
            // Get window surface
            gScreenSurface = SDL_GetWindowSurface(gWindow);
        }
    }

    return success;
}

bool loadMedia()
{
    // File load flag
    bool success{true};

    // load splash media
    std::string imagePath{"D:/Belajarr/c/Game/first-sdl/src/img/dummy.bmp"};
    if (gHelloWorld = SDL_LoadBMP(imagePath.c_str()); gHelloWorld == nullptr)
    {
        SDL_Log(" Unable to laod BMP! Error: %s\n", imagePath.c_str(), SDL_GetError());
        success = false;
    }

    return success;
}

void close()
{
    // Clean surface
    SDL_DestroySurface(gHelloWorld);
    gHelloWorld = nullptr;

    // Destroy window
    SDL_DestroyWindow(gWindow);
    gWindow = nullptr;
    gScreenSurface = nullptr;

    // Quit SDL subsystems
    SDL_Quit();
}

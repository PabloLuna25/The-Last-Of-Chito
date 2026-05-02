/*
Raylib example file.
This is an example main file for a simple raylib project.
Use this as a starting point or replace it with your code.

by Jeffery Myers is marked with CC0 1.0. To view a copy of this license, visit https://creativecommons.org/publicdomain/zero/1.0/

*/

#include "raylib.h"

#include "resource_dir.h"	// utility header for SearchAndSetResourceDir

#include "entities/player/player.h"

Texture2D player;

int main ()
{
    // Test to make a player
    Player p1( //float width, float height, std::string hitbox_type, int health, int movementSpeed
        100.0f,
        120.0f,
        "player",
        100,
        1
    );

    float posX = 0;
    float posY = 0;
	// Tell the window to use vsync and work on high DPI displays
	SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI);

	// Create the window and OpenGL context
	InitWindow(800, 600, "The Last Of Chito");

    Image yapdollar = LoadImage("resources/assets/sprites/Yapdollar.png");
    ImageResize(&yapdollar, static_cast<int>(p1.getWidth()), static_cast<int>(p1.getHeight()));
    player = LoadTextureFromImage(yapdollar);
    UnloadImage(yapdollar);

	// Utility function from resource_dir.h to find the resources folder and set it as the current working directory so we can load from it
	SearchAndSetResourceDir("resources");
	
	// game loop
	while (!WindowShouldClose())		// run the loop until the user presses ESCAPE or presses the Close button on the window
	{

        if (IsKeyDown(KEY_A)){
            posX -= 5 * p1.getMovementSpeed();
        }
        if (IsKeyDown(KEY_D)){
            posX += 5 * p1.getMovementSpeed();
        }
        if (IsKeyDown(KEY_W)){
            posY -= 5 * p1.getMovementSpeed();
        }
        if (IsKeyDown(KEY_S)){
            posY += 5 * p1.getMovementSpeed();
        }
		
        // ######## Drawing ##########
		BeginDrawing();

		// Setup the back buffer for drawing (clear color and depth buffers)
		ClearBackground(BLACK);

		DrawTexture(player, posX, posY, WHITE);

		// draw our texture to the screen
		//DrawTexture(wabbit, 400, 200, WHITE);
		
		// end the frame and get ready for the next one  (display frame, poll input, etc...)
		EndDrawing();
	}

	// cleanup
    UnloadTexture(player);
	// destroy the window and cleanup the OpenGL context
	CloseWindow();
	return 0;
}

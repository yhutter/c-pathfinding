#include <stdio.h>

#include "raylib.h"

Color background_color = (Color) {0x1c, 0x1b, 0x19};

int main(void) {
	const int screen_width = 1280;
	const int screen_height = 720;
	InitWindow(screen_width, screen_height, "Pathfinding");
	SetTargetFPS(60);
	while (!WindowShouldClose()) {
		BeginDrawing();

		ClearBackground(background_color);

		EndDrawing();

	}
	CloseWindow();
	return 0;
}

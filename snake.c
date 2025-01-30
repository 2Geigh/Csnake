#include <stdio.h>
#include <time.h>
#include <string.h>

struct Screen {
	int width;
	int height;
	int frames_per_second;
};

struct Screen screen = {
	20,
	20,
	1,
};

void draw_row() {
	for (int i=0; i<screen.width; i++) {
		printf(".");
	}
	
	printf("\n");
}

void draw_screen() {
	for (int i=0; i<screen.height; i++) {
		draw_row();
	}
}

snake_start_position() {
	
}

void initialise_snake() {

}

// const char* draw_screen() {
// 	for (int i=0; i<20; i++) {

// 	}
// }

int main(void) {

	draw_screen();
	initialise_snake();

	return(0);
}

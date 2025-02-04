#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define SCREEN_WIDTH 30
#define SCREEN_HEIGHT 30

struct Coordinate {
	int x;
	int y;
};

#define SNAKE_STARTING_LENGTH 3

struct Coordinate snake_pixels[SNAKE_STARTING_LENGTH];
struct Coordinate snake_velocity;
struct Coordinate snake_head_position;


void initialize_snake_pixels(void) {
	snake_velocity = (struct Coordinate){.x=0, .y=1};

	snake_head_position = (struct Coordinate){floor(SCREEN_WIDTH/2), floor(SCREEN_HEIGHT/3)};
	struct Coordinate snake_tail_fragment_2 = {.x=snake_head_position.x, .y=(snake_head_position.y - 1)};
	struct Coordinate snake_tail_fragment_3 = {.x = snake_tail_fragment_2.x, .y = (snake_tail_fragment_2.y - 1)};
	
	snake_pixels[0] = snake_head_position;
	snake_pixels[1] = snake_tail_fragment_2;
	snake_pixels[2] = snake_tail_fragment_3;
	// APPEND THE THREE TO snake_pixels
};

void draw_screen(void);
	// This function will take in arrays of type Coordinate,
	// map the points onto a grid of dimensions SCREEN_WIDTH and SCREEN_HEIGHT,
	// and finally draw out the grid row by row

	//  

// calculate_snake_pixels()

// char BACKGROUND = ".";

int main(void) {
	bool running = true;

	initialize_snake_pixels();

	for (int i = 0; i < sizeof(snake_pixels) / sizeof(snake_pixels[0]); i++) {
		printf("(%d,%d)\n", snake_pixels[i].x, snake_pixels[i].y);	
	}
	

	// 	while(running) {
		
	// 		Get_user_input()

	// 		recalculate_snake_pixels();

	// 		If (snake_will_hit_wall() || snake_will_eat_itself) {
	// 			break;
	// 		}

	// 		If snake_ate_fruit {
	// 			recalculate_fruit_pixels();
	// 		}

	// 		draw_screen(fruit_pixels, snake_pixels);
	// 	}

	printf("Success!\n");
	return 0;
}

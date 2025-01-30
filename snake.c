#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int SCREEN_WIDTH = 30;
int SCREEN_HEIGHT = 30;

struct Coordinate {
	int x;
	int y;
};

int SNAKE_STARTING_LENGTH = 3;

struct Coordinate snake_pixels[SNAKE_STARTING_LENGTH];
struct Coordinate snake_velocity;
struct Coordinate snake_head_position;


void initialize_snake_pixels(void) {
	struct Coordinate snake_velocity = {.x=0, .y=1};

	struct Coordinate snake_head_position = {floor(SCREEN_WIDTH/2), floor(SCREEN_HEIGHT/3)};
	struct Coordinate starting_tail_fragment_2 = {.x=snake_head_position.x, .y=(snake_head_position.y - 1)};
	struct Coordinate starting_tail_fragment_3 = {.x = starting_tail_fragment_2.x, .y = (starting_tail_fragment_2.y - 1)};
	
	// APPEND THE THREE TO snake_pixels
};

// calculate_snake_pixels()

// char BACKGROUND = ".";

int main(void) {
	initialize_snake_pixels();

	bool running = true;

	

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

	return 0;
}

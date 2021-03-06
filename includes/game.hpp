#ifndef __GAME_HPP__
#define __GAME_HPP__

#include <vector>

#include "ship.hpp"
#include "player.hpp"

#define TIMER_INTERVAL 10
#define WATER_ID 1
#define ANIMATION_ID 2

extern player player1, player2;
extern int width, height;
extern int water_paramater;
extern double animation_param;
extern std::string s;

namespace game{
	void init();		
	void on_reshape(int width, int height);

	void draw_field(float z);
	void draw_left_field();
	void draw_right_field();
	bool inside_field(float, float);
	void draw_debug_coords();

	void on_timer(int val);

	void display_text(std::string s);
}

#endif

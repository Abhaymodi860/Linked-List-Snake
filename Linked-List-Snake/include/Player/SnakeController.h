#pragma once

namespace Player
{
	class SnakeController
	{
	private:
		//SnakeController* snake_controller;

	public:
		SnakeController();
		~SnakeController();

		void initialize();
		void update();
		void render();
	};
}
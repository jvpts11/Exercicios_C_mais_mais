#pragma once

#include "Geometry.h"
#include "Physics.h"

#include <iomanip>

namespace my_game {

	enum class Type {
		kSpaceShip,
		kSpaceMonster,
		kMeteor
	};

	class Enemy : public CollisionBox{

		static int count_enemies_;

		private:
			int index_;
			bool hide_;

			Type type_of_enemy_;

		public:

			Enemy(float pos_x, float pos_y, float sizeWidth, float sizeHeight, Type enemyType) : CollisionBox(pos_x,pos_y,sizeWidth,sizeHeight) {
				index_ = count_enemies_;
				hide_ = false;
				this->type_of_enemy_ = enemyType;
				count_enemies_++;
			}
		
			bool set_hide(bool hide) {
				hide_ = hide;
			}

			void move(float speed_X, float speed_Y) {
				cout << "[MOVE Enemy #" << index_ << "] ";
				cout << "Current Position = (" << central_x << "," << central_y << ")    ";

				central_x += speed_X;
				central_y += speed_Y;

				cout << "Speed X:" << std::setw(3) << speed_X << "Speed Y:" << std::setw(3) << speed_Y;
				cout << "    New Position = (" << central_x << "," << central_y << ")" << std::endl;
			}
	};
}

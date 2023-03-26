#pragma once

#include "Geometry.h"
#include "Physics.h"

namespace my_game {

	enum class Type {
		kSpaceShip,
		kSpaceMonster,
		kMeteor
	};

	class Enemy {

		static int count_enemies_;

		protected:
			int index_;
			bool hide_;

			Type type_of_enemy_;

		public:

			Enemy() {
				
			}
		
			bool set_hide() {
				return true;
			}

			void move() {

			}
	};
}

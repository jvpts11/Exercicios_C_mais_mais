#pragma once

#include <iostream>
#include "Geometry.h"

namespace my_game {

	using std::cout;
	using std::endl;

	class CollisionBox : protected Rectangle{
		
		private:
			bool hit_ = false;
		public:

			CollisionBox();

			bool hit(bool hit_result) {

			}

			bool Compute_Collision(CollisionBox &rect1, CollisionBox &rect2) {
				if (rect1.central_x < rect2.central_x + rect2.rect_width &&
					rect1.central_x + rect1.rect_width > rect2.central_x &&
					rect1.central_y < rect2.central_y + rect2.rect_height &&
					rect1.central_y + rect1.rect_height > rect2.central_y) {
					cout << "" << endl;
					return true;
				}
				else {
					return false;
				}
			}
	};
}

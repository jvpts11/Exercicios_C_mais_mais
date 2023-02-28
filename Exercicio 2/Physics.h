#pragma once

#include "Geometry.h"

namespace my_game {

	class CollisionBox : public Rectangle{
		
		private:
			bool hit_ = false;
		public:

			bool Compute_Collision(Rectangle rect1, Rectangle rect2) {
				if (rect1.central_x < rect2.central_x + rect2.rect_width &&
					rect1.central_x + rect1.rect_width > rect2.central_x &&
					rect1.central_y < rect2.central_y + rect2.rect_height &&
					rect1.central_y + rect1.rect_height > rect2.central_y) {
					return true;
				}
				else {
					return false;
				}
			}
	};
}

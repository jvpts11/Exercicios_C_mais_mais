#pragma once

#include <iostream>
#include "Geometry.h"
#include <algorithm>

namespace my_game {

	using std::cout;
	using std::endl;
	using std::min;
	using std::max;

	class CollisionBox : public Rectangle{
		
		private:
			bool hit_ = false;
		public:

			CollisionBox();
			CollisionBox(float x, float y, float width, float height) : Rectangle(x + width / 2, y + height / 2, width, height), hit_{false}{

			}

			bool hit() {
				return hit_;
			}

			bool Compute_Collision(CollisionBox &rect) {
				float min_x = min<float>(central_x - rect_width /2.0f, rect.central_x - rect.rect_width / 2.0f);
				float max_x = min<float>(central_x + rect_width /2.0f, rect.central_x + rect.rect_width / 2.0f);
				float min_y = min<float>(central_y - rect_height / 2.0f, rect.central_y - rect.rect_height / 2.0f);
				float max_y = min<float>(central_y + rect_height / 2.0f, rect.central_y + rect.rect_height / 2.0f);

				if ((max_x - min_x < rect_width + rect.rect_width) && (max_y - min_y < rect_height + rect.rect_height)) {
					hit_ = true;
					rect.hit_ = true;

					cout << "BOOM" << "\n";
				}
				else {
					hit_ |= false;
				}

				return hit_;
			}
	};
}

#pragma once

namespace my_game {
	
	class Rectangle {

		protected:
			float central_x;
			float central_y;
			float rect_height;
			float rect_width;


		public:

			Rectangle(float central_x, float central_y, float rect_height, float rect_width) {
				this->central_x = central_x;
				this->central_y = central_y;
				this->rect_height = rect_height;
				this->rect_width = rect_width;
			}

	};

}
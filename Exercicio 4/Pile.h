#pragma once
#include <iostream>

#ifndef N

using std::cout;

namespace stuff {

template <typename Data>

	class Stack {

		int numberOfElements;

	public:
		Stack();
		Stack(int numberOfElements) {
			this->numberOfElements = numberOfElements;
			checkNumberOfElementsSize(numberOfElements);
			cout << "Construtor Executado";
		}

		~Stack() {
			delete this;
			cout << "Destrutor Executado";
		}

		bool push() {

		}

		Data pull(Data valueToPull) {

		}

		void checkNumberOfElementsSize(int argA) {
			if (argA < 1 || argA == 0) {
				throw std::bad_exception("Tamanho Negativo");
			}
		}
	};


}

#endif

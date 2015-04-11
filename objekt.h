#ifndef OBJEKT_H
#define OBJEKT_H

#include <string>
#include <vector>

namespace objekt{


	typedef struct {
		int 
		std::vector<float> v;
		std::vector<float> vt;
		std::vector<float> vn;

		/* special parameters */
		std::vector<float> vx;
		std::vector<float> vy;
	}shape_t;


	typedef struct {
		std::string name;
		std::vector<shape_t> shape;
		std::vector<std::vector<int>> ;
	}obj_t;
}



#endif
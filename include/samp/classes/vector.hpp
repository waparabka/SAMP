#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <cmath>


#pragma pack(push, 1)
class CVector {
public:
	float x, y, z;

	CVector() : x(0), y(0), z(0) {}
	CVector(float x, float y, float z) : x(x), y(y), z(z) {};


	void set(float _x, float _y, float _z) {
		x = _x;
		y = _y;
		z = _z;
	}
	
	float get_length_squared() const {
		return x * x + y * y + z * z;
	}

	float get_length() const {
		return std::sqrt(get_length_squared());
	}

	void normalize() {
		float len = get_length();
		x /= len;
		y /= len;
		z /= len;
	}

	float dot(const CVector& vec) const {
		return x * vec.x + y * vec.y + z * vec.z;
	}

	CVector cross(const CVector& vec) const {
		return CVector(y * vec.z - vec.y * z, z * vec.x - vec.z * x, x * vec.y - vec.x * y);
	}

	void zero_near_zero() {
		if (std::abs(x) < 0.0001f)
			x = 0;
		if (std::abs(y) < 0.0001f)
			y = 0;
		if (std::abs(z) < 0.0001f)
			z = 0;
	}

	float distance_to(const CVector& other) const {
		float dx = other.x - x;
		float dy = other.y - y;
		float dz = other.z - z;

		return std::sqrt(dx * dx + dy * dy + dz * dz);
	}
};
#pragma pack(pop)


#endif // !VECTOR_HPP
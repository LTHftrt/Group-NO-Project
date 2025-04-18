#include <iostream>
#include <vector>

template <typename T>
class Figure
{
	std::vector<T> sides;
	std::vector<T> angles;

public:
	Figure() { sides = { 0 }; angles = { 0 }; }
	Figure(std::vector<T> sides, std::vector<T> angles)
	{
		this->sides = sides;
		this->angles = angles;
	}
	~Figure() {}

	void set_sides(std::vector<T> sides) { this->sides = sides; }
	void set_angles(std::vector<T> angles) { this->angles = angles; }

	std::vector<T> get_sides() { return   sides; }
	std::vector<T> get_angles() { return  angles; }
	

	virtual T perimetr()
	{
		T P = T();
		for (int i : sides)
			P += i;
		return P;
	}

	bool Equality_Of_Sides()
	{
		if (sides.empty()) return 0;
		for (T i : sides)
		{
			T temp = sides.at(0);
			if (temp != i) return 0;
		}
		return 1;
	}

	bool Equality_Of_Angles()
	{
		if (angles.empty()) return 0;
		for (T i : angles)
		{
			T temp = angles.at(0);
			if (temp != i) return 0;
		}
		return 1;
	}

};

int main()
{
	std::vector<double> sides = { 6,6,6 };
	std::vector<double> angles = { 60,60,60 };
	Figure<double> ob(sides, angles);

	std::cout << ob.perimetr();
}

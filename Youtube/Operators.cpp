// operators are just functions
#include<iostream>
#include<string>

struct Vector2  // public is default
{
	float x, y;
	
	Vector2(float x, float y)
		: x(x), y(y) {}		// constructor

	Vector2 Add(const Vector2& other) const  // not modify class members
	{
		return Vector2(x + other.x, y + other.y); // other means struct parameters (x, y), use point to specify the point it refers to
	}

	Vector2 operator+(const Vector2& other) const
	{
		return Add(other);
	}

	Vector2 Multiply(const Vector2& other) const  
	{
		return Vector2(x * other.x, y * other.y); 
	}

	Vector2 operator*(const Vector2& other) const
	{
		return Multiply(other);
	}

	bool operator==(const Vector2& other) const
	{
		return x == other.x && y == other.y;
	}

	bool operator!=(const Vector2& other) const
	{
		//return !operator==(other);
		return !(*this == other);
	}
};

// print class-inner content to the console 
// use c++ overload feature
// std::ostream is the original definition of "<<"
// operator<< to indicate it's gonna use to overfload operator
// std::ostream& stream is the left side of "<<"
// const Vector2& other is the right side of "<<" needed to be print out
std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << ", " << other.y; // the stream already knows how to print a float
	return stream; // finally, we need to return a reference to the stream
}

int main()
{
	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerup(1.1f, 1.1f);

	Vector2 result1 = position.Add(speed.Multiply(powerup));
	Vector2 result2 = position + speed * powerup;

	// Error: no operator "<<" matches these operands
	// operand types are std::ostream << Vector2
	// we can't do this because there is no overload for this operator which takes in an output stream which is what cout is and then an actual Vector2 but we can add that
	std::cout << result1 << std::endl;  // left side of "<<" is a class cout
	std::cout << result2 << std::endl;  // right side of "<<" is various data types that cout already knows how to print out 

	if (result1 == result2)
	{

	}

	std::cin.get();
}
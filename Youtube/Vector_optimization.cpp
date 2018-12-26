#include<iostream>
#include<string>
#include<vector>

struct Vertex
{
	float x, y, z;

	Vertex(float x, float y, float z)
		: x(x), y(y), z(z)
	{
	}

	Vertex(const Vertex& vertex)
		: x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};

int main()
{
	std::vector<Vertex> vertices;
	//std::vector<Vertex> vertices(3); // it's gonna to construct three vertex objects

	vertices.reserve(3); // reserve makes sure that we have enough memory 
	// it prints 6 copies to console. 
	/*vertices.push_back(Vertex(1, 2, 3 )); // construct it in the current stack frame of the main function and put it into that vector
	vertices.push_back(Vertex(4, 5, 6)); 
	vertices.push_back(Vertex(7, 8, 9));*/

	vertices.emplace_back(1, 2, 3); 
	vertices.emplace_back(4, 5, 6);
	vertices.emplace_back(7, 8, 9);

	std::cin.get();
}

// optimization 1: construct that vertex in place in the actual memory that the vector actually allocated for us
// emplace_back: pass the parameter list for the constructor. hey, construct a vertex object with the following parameters in place in our actual memory
// optimization 2: if you know how many elements you need to add, you can predefine enough size to contain them
// reserve
// vector belongs to std namespace
// in fact, it shouldn't be called vector, it should be called something like arraylist
// vector can actually resize, thus it is truely called dynamic array
// all u need to do is allocate a vecotr, such as 10 elements, when you wanna extend it much bigger, then it will create a new array, copy the old one and paste it to the new one, finally, automatically delete the old one.

#include<iostream>
#include<string>
#include<vector>

struct Vertex
{
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

void Function(const std::vector<Vertex>& vertices)
{

}

int main()
{
	std::vector<Vertex> vertices;
	vertices.push_back({ 1, 2, 3 }); // add elements into it
	vertices.push_back({ 4, 5, 6 });
	Function(vertices);

	for (int i = 0; i < vertices.size(); i++) //vertices.size() = 2
		std::cout << vertices[i] << std::endl;

	vertices.erase(vertices.begin() + 1);

	for (Vertex& v : vertices) // range based for loop
		std::cout << v << std::endl;

	

	std::cin.get();
}
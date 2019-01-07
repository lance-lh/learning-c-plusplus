#include<iostream>
#include<thread>

static bool s_Finished = false;

void DoWork()
{
	using namespace std::literals::chrono_literals;

	std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;

	while (!s_Finished)  // s_Finished = false, keep running
	{
		std::cout << "Working...\n";
		std::this_thread::sleep_for(1s);
	}
}

int main()
{
	std::thread worker(DoWork);

	std::cin.get(); // block this thread until we press ENTER
	s_Finished = true;  // change status, stop working

	worker.join();  // we don't do cin.get() until that thread has actually finished its execution
	std::cout << "Finished." << std::endl;
	std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;

	std::cin.get();
}
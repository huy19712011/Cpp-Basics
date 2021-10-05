//#include <iostream>
//
//int main()
//{
//	std::cout << "Hello World\n";
//	std::cout << "For test only\n";
//	std::cout << "after 3rd change on gitHub for test\n";
//	std::cout << "after 4th change on gitHub for test\n";
//	std::cout << "after 5th change on gitHub for test\n";
//}

// one more test on gitHub
// 2nd change on gitHub for test
// 3rd change on gitHub for test
// 4th change on gitHub for test
// 5th change on gitHub for test





#include <Stream.h>
#include <vector>
#include <iostream>

using namespace stream;

std::vector<int> make_vector() {
    return { 1, 2, 3 };
}

stream::Stream<int> make_stream_safe1() {
    return MakeStream::from_move(make_vector());
}

Stream<int> make_stream_safe2() {
    std::vector<int> vec = { 4, 5, 6 };
    return MakeStream::from_move(vec);
}

Stream<int> make_stream_unsafe() {
    std::vector<int> vec = { 7, 8, 9 };
    return MakeStream::from(vec); // BAD!
}

int main(int argc, char const* argv[]) {
    (make_stream_safe1() | op::print_to(std::cout)) << std::endl;
    (make_stream_safe2() | op::print_to(std::cout)) << std::endl;
    //(make_stream_unsafe() | op::print_to(std::cout)) << std::endl;
}



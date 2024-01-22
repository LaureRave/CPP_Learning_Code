#include "Rectangle.h"

int main()
{
    Rectangle rect(2.f, 4.f);
    std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;

    rect.scale(3);
    std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;

    Rectangle square(2.5f);
    std::cout << "{ L: " << rect.get_length() << " }" << std::endl;

    Rectangle::set_default_size(2.f);
    Rectangle s1; // -> size is 2.f
    Rectangle s2; // -> size is 2.f

    Rectangle::set_default_size(7.f);
    Rectangle s3; // -> size is 7.f
    Rectangle s4; // -> size is 7.f
    Rectangle s5; // -> size is 7.f

    std::cout << "{ L: " << s1.get_length() << " }" << std::endl;
    std::cout << "{ L: " << s2.get_length() << " }" << std::endl;

    std::cout << "{ L: " << s3.get_length() << " }" << std::endl;
    std::cout << "{ L: " << s4.get_length() << " }" << std::endl;
    std::cout << "{ L: " << s5.get_length() << " }" << std::endl;

    return 0;
}

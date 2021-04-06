#include <iostream>



int main() {
    unsigned char data[] = {0x00,0x01,0x01,0x00};
    std::cout << data << std::endl;
    short* np = (short*)(data);
    std::cout <<  np[0] << std::endl;
    std::cout <<  np[1] << std::endl;
    return 0;
}
#include <iostream>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    std::cout << "This is a Web Client." << std::endl;
    
    /* Initialize the server (make the socket descriptor) */
    int listenfd = socket(AF_INET, SOCK_STREAM, 0);
    if (listenfd == -1) {
        std::cerr << "Server error: Cannot create socket descriptor!" << std::endl;
        return -1;
    }

}
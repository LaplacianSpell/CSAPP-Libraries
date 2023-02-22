#include <iostream>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    std::cout << "This is a Web Server" << std::endl;
    
    /* Initialize the server (make the socket descriptor) */
    int listenfd = socket(AF_INET, SOCK_STREAM, 0);
    if (listenfd == -1) {
        std::cerr << "Server error: Cannot create socket descriptor!" << std::endl;
        return -1;
    }

    /* Make the socket address. */
    struct sockaddr_in cliaddr;
    /* Initialize the Protocols */
    cliaddr.sin_family = AF_INET;
    /* Initialize the port */
    cliaddr.sin_port = htons(4000);
    /* 
    Bind the IP 0.0.0.0 
    Let the Router to choose the address.
    */
    cliaddr.sin_addr.s_addr = INADDR_ANY; // Hard code 0x0

    /* Bind IP: 4000 socket */
    if (bind(listenfd, cliaddr, sizeof(cliaddr)) == -1) {
        std::cerr << "Server error: Cannot bind to Server socket address!" << std::endl;
        return -1;
    }

    /* Listen to given port */
    // Hight Cocurrency level wait: backlog argument.
    if (listen(listenfd, 1024) == -1) {
        std::cerr << "Server error: Cannot stick to listen the port!" << std::endl;
        return -1;
    }

    // TODO: The listen of port to be connected.
    return 0;
}
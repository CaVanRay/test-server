#define CPPHTTPLIB_OPENSSL_SUPPORT 0
#include "httplib.h"
#include <iostream>

int main() {
    httplib::Server server;

    server.Get("/hello", [](const httplib::Request&, httplib::Response& res) {
        res.set_content("Hello from C++!", "text/plain");
    });

    std::cout << "Server running on http://localhost:8080" << std::endl;
    server.listen("localhost", 8080);

    return 0;
}

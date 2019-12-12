#include "server.h"
#include "client.h"

int main(int argc, char* argv[]) {
    init();

    Server server;

    Client client;

    client.work();
}

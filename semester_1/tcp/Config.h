#ifndef SERVER_CONFIG_H
#define SERVER_CONFIG_H

class Config {

public:
    static const int NUMBER_OF_READ_SYMBOLS = 26;
    static const int NUMBER_OF_CLIENTS = 10;
    static const int PORT = 7501;
    static const int HOP = 10;
    static const char DELIMITER = ';';
    static const char *FILE_PATH;
    static const char *INET_ADDR;
};

#endif //SERVER_CONFIG_H

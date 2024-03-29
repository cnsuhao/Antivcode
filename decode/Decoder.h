#ifndef _DECODER_H_
#define _DECODER_H_

#include <string>
#include <exception>

class Database;

typedef std::vector<char> CharSet;

class Decoder {
public:
    Decoder(const std::string &db);
    ~Decoder();

    CharSet decode(const std::string &file);

private:
    Database *_db;
};

#endif //_DECODER_H_

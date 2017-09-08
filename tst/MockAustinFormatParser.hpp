//
// Created by aytas on 9/6/2017.
//

#ifndef CPP_WORKSHOP_MOCKAUSTINFORMAT_HPP
#define CPP_WORKSHOP_MOCKAUSTINFORMAT_HPP


#include "IAustinFormatParser.hpp"

#include <string>

#include <gmock/gmock.h>

class MockAustinFormatParser : public IAustinFormatParser {
public:
  MOCK_METHOD1(read_file,
     std::map<std::string, std::string>(std::string filename));
};

#endif //CPP_WORKSHOP_MOCKAUSTINFORMAT_HPP

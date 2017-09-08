//
// Created by aytas on 9/6/2017.
//

#ifndef CPP_WORKSHOP_MOCKAUSTINFORMAT_HPP
#define CPP_WORKSHOP_MOCKAUSTINFORMAT_HPP


#include "IAustinFormat.hpp"

#include <string>

#include <gmock/gmock.h>

class MockAustinFormat : public IAustinFormat {
public:
  MOCK_METHOD2(add_new_entry, void(std::string name, std::string content));
  MOCK_METHOD1(get_entry, std::string(std::string name));
  MOCK_METHOD1(read_from_file, void(std::string filename));
  MOCK_METHOD1(write_to_file, void(std::string filename));
};

#endif //CPP_WORKSHOP_MOCKAUSTINFORMAT_HPP

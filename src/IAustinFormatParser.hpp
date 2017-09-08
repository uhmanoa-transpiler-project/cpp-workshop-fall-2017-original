//
// Created by aytas on 9/5/2017.
//

#ifndef CPP_WORKSHOP_IAUSTINFORMATPARSER_HPP
#define CPP_WORKSHOP_IAUSTINFORMATPARSER_HPP

#include <string>

#include "AustinFormat.hpp"

class IAustinFormatParser {
public:

  /**
   * @brief
   * @throws
   * @param filename
   * @return
   */
  std::map<std::string, std::string>
  read_file(std::string filename) {
    return std::map<std::string, std::string>();
  };
};

#endif //CPP_WORKSHOP_IAUSTINFORMATPARSER_HPP

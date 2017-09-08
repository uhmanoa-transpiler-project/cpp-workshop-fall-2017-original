//
// Created by aytas on 9/5/2017.
//

#ifndef CPP_WORKSHOP_AUSTINFORMAT_HPP
#define CPP_WORKSHOP_AUSTINFORMAT_HPP

#include <string>
#include <map>
#include <stdexcept>

#include "IAustinFormat.hpp"
#include "IAustinFormatParser.hpp"

template <typename Parser>
class AustinFormat : public IAustinFormat {
  std::map<std::string, std::string>  dictionary;
  Parser& parser;
public:
  AustinFormat(Parser& parser) :
      parser(parser) {}

  virtual void add_new_entry(std::string name, std::string content) override {

  }

  virtual std::string get_entry(std::string name) override {
    return "";
  }
  virtual void read_from_file(std::string filename) override {
    const auto dict = parser.read_file(filename);
    this->dictionary = dict;
  }
  virtual void write_to_file(std::string filename) override {
    // Create a file.
  }

};

#endif //CPP_WORKSHOP_AUSTINFORMAT_HPP

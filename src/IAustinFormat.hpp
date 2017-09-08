//
// Created by aytas on 9/5/2017.
//

#ifndef CPP_WORKSHOP_IAUSTINFORMAT_HPP
#define CPP_WORKSHOP_IAUSTINFORMAT_HPP

#include <string>

/**
 * @brief Interface for the AustinFormat dictionary data type.
 */
class IAustinFormat {
public:
  virtual void        add_new_entry(std::string name, std::string content) = 0;
  virtual std::string get_entry(std::string name) = 0;
  virtual void        read_from_file(std::string filename) = 0;
  virtual void        write_to_file(std::string filename) = 0;
};


#endif //CPP_WORKSHOP_IAUSTINFORMAT_HPP

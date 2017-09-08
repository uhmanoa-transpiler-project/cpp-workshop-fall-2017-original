//
// Created by aytas on 9/5/2017.
//

#include <gmock/gmock.h>

#include <iostream>
#include <stdexcept>

#include "AustinFormat.hpp"
#include "MockAustinFormatParser.hpp"

using ::testing::Throw;
using ::testing::_;

TEST(UnitAustinFormatTest, basic_test) {
  // Given: our file format parser
  MockAustinFormatParser mock_parser;

  // Given: the mock parser will fail with a syntax error
  EXPECT_CALL(mock_parser, read_file(_))
      .Times(1)
      .WillOnce(Throw(std::runtime_error("syntaxError")));

  // Given: our file format interface uses the parser
  AustinFormat<MockAustinFormatParser> test_format(mock_parser);

  // When: You try to read a file
  // Then: expect a failure.
  EXPECT_THROW({
    test_format.read_from_file("dummy_format.austin");
  }, std::runtime_error);

  // Then: the mock parser should have been called once.
}



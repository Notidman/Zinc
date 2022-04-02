#pragma once
#ifndef COMMANDPARSER_HPP
#define COMMANDPARSER_HPP value
#include <string>
#include <memory>
#include <vector>
#include <string_view>

namespace zinc 
{
  /// Parse input commands
  class CommandParser
  {
  public:
    CommandParser(const std::string& command,
        std::shared_ptr<std::vector<std::string>> params);
  };

} // namespace zinc

#endif /* ifndef COMMANDPARSER_HPP */

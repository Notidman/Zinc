#include "commandparser.hpp"
#include "constants.hpp"
#include "filegenerator.hpp"
#include "consolewriter.hpp"
#include <memory>

namespace zinc
{
  CommandParser::CommandParser(const std::string& command,
      std::shared_ptr<std::vector<std::string>> params)
  {
    if ( command == "new" )
    {
      auto filegenerator{std::make_unique<FileGenerator>
        (params->at(2))};

      filegenerator->create_project();
    }
    if ( command == "doc" )
    {
      
    }
    if ( command == "help" )
    {
      consoleWriter::help();
    }
  }



} // namespace zinc 

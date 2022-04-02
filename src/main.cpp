
/*|+----------------------------------------------------------------------+|*\
 *|   ProgramName: Zinc // Zinc - is not cbc                               |*
 *|   License: GPL3                                                        |*
 *|   Author: Notidman                                                     |*
 *|   Language: C++20                                                      |*
 *|   Copyright © 2022 Notidman. All Rights Reserved.                      |*
\*|+---------------------------------| ZINC |-----------------------------+|*/

/**
 *  @file main.cpp
 *  Main file programm
 */

#include <iostream>
#include <memory>
#include <vector>

#include "commandparser.hpp"
#include "consolewriter.hpp"
#include "constants.hpp"

int 
main(int argc, char **argv)
{
  try
  {
    auto env{std::make_shared<std::vector<std::string>>(argv, argv + argc)}; 
    auto command_parser{std::make_shared<zinc::CommandParser>(
        env->at(1), 
        env)};
  }
  catch(...)
  {
    zinc::consoleWriter::help_warning();
  }

  return EXIT_SUCCESS;
}

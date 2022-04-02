#include "filegenerator.hpp"
#include <filesystem>
#include <string_view>
#include <iostream>
#include "lpct.hpp"

namespace zinc
{

  namespace fs = std::filesystem;
  using lc = lpct::colors;

  FileGenerator::FileGenerator(const std::string_view &project_name) :
    project_name_{project_name} {}

  void
  FileGenerator::create_project()
  {
    create_dir();
  }

  void
  FileGenerator::create_dir() 
  {
    if ( fs::create_directory(project_name_) )
    {
      prcolor(lc::green, "Created ");
      std::cout << "binary (application) '" <<
        project_name_ << "' package" << std::endl;
    }
    else
    {
      prcolor(lc::red, "Error: ");
      std::cout << " failed to create directory!" <<
        std::endl;
    }
  }

} // namespace zinc

#pragma once
#ifndef FILEGENERATOR_HPP
#define FILEGENERATOR_HPP value
#include <string_view>

namespace zinc
{
  /// Generator new project or files
  class FileGenerator
  {
  public:
    FileGenerator(const std::string_view &project_name);

    /// Create project
    void
    create_project();

  private:

    /// Create dir
    void 
    create_dir();

    /// Create git
    void
    create_git();

    /// Create cmake
    void
    create_cmake();

    /// Project name for generation
    std::string_view project_name_;
  };

} // namespace zinc

#endif /* ifndef FILEGENERATOR_HPP */

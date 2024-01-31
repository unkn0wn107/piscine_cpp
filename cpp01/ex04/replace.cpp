#include "replace.hpp"

Replacer::Replacer(char* argv[]) {
  filename = argv[1];
  stringToReplace = argv[2];
  replacementString = argv[3];
}

Replacer::~Replacer() {}

int Replacer::replace() {
  try {
    _readFile();
    _replaceStrings();
    _writeFile();
  } catch (const std::invalid_argument& e) {
    std::cerr << "Invalid argument: " << e.what() << std::endl;
    return 1;
  } catch (const std::runtime_error& e) {
    std::cerr << "Runtime error: " << e.what() << std::endl;
    return 2;
  } catch (...) {
    std::cerr << "An unexpected error occurred." << std::endl;
    return 3;
  }

  return 0;
}

void Replacer::_readFile() {
  ErrChk::emptyString(filename, "Filename cannot be empty.");
  ErrChk::fileExists(filename, "File does not exist.");
  fileContent = File::readContent(filename);
}

void Replacer::_replaceStrings() {
  ErrChk::emptyString(stringToReplace, "String to replace cannot be empty.");
  if (stringToReplace != replacementString) {
    StringUtils::replaceAll(fileContent, stringToReplace, replacementString);
  }
}

void Replacer::_writeFile() {
  File::writeContent(filename + ".replace", fileContent);
  std::cout << "Replacement complete. Output file: " << filename << ".replace"
            << std::endl;
}
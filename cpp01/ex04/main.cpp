#include <iostream>
#include <fstream>
#include <string>

// These classes have istream, ostream, and iostream as base classes, respectively
// An istream object represents a file input stream so you can only read it
// An ofstream object represents a file output stream that you can only write to it
// An fstream is a file stream that you can read or write

int main(int argc, char *argv[]) {
  // Make sure the program has been passed the correct number of arguments
  if (argc != 4) {
    std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
    return 1;
  }

  // Open the input and output files
  std::ifstream input(argv[1]);
  std::ofstream output(std::string(argv[1]) + ".replace");
  if (!input.is_open() || !output.is_open()) {
    std::cerr << "Error opening file" << std::endl;
    return 2;
  }

  // Read the input file line by line
  std::string line;
  std::string s1(argv[2]);
  std::string s2(argv[3]);
  while (std::getline(input, line)) {
    // Replace all occurrences of s1 with s2 in the current line
    std::string::size_type pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos) {
      line.replace(pos, s1.length(), s2);
      pos += s2.length();
    }
    // Write the modified line to the output file
    output << line << std::endl;
  }

  return 0;
}

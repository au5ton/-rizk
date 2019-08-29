1. How to login the server
2. How to submit the homework
3. How to test your programe

4. Wrong example for homework0

(1) int main()
(2) cout << "Input filename: ";
(3) cin >> filename;
(4) f.open("file1.txt");

5. Correct example
#include "ArgumentManager.h"
int main(int argc, char* argv[])
{
  if (argc < 2) {
    std::cerr << "Usage: count filename=input1.txt\n";
  }
  ArgumentManager am(argc, argv);
  std::string filename = am.get("filename");
  std::ifstream ifs(filename.c_str());
  std::string line;
  while (getline(ifs, line)){
    // replace symbols by space for line.
    // ...
    std::stringstream ss(line.c_str());
    std::string str;
    while (ss >> str) {
      if (is_number(str)) {
	// ...
      }
      else {
      // ...
      }
    }
  }
		
  return 0;
}

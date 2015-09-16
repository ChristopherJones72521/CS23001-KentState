// Reads three numbers from the file infile.dat, sums the numbers, 
// // and writes the sum to the file outfile.dat.
// // Walt Savitch
// // 03/14/00
//

#include <fstream>
using std::ifstream; using std::ofstream; using std::endl;

int main() {

// declaring streams
ifstream fin;
ofstream fout;

// opening input and output file
fin.open("infile.dat");
fout.open("outfile.dat");

// reading the numbers, printing sum
int first, second, third;
fin >> first >> second >> third;
fout << "The sum of the first numbers is "
<< first + second + third
<< endl;

// closing streams
fin.close();
fout.close();
}

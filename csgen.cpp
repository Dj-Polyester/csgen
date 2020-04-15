#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::ofstream out;
    for (size_t j = 1; j < argc; ++j)
    {
        size_t len = 0;
        while (argv[j][len])
            ++len;

        char *fullfilename = new char[len + 4];

        for (size_t i = 0; i < len; ++i)
        {
            fullfilename[i] = argv[j][i];
        }
        fullfilename[len] = '.';
        fullfilename[len + 1] = 'c';
        fullfilename[len + 2] = 's';
        fullfilename[len + 3] = '\0';

        std::cout << fullfilename << std::endl;

        out.open(fullfilename, std::ios_base::app);

        out << "using System;" << std::endl;
        out << "using System.Collections.Generic;" << std::endl;
        out << "using System.Linq;" << std::endl;
        out << "using System.Text;" << std::endl;
        out << "using System.Threading.Tasks;" << std::endl;

        out << std::endl;
        out << "namespace " << argv[1] << std::endl;
        out << "{" << std::endl;

        out << "\tclass Program" << std::endl;
        out << "\t{" << std::endl;

        out << "\t\tstatic void Main(string[] args)" << std::endl;
        out << "\t\t{" << std::endl;
        out << std::endl;
        out << "\t\t}" << std::endl;

        out << "\t}" << std::endl;

        out << "}" << std::endl;
        delete fullfilename;
        out.close();
    }
    return 0;
}

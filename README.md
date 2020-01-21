# csgen
a c# file generator for facilitating working with c#.

**Step (1)** move csgen.exe and csfile.bat to C:\Windows\System32

**Step (2)** (optional) Apply the instructions below in the link to install mono compiler for c#, either via the video or the documentation

Video: https://www.youtube.com/watch?v=FPl1Xd_B69Q
Doc: https://www.mono-project.com/docs/

If both steps applied, then it is easier for users to write in c# without using visual studio, which uses a large space in the system.
Furthermore, compiling by hand using the terminal will make debugging faster as visual studio uses high memory and cpu power.
Terminal commands are as follows:

**(1)** Create an empty file (if you apply step 1, this works)
```
csfile filename
```
creates an empty template file with the name filename.cs with below contents
```
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace filename
{
	class Program
	{
		static void Main(string[] args)
		{

		}
	}
}
```
**(2)** Compile your code with mono compiler
```
mcs filename.cs
```
creates an executable named filename.exe, then to execute, just write
```
filename.exe
```
Your code will run.

**NOTES:**
**Notice (1)** Please consider the name of csfile.bat, if you change its name to somethingelse.bat, then the code for creating an empty template file becomes
```
somethingelse filename
```
**Notice (2)** Most importantly you are advised to refer to the documentation for details






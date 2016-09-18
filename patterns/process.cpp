#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char ** argv){
  cerr << argv[1] << endl;
  fstream f(
	    argv[1],
	    //"bin/core",
	    //"bin/test_program_segment_6.out",
	    ios_base::in | ios_base::binary

	    );

 char name[512];
 
 char buf[20];
 while(f){
   f.read(buf,sizeof(buf));
   if (
       buf[0] == 0x1f
       &&
       buf[1] == 0x00
       &&
       buf[2] == 0x02
       &&
       buf[3] == 0x00
       )
     {
       int pos = f.tellg();  // pos is 0
	      
       cerr
	 << "Pos" << pos << "\t"
	 << (unsigned char)buf[0]
	 << "|"
	 << (unsigned char)buf[1]
	 << "|"
	 << (unsigned char)buf[2]
	 << "|"
	 << (unsigned char)buf[3]
	 << "|"
	 << (unsigned char)buf[4]
	 << "|"
	 << (unsigned char)buf[5]
	 << "|"
	 << (unsigned char)buf[6]
	 << "|"
	 << (unsigned char)buf[7]

	 ///
	 << (unsigned char)buf[8]
	 << "|"
	 << (unsigned char)buf[9]
	 << "|"
	 << (unsigned char)buf[10]
	 << "|"
	 << (unsigned char)buf[11]
	 << "|"
	 << (unsigned char)buf[12]
	 << "|"
	 << (unsigned char)buf[13]
	 << "|"
	 << (unsigned char)buf[14]
	 << "|"
	 << (unsigned char)buf[15];

       int size = buf[16] + buf[17] + buf[18] + buf[19];
       int osize = size;

       for (int border = 8; border < 512; border += 8) {
	 if (size < border) {
	   size = border;
	   break;
	 }
       }

 
       cerr << "\tSize:" << size << "/" << osize << ":";

       f.read(name,size);
       
       if (f)  {
	 cerr << "\tString:" 
	      << "="
	      << f.gcount()
	      << ":"
	      << (const char *)name ;
       }
       //std::cout << "all characters read successfully.";

       else {
	 std::cout << "error: only " << f.gcount() << " could be read";
       }
       
       //strcpy(name,buf[20]);//
	 cerr << endl;
   }
 }
 f.close();
}

#include<fstream>
using namespace std;

int main(){
 ofstream file("data.txt");                             // create open file
 file <<"I love computers"<<endl;                       // over writing code
 file.close();                                          // close file if we donot write it then desturctor call then files closed
 return 0;
}
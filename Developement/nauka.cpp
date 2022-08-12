#include <iostream> 
using namespace std;
struct CONTACT 
 {
 std::string strNick; 
 std::string strEmail; 
 int nNumerIM; 
 };
 int main()
 {
 CONTACT Kontakt;
 Kontakt.strNick = "Hakier"; 
Kontakt.strEmail = "gigahaxxor@abc.pl"; 
Kontakt.nNumerIM = 192837465; 
system("PAUSE");
 //getch(); 
 return 0;
}

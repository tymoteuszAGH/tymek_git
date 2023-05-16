#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;




int main()
{
	 fstream wy("dane.txt",fstream::out); 
		string t , k = "";
		do
    {
		getline(cin , t);
		k += (t + '\n');
		istringstream istr(t);
		ostringstream ostr;
	while (!istr.eof()) {
	 string s;
	 istr >> s;	 
	 s[0]=toupper(s[0]);
	 ostr <<s<<' ';
	}	
	wy << ostr.str();
	}
		while(t != "");
	
	 wy.close();
}

 
  

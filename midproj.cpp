#include <iostream> 
#include <cstring>

using namespace std;
using std::cout; 
using std::endl; 

void encrypt(string &enc, int &k_shift);
void decrypt(string &dec, int &k_shift);  

int main () 
	{
	string phrase = "Life the universe and everything equals 42";  
	int k_shift=42;  	
	cout<<"The original phrase is:"<<phrase<<endl; 
	encrypt (phrase,k_shift);
	cout<<"The encrypted phrase is:"<<phrase<<endl; 
	decrypt (phrase,k_shift);
	cout<<"The decrypted phrase is:"<<phrase<<endl; 
return 0; 
}
void encrypt(string &enc, int &k_shift) 
{
	for (int i=0; i<enc.length();i++) 
		enc[i]+=3; 
}
void decrypt(string &dec, int &k_shift) 
{
	for (int i=0; i<dec.length();i++)
		dec[i]-=3; 
}



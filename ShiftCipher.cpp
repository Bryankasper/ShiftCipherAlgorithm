/* A modified code by: i.am.kxxspr
* Follow him on:
* Instagram: https://www.instagram.com/i_am_kxxspr/
* Github: https://github.com/Bryankasper
*/

#include <iostream>
using namespace std;
 
// This function receives text and shift and
// returns the encrypted text
class SHIFT{
	public:string encrypt(string text, int s)
{
    string result = "";
 
    // traverse text
    for (int i = 0; i < text.length(); i++) {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (isupper(text[i]))
            result += char(int(text[i] + s - 65) % 26 + 65);
 
        // Encrypt Lowercase letters
        else
            result += char(int(text[i] + s - 97) % 26 + 97);
    }
 
    // Return the resulting string
    cout<<result<<" ";
    return result;
}
};

 
// Driver program to test the above function
int main()
{
	SHIFT shiftcipher;
	int n;
	cout<<"Enter string count to Encrypt:";
	cin>>n;
    string text[n];
    int s;
    
    cout<<"Enter your Message:";
    for(int i = 0;i<n;i++){
    	cin>>text[i];
	}
	cout<<"Enter shifting number:";
	cin>>s;
    cout << "\n\nText : ";
	for(int i=0;i<n;i++)
	{
		cout<< text[i]<<" ";	
	}
    cout << "\nShift: " << s;
    cout<<"\nEncrypted Message:";
    for(int i=0;i<n;i++)
    {
    	shiftcipher.encrypt(text[i], s);
	}
    
    return 0;
}

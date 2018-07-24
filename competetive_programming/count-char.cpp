#include <bits/stdc++.h>
using namespace std;
 
#define SIZE 26
 
// function to print the character and its frequency
// in order of its occurrence
void printCharWithFreq(string str)
{
    // size of the string 'str'
    int n = str.size();
 
    // 'freq[]' implemented as hash table
    int freq[SIZE];
 
    // initialize all elements of freq[] to 0
    memset(freq, 0, sizeof(freq));
 
    // accumulate freqeuncy of each character in 'str'
    for (int i = 0; i < n; i++)
        freq[str[i] - 'a']++;
 
    // traverse 'str' from left to right
    for (int i = 0; i < n; i++) {
 
        // if frequency of character str[i] is not
        // equal to 0
        if(freq[str[i]-'a'] ==1)
        	cout<<str[i];
        if (freq[str[i] - 'a'] >1) {
 
            // print the charcter along with its
            // frequency
            cout << str[i] << freq[str[i] - 'a'];
 
            // update frequency of str[i] to 0 so 
            // that the same character is not printed 
            // again
            freq[str[i] - 'a'] = 0;
        }
    }
}

int main()
{
	string s;
	cin>>s;
	printCharWithFreq(s);
}






/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	string s;
	cin>>s;
	map<char,int> m;
	for(int i=0;i=='\0';i++)
	{
		m[s[i]]++;
		cout<<m[s[i]];
		//cout<<"where";
	}
	for(int j=0;j=='\0';j++)
	{
		if(m[s[j]]>1)
		{
			cout<<s[j]<<m[s[j]];
		//	cout<<"here";
		}
		else
		{
			cout<<s[j];
		//	cout<<"there";
		}

	}
}*/
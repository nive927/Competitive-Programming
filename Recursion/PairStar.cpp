#include <bits/stdc++.h>
using namespace std;

// Change in the given string itself. So no need to return or print the changed string.
//Function To find length
int length(char arr[]){
	int len = 0;
	for(int i =0;arr[i]!='\0';i++){
		len++;
	}
	return len;
}

void pairStar(char input[]) {
    // Write your code here
    if(input[0] == '\0' || input[1] == '\0')
        return;
    if(input[0] != input[1])
    {
        pairStar(input + 1);
    }
    
    else
    {
    	int ws = length(input);
        input[ws + 1] = '\0';
        for(int i = ws - 1; i >= 1; i--)
        {
            input[i + 1] = input[i];
        }
        
        input[1] = '*';        
        pairStar(input);
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char input[100];
    // cin.getline(input, 100);

    strcpy(input, "hello");
    cout << input << "\n";
    pairStar(input);
    cout << input << endl;


    cout << "\n";

    strcpy(input, "aaaa");
    cout << input << "\n";
    pairStar(input);
    cout << input << endl;
}

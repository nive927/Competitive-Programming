#include<iostream>
using namespace std;

void minLengthWord(char input[], char output[])
{
	int i, j;
	int ws = 0;
	int si = 0;
	int ei = 0;
	int min_start_index = 0;
	int min_length;

	for(i = 0; input[i] != '\0'; i++)
	{
		ws++;
	}

	min_length = ws;

	while(ei <= ws)
	{
		if(input[ei] != '\0' && input[ei] != ' ')
		{
			ei++;
		}

		else
		{
			int curr_length = ei - si;

			if(curr_length < min_length)
			{
				min_length = curr_length;
				min_start_index = si;
			}

			ei++;
			si = ei;
		}
	}

	for(i = min_start_index, j = 0; j < min_length; i++, j++)
	{
		output[j] = input[j];
	}

	output[j] = '\0';
}


int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}

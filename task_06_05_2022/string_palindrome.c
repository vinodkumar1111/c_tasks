#include <stdio.h>
#include <string.h>
void isPalindrome(char str[],int len)
{
	int first = 0;
	int last = len - 1;

	while (last > first)
	{
		if (str[first] != str[last])
		{
			printf("%s is not a palindrome\n", str);
			return;
		}
        first++;
        last--;
	}

	printf("%s is a palindrome\n", str);
}

int main()
{
    char string[100];
    int len =strlen(string);
	isPalindrome("wow",len);
	isPalindrome("noon",len);
	isPalindrome("Innominds",len);

}

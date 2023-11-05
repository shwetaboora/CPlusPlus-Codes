#include <iostream>
#include <cstring>
using namespace std;

char *strtok(char *str, char delim)
{
    // string and single char acts as delimiter
    static char *input = NULL;
    if (str != NULL)
    {
        // we are making the first call
        input = str;
    }
    // check here - base case
    if (input == NULL)
    {
        return NULL;
    }

    // start extracting tokens and store them in an array
    char *output = new char[strlen(input) + 1];
    int i = 0;
    for (; input[i] != '\0'; i++)
    {
        if (input[i] != delim)
        {
            output[i] = input[i];
        }
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }

    // corner case
    output[i] = '\0';
    input = NULL;
    return output;
}

int main()
{
    char s[100] = "today is a rainy day";
    char *ptr = strtok(s, " ");
    cout << ptr << endl;

    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }
    return 0;
}
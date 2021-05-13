// Author: Timothy Eiffe
// Purpose: To print hello world in the worst way possible
// Date: 12/05/2021

#include <iostream>

int main()
{
    int i;
    int p;

    char alphabet[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
    char helloWorld[11] = { 0 };
    int helloWorldIndex = 0;

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 7)
            {
                helloWorld[helloWorldIndex] = alphabet[p];
                ++helloWorldIndex;
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 4)
            {
                helloWorld[helloWorldIndex] = alphabet[p];
                ++helloWorldIndex;
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 11)
            {
                helloWorld[helloWorldIndex] = alphabet[p];
                ++helloWorldIndex;
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 11)
            {
                helloWorld[helloWorldIndex] = alphabet[p];
                ++helloWorldIndex;
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 14)
            {
                helloWorld[helloWorldIndex] = alphabet[p];
                ++helloWorldIndex;
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 26)
            {
                helloWorld[helloWorldIndex] = alphabet[p];
                ++helloWorldIndex;
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 22)
            {
                helloWorld[helloWorldIndex] = alphabet[p];
                ++helloWorldIndex;
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 14)
            {
                helloWorld[helloWorldIndex] = alphabet[p];
                ++helloWorldIndex;
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 17)
            {
                helloWorld[helloWorldIndex] = alphabet[p];
                ++helloWorldIndex;
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 11)
            {
                helloWorld[helloWorldIndex] = alphabet[p];
                ++helloWorldIndex;
            }
        }
    }

    for (i = 0; i < 1; ++i)
    {
        for (p = 0; p <= 26; ++p)
        {
            if (p == 3)
            {
                helloWorld[helloWorldIndex] = alphabet[p];
            }
        }
    }

    for (i = 0; i <= 10; ++i)
    {
        printf("%c", helloWorld[i]);
    }

}

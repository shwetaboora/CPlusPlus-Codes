har i;
    cin >> i;

    if (i >= 97 && i <= 122)
    {
        cout << char(i) << " lower case"; // lowercase letters (a-z)
    }
    else if (i >= 65 && i <= 90)
    {
        cout << char(i) << "upper case "; // uppercase letters (A-Z)
    }
    else if (i >= 48 && i <= 57)
    {
        cout << char(i) << "numeric "; // digits (0-9)
    }
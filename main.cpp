#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_mess{};
    cout << "\nEnter the secret message: ";
    getline(cin, secret_mess);

    string encr_mess{};
    for(char c : secret_mess)
    {
        size_t pos = alphabet.find(c);
        if(pos != string::npos)
        {
            char new_char {key.at(pos)};
            encr_mess += new_char;
        }
        else
        {
            encr_mess += c;
        }
    }

    cout << "\nEncrypted message: " << encr_mess << endl;

    string decr_mess{};
    for(char c : encr_mess)
    {
        size_t pos = key.find(c);
        if(pos != string::npos)
        {
            char new_char{alphabet.at(pos)};
            decr_mess += new_char;

        }
        else
        {
            decr_mess += c;
        }
    }

    cout << "\nDecrypted message: " << decr_mess << endl;


    cout << endl;
    return 0;
}

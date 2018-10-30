/* Hobby program to better my own
   understanding in RSA algorithm
   and computer program assisted
   encryption and decryption.  Also
   it serves as a source to do my
   extra credit problems for my
   cryptography class.
*/

//Encryption of messages using RSA Algorithm

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <cctype>

using namespace std;

//Function Prototypes
int gcd(unsigned long long int q, unsigned long long int r);      //Function to find gcd of 2 integers
void Encrypt();             //Encrypts message
void Decrypt();             //Decrypts message
bool IsPrime(int num);      //checks primality of two integers

int main()
{
    int choice = 0;

    do
    {
        cout << "Welcome to RSA!" << endl << "Please enter 1 for Encryption and 2 for Decryption: ";
        cin >> choice;

        if (choice == 1)
        {
            Encrypt();
        }
        else if (choice == 2)
        {
            Decrypt();
        }
        else
        {
            cout << "Invalid choice, try again!" << endl;
        }
    } while ((choice != 1) || (choice !=2));

    return 0;
}

int gcd(unsigned long long int q, unsigned long long int r)
{
    int temp;

    while (1)
    {
        temp = q % r;   //starts the Euclidean gcd algorithm

        if (temp == 0)
        {
            return h;
        }

        q = r;
        r = temp;
    }
}

bool IsPrime(unsigned long long int num)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < num; i++)
    {
        if ((n % i) == 0)
            return false;
    }

    return true;
}

void Encrypt()
{
    unsigned long long int p, q, n;

    cout << "Please enter your desired primes.  If you don't have primes, enter 0 for both, the program will choose for you: ";
    cin >> p >> q;

    if ((p == 0) && (q == 0))
    {
        p = 3967;   //chosen from list of Carol primes
        q = 1489;   //chosen from list of Centered triangular primes
    }
    else if (p == 0)
    {
        p = 3967;
    }
    else if (q == 0)
    {
        q = 1489;
    }

    cout << "Now the program will check for primality of the primes.  Please wait..." << endl;
    bool pTrue, qTrue;

    pTrue = IsPrime(p);
    qTrue = IsPrime(q);

    if ((pTrue == false) || (qTrue == false))
    {
        cerr << "Can't work with composite numbers here..." << endl;
        exit(-1);
    }

    string Text = "";

    cout << "Please enter a message you wish to encrypt: ";
    getline(cin, Text, '\n');
    cout << "You entered: " << Text << endl;

    unsigned long long int e;        //Part of the public key
    unsigned long long int phi;      //uses Euler phi function properties
    phi = (p - 1)*(q - 1);

    while (e < phi)
    {
        if (gcd(e, phi) == 1)   //e must be relatively prime to phi
        {
            break;
        }
        else
        {
            e++;
        }
    }

    char ch;
    for (int j = 0; j != '\0'; j++) //convert to lower case
    {
        ch = Text[j];
        putchar(tolower(c));
    }

    string Text2Int = "";
    for (int j = 0; j != '\0'; j++) //trims the spaces out
    {
        if (Text[j] == ' ')
        {
            Text[j] = Text[j+1];
            j--;
        }

    }

    for (j = 0; j != '\0'; j++) //turns our message into appended string of numbers
    {
        if (Text[j] == 'a')
            Text2Int.append("1");
        else if (Text[j] == 'b')
            Text2Int.append("2");
        else if (Text[j] == 'c')
            Text2Int.append("3");
        else if (Text[j] == 'd')
            Text2Int.append("4");
        else if (Text[j] == 'e')
            Text2Int.append("5");
        else if (Text[j] == 'f')
            Text2Int.append("6");
        else if (Text[j] == 'g')
            Text2Int.append("7");
        else if (Text[j] == 'h')
            Text2Int.append("8");
        else if (Text[j] == 'i')
            Text2Int.append("9");
        else if (Text[j] == 'j')
            Text2Int.append("10");
        else if (Text[j] == 'k')
            Text2Int.append("11");
        else if (Text[j] == 'l')
            Text2Int.append("12");
        else if (Text[j] == 'm')
            Text2Int.append("13");
        else if (Text[j] == 'n')
            Text2Int.append("14");
        else if (Text[j] == 'o')
            Text2Int.append("15");
        else if (Text[j] == 'p')
            Text2Int.append("16");
        else if (Text[j] == 'q')
            Text2Int.append("17");
        else if (Text[j] == 'r')
            Text2Int.append("18");
        else if (Text[j] == 's')
            Text2Int.append("19");
        else if (Text[j] == 't')
            Text2Int.append("20");
        else if (Text[j] == 'u')
            Text2Int.append("21");
        else if (Text[j] == 'v')
            Text2Int.append("22");
        else if (Text[j] == 'w')
            Text2Int.append("23");
        else if (Text[j] == 'x')
            Text2Int.append("24");
        else if (Text[j] == 'y')
            Text2Int.append("25");
        else if (Text[j] == 'z')
            Text2Int.append("26");
        else
        {
            cout << "Invalid characters!" << endl;
            exit (-1);
        }
    }

    unsigned long long int message = stoi(Text2Int);     //converts the string of numbers into an integer value
    unsigned long long int c = pow(message, e) % n;

    cout << "The encrypted message is: " << c << endl;

    return;
}

void Decrypt()
{
    unsigned long long int n, p, q, e, c;

    cout << "Decryption process for RSA algorithm." << endl;
    cout << "Please enter the 'n': ";
    cin >> n;
    cout << "Please enter the 'e': ";
    cin >> e;
    cout << "Please enter the numerical message (with no spaces): ";
    cin >> c;

}

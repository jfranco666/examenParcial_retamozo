#include <cstring>
#include <iostream>
using namespace std;
 
int main()
{
    char texto1[40];
	char texto2[20]="@untels.edu.pe";
    cout << "Introduce una palabra: "<<endl;
    cin >>  texto1;
    if (strstr(texto1, texto2)==0)
        cout << "NO es correo de la Untels" << endl;
    else
        cout << "SI es correo de la Untels" << endl;
    return 0;
}
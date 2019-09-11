#include <iostream>

using namespace std;

/*
//PRIMER EJERCICIO

void imprimirD (int n)
{
    int a,b,c,d,e;

    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n%10;

    cout <<e<<"\t"<<d<<"\t"<<c<<"\t"<<b<<"\t"<<a<<endl;
}

int main()
{
    int n;

    cout <<"Ingrese un numero"<<endl;
    cin >>n;

    imprimirD(n);
}
*/


/*
//SEGUNDO EJERCICIO

int contarD (int n){
    int a=0;
    while (n!=0)
    {
        n=n/10;
        a=a+1;
    }
    return a;
}

int main()
{
    int n,b;
    cout <<"Ingrese un numero"<<endl;
    cin >>n;
    b=contarD(n);
    cout <<"La cantidad de digitos es: "<<b<<endl;
}
*/


/*
//TERCER EJERCICIO

bool palindrome (int n){
    int a,b,c,d,e;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n%10;
    if ((a==e) and (b==d)){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n;
    cout <<"Ingrese un numero de 5 digitos: "<<endl;
    cin >>n;
    cout << palindrome(n);

}
*/


/*
//CUARTO EJERCICIO

int fibonacci (int n){
    int r=0,a=0,b=1,c=0;
    while (r<=n){
        if ((r==0) && (n==0)){
            return b;
        }
        if (r>0){
            c=a+b;
            a=b;
            b=c;
        }
        r=r+1;
    }
    return c;
}

int main ()
{
    int n,r;
    cout <<"Ingrese un numero"<<endl;
    cin >>n;
    r=fibonacci(n);
    cout <<"El fibonacci de: "<<n<<" es "<<r;
}
*/

/*
//QUINTO EJERCICIO: ES NUMERO O NO ES NUMERO

bool esNumero (char c){
    int n = static_cast<int>(c);
    if (n>=48 and n<=57)
        return true;
    else
        return false;
}

int main ()
{
    char c;
    cout <<"Ingrese un caracter"<<endl;
    cin >>c;
    cout << esNumero(c);
}
*/



/*
//QUINTO EJERCICIO: ES LETRA O NO ES LETRA

bool esLetra (char c){
    int n = static_cast<int>(c);
    if ((n>=65 and n<=90) || (n>=97 and n<=122))
        return true;
    else
        return false;
}

int main ()
{
    char c;
    cout <<"Ingrese un caracter"<<endl;
    cin >>c;
    cout << esLetra(c);
}
*/

/*
//SEXTO EJERCICIO: MINUSCULA A MAYUSCULA

char convertirMa (char c){
    int n = static_cast<int>(c);
    n=n-32;
    char b=static_cast<char>(n);
    return b;
}
int main ()
{
    char c;
    cout <<"Ingrese una letra"<<endl;
    cin >>c;
    cout <<"Su mayuscula es: "<< convertirMa(c);

}
*/

/*
//SEXTO EJERCICIO: MAYUSCULA A MINUSCULA

char convertirMi (char c){
    int n = static_cast<int>(c);
    n=n+32;
    char b=static_cast<char>(n);
    return b;
}
int main ()
{
    char c;
    cout <<"Ingrese una letra"<<endl;
    cin >>c;
    cout <<"Su minuscula es: "<< convertirMi(c);

}
*/

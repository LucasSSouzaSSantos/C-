#include <iostream>

using namespace std;

int fatorial(int num);
void fibonacci(int quantidade = 2, int a = 0, int b = 1);

int main(){
    int num = 6;
    int num2 = 17;
    system("clear");

    cout << "O fatorial de " << num << " é " << fatorial(num) << "\n\n";

    fibonacci(num2);

    cout << "\n\n";

    return 0;
}

int fatorial(int num){
    int fat = num;

    if(num != 1){
        fat *= fatorial(--num);
        
    }else{
        fat = 1;
    }

    return fat;
}

void fibonacci(int quantidade, int a, int b)
{
    int soma;
    cout << a << " ";
    

    if(quantidade != 1){
        quantidade--;
        soma = a + b;
        a = b;
        b = soma;
        fibonacci(quantidade, a , b);
    }
}

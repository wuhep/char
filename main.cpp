#include <iostream>

using namespace std;

int main()
{
    char alp[]{"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z"};
    char alp2[]{"a b c d e f g h i j k l m n o p q r s t u v w x y z"};
    int size = sizeof(alp) / sizeof(alp[0]);

    for(int i = 0; i < size -1; i++)
    {
        int j = static_cast<int>(alp[i]);
        int k = static_cast<int>(alp2[i]);
        if(j == 32)
        {
            cout << " ";
        }else {
            cout <<  alp[i] << "-" << j << "   " <<  alp2[i] << "-" << k;
        }

        cout << endl;
    }
    cout << endl;

  return 0;
}

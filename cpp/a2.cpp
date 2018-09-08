#include <iostream>	
#include <vector>
using namespace std;
int main()
{
	vector<int> myVector(10);
	for(int i=0; i < myVector.size();i++)
		cout<<myVector[i]<<' ';
	return 0;
}

/*#include <iostream>
#include <vector> // подключаем модель Векторов
using namespace std;
int main()
{
    vector<int> myVector(10);   // объявляем вектор размером в 10 элементов и инициализируем их нулями
    // вывод элементов вектора на экран
    for(int i = 0; i < myVector.size(); i++)
        cout << myVector[i] << ' ';
    return 0;
}*/
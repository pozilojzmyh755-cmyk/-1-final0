
C++



#include <iostream>
#include <string>

int main() {
  std::string string = "AaBbCcDd";
  std::string uppercase = "";
  std::string lowercase = "";

  // Проходим по строке с шагом 2
  for (int i = 0; i < string.length(); i += 2) {
    uppercase += string[i];  // Добавляем заглавную букву
    lowercase += string[i + 1]; // Добавляем строчную букву
  }

  std::cout << "Заглавные буквы: " << uppercase << std::endl;
  std::cout << "Строчные буквы: " << lowercase << std::endl;

  return 0;
}

#Комментарии:

*   #include <iostream> - Подключает библиотеку для ввода/вывода.
*   #include <string> - Подключает библиотеку для работы со строками.
*   std::string - Тип данных для строк в C++.
*   string.length() - Возвращает длину строки.
*   for (int i = 0; i < string.length(); i += 2) - Цикл, который идет по строке с шагом 2.
*   std::cout - Выводит текст на экран.


// через стеки 


#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> originalList = {"a", "1", "b", "2", "c", "3"};
    std::vector<std::string> letters;
    std::vector<std::string> numbers;

    for (const std::string& item : originalList) {
        if (isalpha(item[0])) {  // Проверяем, является ли первый символ буквой
            letters.push_back(item);
        } else if (isdigit(item[0])) { // Проверяем, является ли первый символ цифрой
            numbers.push_back(item);
        }
    }

    originalList.clear(); // Удаляем исходный список

    std::cout << "Буквы: ";
    for (const std::string& letter : letters) {
        std::cout << letter << " ";
    }
    std::cout << std::endl;

    std::cout << "Числа: ";
    for (const std::string& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}

Комментарии:
#include <iostream>, #include <vector>, #include <string> - Подключаем необходимые библиотеки.
std::vector<std::string> - Создаем вектор (динамический массив). isalpha(item[0]) - Проверяет, является ли первый символ строки item буквой. (функция из библиотеки cctype)
isdigit(item[0]) - Проверяет, является ли первый символ строки item цифрой. (функция из библиотеки cctype).letters.push_back(item) - Добавляет элемент в конец вектора letters.originalList.clear() - Очищает вектор originalList (эквивалент удалению списка).#

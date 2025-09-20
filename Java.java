java


public class Main {
  public static void main(String[] args) {
    String string = "AaBbCcDd";
    String uppercase = "";
    String lowercase = "";

    // Проходим по строке с шагом 2
    for (int i = 0; i < string.length(); i += 2) {
      uppercase += string.charAt(i); // Добавляем заглавную букву
      lowercase += string.charAt(i + 1); // Добавляем строчную букву
    }

    System.out.println("Заглавные буквы: " + uppercase);
    System.out.println("Строчные буквы: " + lowercase);
  }
}


#Комментарии:

*   public class Main - Объявление класса. В Java все должно быть внутри класса.
*   public static void main(String[] args) - Главный метод, с которого начинается выполнение программы.
*   String - Тип данных для строк в Java.
*   string.length() - Возвращает длину строки.
*   string.charAt(i) - Возвращает символ по индекс


// через стеки


import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<String> originalList = new ArrayList<>();
        originalList.add("a");
        originalList.add("1");
        originalList.add("b");
        originalList.add("2");
        originalList.add("c");
        originalList.add("3");

        List<String> letters = new ArrayList<>();
        List<String> numbers = new ArrayList<>();

        for (String item : originalList) {
            if (Character.isLetter(item.charAt(0))) { // Проверяем, является ли первый символ буквой
                letters.add(item);
            } else if (Character.isDigit(item.charAt(0))) { // Проверяем, является ли первый символ цифрой
                numbers.add(item);
            }
        }

        originalList.clear(); // Удаляем исходный список

        System.out.println("Буквы: " + letters);
        System.out.println("Числа: " + numbers);
    }
}



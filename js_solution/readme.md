Часть 1 калькулятор

Мы получаем массив и многократно проходим по нему исполняя операции в большем приоритете.
Проверить в начале, что в целом имеет смысл это
1) ()
2) * /
3) + -
Приоритет

логика калькулятора слудующая -
1) бежим по массиву и разбиваем на приоритеты
2) когда нет действий высшего приоритета выполняем действия низкого

рассмотрим в отдельности как это работает
нашли скобку
надо найти отрезок до другой скобки и вырезать его из массива передав в начало функции
функция определяет высший приоритет действий и если находит уровень 2 то вычисляет его сразу в цикле.
Пока мы имеем приоритет 2 мы в цикле проверяем есть ли он. Если да то находим индекс / вырезаем его и заменяем на 1 значение
если не нашли - то идем к низкому уровню и повторяем все с ним.
На выходе 1 цифра вместо скобок без тонны рекурсий
Рекурсия выходит вверх и вместо скобки подставляет эту цифру массив пересобирают и опять проверяют наивысший уровень операций
все это в цикле с условием пока в массиве есть хоть одна скобка
на выходе скобок не будет и стандартная операция

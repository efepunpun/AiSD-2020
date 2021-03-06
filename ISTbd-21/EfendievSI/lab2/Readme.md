# Отчет по лабораторной работе №2

## Алгоритм метода вставок

Его суть заключается в том что, на каждом шаге алгоритма мы берем один из элементов массива, находим позицию для вставки и вставляем. Считается что массив из 1-го элемента считается отсортированным. Время выполнения алгоритма зависит от входных данных: чем большее множество нужно отсортировать, тем большее время выполняется сортировка. Также на время выполнения влияет исходная упорядоченность массива. Так, лучшим случаем является отсортированный массив, а худшим — массив, отсортированный в порядке, обратном нужному. Временная сложность алгоритма при худшем варианте входных данных — O(n²).

## Принцип работы 
На каждом шаге алгоритма мы выбираем один из элементов входных данных и вставляем его на нужную позицию в уже отсортированном списке, до тех пор пока набор входных данных не будет исчерпан. Метод выбора очередного элемента из исходного массива произволен; может использоваться практически любой алгоритм выбора. Обычно (и с целью получения устойчивого алгоритма сортировки), элементы вставляются по порядку их появления во входном массиве. 

## Достоинства:

+ эффективен на небольших наборах данных;
+ эффективен на наборах данных, которые уже частично отсортированы;
+ не меняет порядок элементов, которые уже отсортированы;
+ может сортировать список по мере его получения;
+ не требует временной памяти.

## Недостатки:
- Высокая сложность алгоритма: O(n²).


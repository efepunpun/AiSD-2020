# Отчёт по лабораторной работе №8.1 #

Варианты: по типу списка - 5 вариант, по типу данных списка - 5 вариант. Двусвязный линейный список типа unsigned long. 

## Определение и особенности двусвязного списка ##

Двунаправленный (двусвязный) список – это структура данных, состоящая из последовательности элементов, каждый из которых содержит информационную часть и два указателя на соседние элементы. При этом два соседних элемента должны содержать взаимные ссылки друг на друга.

Указатель на предыдущий узел корня списка содержит нулевое значение. Указатель на следующий узел последнего узла также содержит нулевое значение.

## Преимущества и недостатки двусвязного списка ##

### Преимущества ###

- Динамическое добавление и удаление элементов
- Перемещаться по списку можно в двух направлениях
- Эффективное (за константное время) добавление и удаление элементов
- Размер ограничен только объёмом памяти компьютера и разрядностью указателей

### Недостатки ###

- Допускает только последовательный доступ к элементам
- На хранение адресов элементов в указателях требуется дополнительная память
- Соседние элементы списка могут быть распределены в памяти нелокально, что снизит эффективность кэширования данных в процессоре

## Оценка сложности по добавлению, удалению и поиску элемента в коллекции ##

В этом списке проще (по сравнению с односвязным списком) производить удаление, добавление и перестановку элементов, так как легко доступны адреса следующего и предыдущего элементов списка, указатели которых направлены на изменяемый элемент.

Однако поиск осуществляется дольше, чем, например, в динамическом массиве, поскольку чтобы дойти до элемента в середине списка, нужно пройти через все элементы, начиная с одного из концов. В массиве же можно напрямую обратиться к конкретному элементу с помощью оператора [ ], т.к. элементы массива лежат в непрерывной области памяти, а элементы списка разбросаны в памяти хаотически.

## Для чего лучше всего подходит ##

Для ускорения многих операций целесообразно применять переходы между элементами списка в обоих направлениях. Это реализуется с помощью двунаправленных списков. Такие списки нужны для того, чтобы можно было быстро получать доступ к элементам, находящимся ближе к краям динамической структуры, и когда не так важна скорость обработки данных в середине списка.

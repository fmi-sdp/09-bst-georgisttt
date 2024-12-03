# Задачи
## Задача 1
Да се напише функция, която проверява дали свързан списък е палиндром.

**Example 1:**      

![](https://assets.leetcode.com/uploads/2021/03/03/pal1linked-list.jpg)
```c++
Input: head = [1,2,2,1]
Output: true
```
**Example 2:**      

![](https://assets.leetcode.com/uploads/2021/03/03/pal2linked-list.jpg)
```c++
Input: head = [1,2]
Output: false
 ```

## Задача 2
Напишете функция, която пренарежда свързан списък по зададен начин в линейно време.

Представяме списъка като:   
`L0 → L1 → … → Ln - 1 → Ln`

Пренареждаме елементите му по следния начин:    
`L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …`

**Example 1:**      

![](https://assets.leetcode.com/uploads/2021/03/04/reorder1linked-list.jpg)
```c++
Input: head = [1,2,3,4]
Output: [1,4,2,3]
```
**Example 2:**      

![](https://assets.leetcode.com/uploads/2021/03/09/reorder2-linked-list.jpg)
```c++
Input: head = [1,2,3,4,5]
Output: [1,5,2,4,3]
 ```

## Задача 3
Даден е едносвързан списък и число `х`.     

Пренаредете списъка така, че всички елементи със стойност по-малка от `х` да са преди елементите със стойност по-голяма от `х`.     

Трябва да се запази относителния ред на елементите в двете половини.

**Example 1:**      
![](https://assets.leetcode.com/uploads/2021/01/04/partition.jpg)
```c++
Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]
```
**Example 2:**      

```c++
Input: head = [2,1], x = 2
Output: [1,2]
 ```

## Задача 4 (от контролно)
Даден е списък с `n` елемента.  
Да се дефинира функция `shuffle()`, която получава адреса на първия елемент на списъка. Функцията да пренарежда възлите на списъка така, че *елементите от втората половина на списъка да се преместят в началото на списъка, но в обратен ред* (при списъци с нечетен брой елементи считаме средния елемент за принадлежащ към втората половина на списъка).  

**Пример:**             
*`L1 → L2 → L3 → L4 → L5` се преобразува до `L3 → L4 → L5 → L1 → L2`*  

## Задача 5
Да се напише функция, която обръща всяка група от `k` елемента в свързан списък.

Ако `k` не е делител на броя на елементите в списъка, последната група от елементи да остане непроменена. 

Не трябва да променяте стойностите на елементите, можете да работите само с указатели.

**Example 1:**      

![](https://assets.leetcode.com/uploads/2020/10/03/reverse_ex1.jpg)
```c++
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
```
**Example 2:**      

![](https://assets.leetcode.com/uploads/2020/10/03/reverse_ex2.jpg)
```c++
Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]
```
**Example 3:**      
```c++
Input: head = [1,2,3,4,5], k = 1
Output: [1,2,3,4,5]
```
**Example 4:**      
```c++
Input: head = [1], k = 1
Output: [1]
 ```
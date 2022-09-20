/** @file librecursion.cpp
 * @brief Recursive function implementations for Assignment Recursion:
 *   Writing and Understanding Recursive Functions
 *
 * @author Jane Programmer
 * @note   class: COSC 2336, Summer 2021
 * @note   ide  : VSCode Server 3.9.3, Gnu Development Tools
 * @note   assg : Assignment Recursion
 * @date   June 1, 2021
 *
 * Implement several functions using both iteration and recursion.
 * For more practice with using basic C/C++ arrays, we will
 * write functions taking arrays as input to be manipulated.
 *
 * This file contains the actual implementation of the functions
 * and code you are required to complete for Assignment Recursion.
 * Make sure you modify the file header information to be correct
 * for the code you are creating.
 */
#include "List.hpp"

// In this assignment you will not be given the function documentation
// comments ahead of time.  But you are required to write function
// documentation for all of your functions for this assignment.  You must
// use the function comment block format you have seen in previous
// assignments, including giving a name, short description, and
// documenting parameters and return value using @param and @returns
// tags respectively.

/** @brief sum list using iteration
 * 
 * Sum up the given input list of values. This function actually 
 * sums up the indicated sub portion of the list. the begin and end range
 * parameters specify the sublist to sum and return the summed list
 * 
 * @param list A constant reference to the list instance that we are to sum up 
 *    a sub portion and return the summed result
 * @param begin The beginning index of the sub portion of the list we are
 * summing up.
 *  @param end The end index of the sub portion of the list we are
 * summing up.
 * 
 * @return int returns the sum of the indicated sub
 * list of the input list.
 */
int sumIterative(List& list, int begin, int end)
{
  int sum = 0;
  for (int i = begin; i <= end; i++)
  {
    sum += list[i];
  }
  return sum;
}
/** @brief sum list using recursion
 * 
 * Sum up the given input list of values. This function actually 
 * sums up the indicated sub portion of the list. the begin and end range
 * parameters specify the sublist to sum and return the summed list
 * 
 * @param list A constant reference to the list instance that we are to sum up 
 *    a sub portion and return the summed result
 * @param begin The beginning index of the sub portion of the list we are
 * summing up.
 *  @param end The end index of the sub portion of the list we are
 * summing up.
 * 
 * @return int returns the sum of the indicated sub
 * list of the input list.
 */
int sumRecursive(List& list, int begin, int end)
{
  if (begin > end)
  {
    return 0;
  }  
  return (list[begin] + sumRecursive(list, begin + 1, end));
}
/** @brief sum list using reverse Iteration
 * 
 * Sum up the given input list of values. This function actually 
 * sums up the indicated sub portion of the list. This function reverses
 * the list.
 * 
 * @param list A constant reference to the list instance that we are to sum up 
 *    a sub portion and return the summed result
 * @param begin The beginning index of the sub portion of the list we are
 * summing up.
 *  @param end The end index of the sub portion of the list we are
 * summing up.
 * 
 * @return int returns the sum of the indicated sub
 * list of the input list.
 */
int reverseIterative(List& list, int begin, int end)
{
  int sum = 0;
  for (int i = begin; i < end; i++, end--)
  {
    sum = list[i];
    list[i] = list[end];
    list[end] = sum;
  }
  return sum;
}
/** @brief reverses a list using recursion
 * 
 * Reverse  the list. This function actually 
 * reveres the elements in the list using recursion.
 * It swaps the elements in the list in the for loop.
 * 
 * @param list A constant reference to the list instance that we are to sum up 
 *    a sub portion and return the summed result
 * @param begin The beginning index of the sub portion of the list we are
 * summing up.
 *  @param end The end index of the sub portion of the list we are
 * summing up.
 * 
 */
int reverseRecursive(List& list, int begin, int end)
{
  int temp;
  if(begin < end)
  {
    temp = list[begin];
    list[begin] = list[end];
    list[end] = temp;
    reverseRecursive(list, begin+1, end-1); 
  } 
  return 0;
}
/** @brief reverses a list using recursion
 * 
 * Reverse  the list. This function actually 
 * reveres the elements in the list using recursion.
 * It swaps the elements in the list in the for loop.
 * 
 * @param list A constant reference to the list instance that we are to sum up 
 *    a sub portion and return the summed result
 * @param begin The beginning index of the sub portion of the list we are
 * summing up.
 *  @param end The end index of the sub portion of the list we are
 * summing up.
 * 
 */
bool isPalindromeIterative(List& list, int begin, int end)
{
  int flag = 0;
  for (int i = begin; i <= end / 2 && end != 0; i++)
  {
    if (list[i] != list[end - i - 1]) 
    {
      flag = 1;
      break;
    }
  }
  if (flag == 1)
    return true;
  else
    return false;
}
## Time complexity
- The Time Complexity of an algorithm/code is not equal to the actual time required to execute a particular code, but the number of times a statement executes.

## Asymptotic analysis
- The idea is about to measure growth of algorithm.
- Doesn't depend upon machine, programming language.
- No need to implement, we can analyse algorithm.
- We can plot a graph for different TC with input n.

## Best, Average and Worst Case
- Best, average, and worst case analysis are methods used to evaluate the performance of an algorithm.

- Best case scenario: An algorithm's best-case scenario is the scenario where the algorithm performs at its best, i.e., when it takes the least amount of time to complete its execution.

- Average case scenario: An algorithm's average-case scenario is the scenario where the algorithm takes an average amount of time to complete its execution, considering all possible inputs.

- Worst case scenario: An algorithm's worst-case scenario is the scenario where the algorithm takes the most amount of time to complete its execution, i.e., when it performs at its worst.

- In computer science, analyzing the best, average, and worst-case time complexity of an algorithm is crucial to understand its performance and make informed decisions about which algorithm to use for a given problem.

## Order of Growth
- A function f(n) is said to be growing faster than g(n) if
```
lim g(n)/f(n) = 0 when n->infinity

OR

lim f(n)/g(n) = infinity when n->infinity

```

where f(n) and g(n) represents TC where n>=0 and f(n),g(n) >= 0.

## Asymptotic Notations
- Big O : Exact or Upper.
- Theta : Exact.
- Omega : Exact or Upper.
- Omega(1) is the TC of every algorithm. 
- It is define as tightest bound and tightest bound is the best of all the worst case times that the algorithm can take.

## TC of complex loops
```c++
    for(int i=2; i < n; i=pow(i,c)){
        //some work
    }

```
- TC of above code is O(log(log(n))

## Recursive tree
- The Recursion Tree Method is a way of solving recurrence relations. In this method, a recurrence relation is converted into recursive trees. Each node represents the cost incurred at various levels of recursion. To find the total cost, costs of all levels are summed up.

- There are some examples in which we cannot calculate exact time complexity so we calculate upper bound of recurrence relation using recurrence tree method. For example

```
T(n) = T(n-1) + T(n-2) + c
T(n) = T(n/2) + T(n/4) + c

```

## Space complexity
- Order of growth of memory in terms of input size(n) is space complexity.


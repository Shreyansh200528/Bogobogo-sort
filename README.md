# Bogobogo-sort
Implemented BogoBogo sort in C++ to explore its sorting time on vectors of various sizes.

# BogoBogo sort works by following these set of rules -
1. Make a copy of the list of numbers.
2. Sort the first n-1 elements of the copy using bogobogosort.
3. Check to see if the nth element of the sorted copy is greater than the highest element of the first n-1 elements. If so, the copy is now sorted, else randomize the order of the elements of the copy and go to step 2.
4. Check to see if the copy is in the same order as the original list.

# Result 
| Size of vector | Time Taken (in ms) |
|:--------------:|:------------------:|
|       1        |         0          |
|       2        |         0          |
|       3        |         0          |
|       4        |        0.03        |
|       5        |       30.07        |
|       6        |     23626.33       |
|       7        |        DNF         |

I ran the code for 72 hours on my machine but it did not finish, I estimate it to take about 81 days to finish according to below information.  
(The results above are averages over 100 runs, the actual numbers don't mean a lot as a lot of factors affect the result like the random chances and luck, as well as the temperature of the air which makes the CPU perform better or worse, but what does matter is the order of magnitude of these numbers, microseconds for size 4, milliseconds for 5, a few seconds for 6 and a few months for size 7.)

# Reference
The above rules are taken from this website on the topic  
https://www.dangermouse.net/esoteric/bogobogosort.html  
As calculated by Nathan Collins the time complexity is about O(N!^(N-K)).  
(Assuming K = 1 I calculated estimated time for size 7 to be around 81 days.)  
Do check out the link above for more interesting information on BogoBogo Sort.

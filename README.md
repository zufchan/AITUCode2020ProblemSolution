# AITUCode2020ProblemSolutions
My version of problem solutions to the AITU 2020 Contest (March - June 2020)

## Problems: 

### source: 
A(https://www.spoj.com/problems/CPRMT/en/)

B(https://www.spoj.com/problems/GAMES/en/)

C(https://codeforces.com/enter?back=%2Fgym%2F278949%2Fproblem%2FA)

D(https://www.spoj.com/problems/NGM/en/)

E(https://www.spoj.com/problems/WPC5I/en/)

F(https://www.e-olymp.com/en/problems/7444)

G(https://www.spoj.com/problems/GIRLSNBS/en/)

H(https://atcoder.jp/contests/abc103/tasks/abc103_c?lang=en)

I(https://codeforces.com/problemset/problem/865/D)

J(https://open.kattis.com/problems/datingtime)

### Problem A
Anita has already finished the 11 grade of school and is thinking which University she can apply for. There is a new University in Nur-Sultan city - Astana IT University. After a little reflection, Anita understood that this University is her fate! As the permutation of letters in her name is a subsequence of letters in the name of the University.

Since Anita is interested in competitive programming, she immediately came up with a task. She wrote two strings s1, s2 and tried to find the longest string s such that the permutation of s is a subsequence of s1 and s2. Help Anita to solve her task.

Input

Input file includes several lines of strings. Every two lines make pairs of strings, in which the first string is s1, the second - s2. Each string is located on a separate line and consists of at most 1000 lowercase letters.

Output

For each pair of strings print s. if there can be several answers, print the first in lexicographical order

Examples

Input

aitu

nursultan

almaty

capital

Output

atu 

aalt 

### Problem B
Our University holds AITU Challenge! The aim of this event is to get as much practice as possible through problem solving. Organizers gave points(non-negative integer) for each solved task. Student Alikhan solved unknown number of problems and calculated average score. You need to find minimum number of tasks that Alikhan could have solved to get this average score. Average score is a sum of all points divided to number of problems.

Input

The first line has integer T - the number of test cases. Each test case contains a rational number x - Alikhan's average score in AITU Challenge

1 <= T <= 1000

1 <= x <= 10^6 (at most four digits after the decimal point)

Output

For each test case print the answer - minimum number of problems.

Example

Input

4

1

2.50

1.05 

1.25 

Output

1

2

20 

4

### Problem C
IT department has procured many new laptops of three manufacturers: HP, Lenovo and Acer. They placed one laptop on each teacher's desk in different practice rooms. Unfortunately, they recollected quite late that they needed to connect laptops of different manufacturers to one local network. They reflected on the expected number of rooms they had to visit to connect at least one laptop of each type (HP, Lenovo and Acer). Can you solve this problem if the number of laptop manufacturers is not three, but N?

Input

The first line has integer T (1≤T≤2∗105) - the number of test cases. Each test case contains a single integer N (1≤N≤106) - the number of laptop manufacturers.

Output

For each test case show the expected number of rooms IT department has to visit for connecting at least one laptop of each N type of manufactures. Your answer will considered correct if it has at most 10−6 absolute or relative error.

Example

Input

5

1

2

3

7

1000000

Output

1.000000000

3.000000000

5.500000000

18.150000000

14392726.722864781

Note

In each desk IT department placed uniformly at random one of N laptops.

### Problem D
At University students and teachers like playing the game "Mafia" very much. Along with it, another one, more mathematical game is becoming popular. The rules are following. Two people can play at the same time. At the beginning the game leader write any positive number smaller than 2 000 000 000. Players take goes one after another. In one go a player can subtract any no-zero digit that number contains. For example, there is number 85780. From this number a player can get 85 772, or 85 775, or 85 773. The player who first gets the number 0 wins. Write a program that determines which player will win if they make an optimal play.

Input

Input file has positive integer N, that the game leader shows at the beginning of the game.

Output

The first line must have number 1 if the first player wins or 2 in a reverse situation. If the first player wins, in the second line you need to print the first go - the digit that the first player needs to subtract from the number to guarantee win. If there are many ways to do first go, print any of them.

Example

Input:

20

Output:

2

Input:

18

Output:

1

8

### Problem E
At the University one of the favorite lesson along with physical education is mathematics. Especially students like mathematical analysis and discrete math. Recently they started to remind the number theory. At the lesson a teacher gave the task -to find the smallest number A, that B divides LCM(C, A) and C divides LCM(B, A). As at our University a lot of students are future developers, they decided to write the program to solve the task. Can you help them?

Input

First line consists of a single integer T (1 ≤ T ≤ 2000) - the number of test cases. Each following line has space separated integers: B and C (1 ≤ B, C < 231).

Output

Print the answer A for each test case.
 
Example

Input:

2

4 6

12 24

Output:

12

8

### Problem F
Given graph, with 2*n vertices and m edges. On every vertex and edge written an integer number. Two players play a game on this graph. The first player makes the first move, then players alternate turns. There are exactly n turns for each player. In each turn player chooses non-chosen vertex. The score of the player is the sum of numbers written in his chosen vertices, plus the sum of numbers written in edge, where both vertices of the edge are chosen by him. Every player tries to maximize the difference between his and opponent's score. Find difference between first player score and second player score if both players will play optimally.

Input

The first line contains two integer numbers n and m (1 <= n <= 10^5, 1 <= m <= 10^5) — the number of vertices and edges, respectively.

The second line contains integers c1, c2, ..., c[2*n] (1 <= c[i] <= 1000) – numbers on vertices.

The following m lines contain information about the graph edges. Each line contains 3 numbers x[i], y[i] and w[i] (1 <= x[i], y[i] <= 2*n, x[i] != y[i], 1 <= w[i] <= 1000) — the endpoints of the i-th edge, and number on this edge.

Output

Print one integer - difference between 2 player's score

Example

Input:

2 2

1 2 3 4

1 2 5

1 2 6

Output:

2

Input:

2 2

1 2 3 4

1 2 5

1 3 6

Output:

1

Input:

2 2

1 2 3 4

1 2 6

1 3 5

Output:

2

### Problem G
One of the favorite lessons among students is physical education. At the beginning of the lessons all students of one group are in the row. They want to avoid having too many girls or too many boys standing consecutively. The teacher decides to arrange the students in order to minimize the girls/boys regularity. The girls/boys regularity is the maximum number of students of the same gender that appears consecutively. Given the number of girls and boys in one group. Calculate the minimum girls-boys regularity among all possible positions.

Input

Input file contains several lines of input. Each line has two integers N and M representing the number of girls and boys in the group (0 ≤ N, M ≤ 1000). The end part of input is showed with two numbers "-1 -1"


Output

For each input line, print a single integer representing the minimum girls-boys regularity that an positions of N girls and M boys can have.

Example

Input: 

1 11

5 5

999 0 

-1 -1

Output: 

6

1

999

### Problem H
As you remember from the previous tasks of challenge, our students like the math lessons, especially the number theory. Today a teacher decided to give a new problem for students to think. He wrote N positive integers and formula f(m) = (m mod a[1]) + (m mod a[2]) + ...+ (m mod a[n]). Here, X mod Y denotes the remainder of the division of X by Y. Students need to find the maximum value of f.

Input

The first line of input includes integer N (2 <= N <= 3000). The following line has integers a[1], a[2], ..., a[N] (2 <= a[i] <= 10^5).

Output

Print the maximum value of f

Example

Input: 

4

2 4 5 4

Output: 

11

### Problem I
You predict the price of a certain laptop for the next M days. Each day you will either buy one laptop, sell one laptop, or do nothing. Initially you don't have any laptop, and you cannot sell laptop when you don't own any. At the end of the M days you want to have as much money as possible.

Input

The first line of input includes integer M (2 <= M <= 5*10^5). The following line has integers a[1], a[2], ..., a[M] (1 <= a[i] <= 10^9), where a[i] is the price of the laptop on i-th day.

Output

Print one integer — maximum amount of money you can earn.

Example

Input: 

7

50 8 9 9 29 30 7

Output: 

42


Input: 

20

9 29 8 9 13 4 14 27 16 11 27 14 4 29 23 17 3 9 30 19

Output: 

147

### Problem J
Our two lovebirds, Banmuon and Henho want to go on a date. However, they are afraid that their friends or families may find out. Thus, they have decided to setup their dating time using the following secret methods:

Banmuon will send Henho a string with format h1:m1 h2:m2 alpha where h1:m1 and h2:m2 represent some time in -hour format.  is an integer between  and  and is divisible by .

Their dating time will be some time between h1:m1 and h2:m2, where the two clock hands, hour and minute, forms an angle equals to  degree.

However, there is a problem: their dating time may not be unique! Please help Banmuon and Henho figure out how many possible valid dating times there are.

Note

In this problem, we use a normal analog clock:

The minute hand rotates continuously. It takes  minutes to make one complete rotation (from  to ).

The hour hand rotates continuously. It takes  hours to make one complete rotation (from  to ).

Input

The first line of input contains a single integer   — the number of test cases.

 lines follow, each line has format: h1:m1 h2:m2 alpha . , ,  and  will have exactly two digits, with leading zero if they are less than .

It is guaranteed that h1:m1 is less than or equal to h2:m2 and  is divisible by .

Output

For each test case, print the number of instants when the two clock hands form an angle equals to  degrees, between h1:m1 and h2:m2, inclusive.

Explanation of Sample input

In the first test case, there are  instants when the two clock hands form a -degree angle. Below are the first  instants.

00:00

01:05 and  minute.

02:10 and  minute.

03:16 and  minute.

04:21 and  minute.

05:27 and  minute.

06:32 and  minute.

07:38 and  minute.

08:43 and  minute.

09:49 and  minute.

10:54 and  minute.

Sample Input 1

3
00:00 23:59 0
00:00 23:59 90
18:00 18:01 180

Sample Output 1

22
44
1
